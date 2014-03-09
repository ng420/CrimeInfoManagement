//-------------------------------------------------------------------
//  Copyright (C) Microsoft.  All rights reserved.
//  Example code using CryptAcquireContext.
#pragma comment(lib, "crypt32.lib")

#include "stdafx.h"
#include "crypto.h"

//using namespace std;
#define ENCRYPT_ALGORITHM CALG_RC4  // we are using RC4 algorithm
#define KEYLENGTH  0x00800000
#define ENCRYPT_BLOCK_SIZE 8

//Acquires the key container which stores each key container from session to session,
//including all the public/private key pairs it contains.
HCRYPTPROV GetCryptContainer(LPCWSTR keyContainer){
	HCRYPTPROV hCryptProv = NULL;

	if(CryptAcquireContext(			//CryptAcquireContext here acquires CSP
	&hCryptProv,					// Variable to hold returned handle.
	keyContainer,
	NULL,
	PROV_RSA_FULL,					// Variable to hold returned handle.
	0)){								// No special action.
		//printf("A cryptographic provider has been acquired.\n");
	}
	else{
		if (GetLastError() == NTE_BAD_KEYSET){
			if(CryptAcquireContext(		//CryptAcquireContext here creates a key container
			&hCryptProv,
			keyContainer,				//use keyContainer to store key pairs
			NULL,
			PROV_RSA_FULL,
			CRYPT_NEWKEYSET)){			// Create new key container.
				//printf("A new key container has been created.\n");
			}
			else{
				//printf("Could not create a new key container.\n");
			}
		}
		else
		{
			//printf("A cryptographic service handle could not be acquired.\n");
		}
	}

	return hCryptProv;
}


HCRYPTHASH CreateHashObj(HCRYPTPROV hCryptProv, const char * szPassword){
	HCRYPTHASH hHash = NULL;
	// Obtain handle to hash object.
	//The CryptCreateHash function is used to initiate the hashing of data.
	//It returns a handle to a CSP hash object, which can be used in subsequent
	//calls to CryptHashData in order to hash the data.
	if(CryptCreateHash(
	hCryptProv,			 // Handle to CSP obtained earlier
	CALG_MD5,    		 // Hashing algorithm
	0,					 // Non-keyed hash
	0,					 // Should be zero
	&hHash)){			 // Variable to hold hash object handle
		//printf("A hash object has been created. \n");

		//  hash the password
		if(CryptHashData(
		hHash,				 // Handle to hash object
		(BYTE *)szPassword,	 // Pointer to password
		strlen(szPassword),  // Length of password
		0)){
			//printf("The password has been added to the hash. \n");
		}
		else{
		// reset hash object to NULL
			CryptDestroyHash(hHash);
			hHash = NULL;
		}
	}
	else{
	//printf("Failed to create hash object.\n");
	}

	return hHash;
}

HCRYPTKEY GetDeriveKey(HCRYPTPROV hCryptProv, HCRYPTHASH hHash){
	HCRYPTKEY hKey = NULL;

	if(CryptDeriveKey(
	hCryptProv,											// Handle to CSP obtained earlier.
	ENCRYPT_ALGORITHM,									//encription algorithm , we are using RC4 algorithm
	hHash,												// Handle to hashed password.
	KEYLENGTH,
	&hKey)){												// Variable to hold handle of key.
		//printf("An encryption key is derived from the password hash. \n");
	}
	else{
		//MyHandleError("Error during CryptDeriveKey!\n");
	}
	return hKey;
}

//////////////////////////////////////////////////////////       CRYPT           ////////////////////////////////////////////////////

string encrypt(string s){
	char *argv;
	argv = new char [s.length()+1];
	for(unsigned int i=0;i<s.length();i++)
	argv[i] = s[i];
	argv[s.length()] = '\0';
	HCRYPTPROV hCryptProv = NULL;       // handle for a cryptographic
	// provider context.
	HCRYPTHASH hHash    = NULL;       // handle for hash object

	LPCWSTR keyContainer   = (LPCWSTR)"MyKeyContainer"; // name of the key container
	// to be used.
	char szPassword[10]   = "CRIME";      // password for encryption and
	// decryption
	HCRYPTKEY hKey;               // handle for session key
	PBYTE pbBuffer;               // hold the data being encrypt
	// or decrypt
	DWORD dwCount;                // data length

	// get CSP
	hCryptProv = GetCryptContainer(keyContainer);

	if(!hCryptProv)
	exit(1); // exit if failed to get CSP

	// get the hash object
	hHash = CreateHashObj(hCryptProv, szPassword);

	if(!hHash)
	exit(1); // exit if failed to get hash object

	// get the session key
	hKey = GetDeriveKey(hCryptProv, hHash);

	if(!hKey)
	exit(1); // exit if failed to get session key

	// determine input data length
	int len = strlen(argv);

	// Determine the block size. If a block cipher is used,
	// it must have room for an extra block.
	DWORD dwBufferLen = len + ENCRYPT_BLOCK_SIZE - (len % ENCRYPT_BLOCK_SIZE);

	// Allocate memory
	if(pbBuffer = (BYTE *)malloc(dwBufferLen)){
	//printf("Memory has been allocated for the buffer. \n");
	}
	else{
		//printf("Failed to allocate memory for the buffer. \n");
		exit(1);
	}

	// copy the data value to buffer
	memcpy(pbBuffer, argv, dwBufferLen);
	//printf("++++++++++++++++++++++++++++++++\n");
	//printf("Before encryption: %s\n", argv);
	dwCount = strlen(argv);

	// encrypt data
	if(!CryptEncrypt(
	hKey,
	0,
	TRUE,
	0,
	pbBuffer,
	&dwCount,
	dwBufferLen)){
		//printf("Error during CryptEncrypt. \n");
	}
	else{
		//printf("After encryption: %s\n", pbBuffer);
		if(hKey)
		CryptDestroyKey(hKey);
		if(hHash)
		CryptDestroyHash(hHash);
		if(hCryptProv)
		CryptReleaseContext(hCryptProv,0);
		s = (reinterpret_cast<char*>(pbBuffer));
		delete pbBuffer;
		delete argv;
		return s;
	}
return "\0";
}

//////////////////////////////////////////////////////////       DECRYPT         ////////////////////////////////////////////////////

string decrypt(string s){
	
	PBYTE pbBuffer = new BYTE [s.length()+1];
	//strcpy( (char*) pbBuffer, s );
	for(unsigned int i=0;i<s.length();i++)
		pbBuffer[i] = (unsigned char)s[i];
	pbBuffer[s.length()] = (unsigned char)'\0';
	HCRYPTPROV hCryptProv = NULL;       // handle for a cryptographic provider context.
	HCRYPTHASH hHash    = NULL;       // handle for hash object

	LPCWSTR keyContainer   = (LPCWSTR)"MyKeyContainer"; // name of the key container
	// to be used.
	char szPassword[10]   = "CRIME";      // password for encryption and
	// decryption
	HCRYPTKEY hKey;               // handle for session key
	//PBYTE pbBuffer;               // hold the data being encrypt
	// or decrypt
	//DWORD dwCount;                // data length
	// get CSP
	hCryptProv = GetCryptContainer(keyContainer);

	if(!hCryptProv)
		exit(1); // exit if failed to get CSP

	// get the hash object
	hHash = CreateHashObj(hCryptProv, szPassword);

	if(!hHash)
		exit(1); // exit if failed to get hash object

	// get the session key
	hKey = GetDeriveKey(hCryptProv, hHash);

	if(!hKey)
		exit(1); // exit if failed to get session key

	unsigned char *pDecrypt = pbBuffer;//////////lolol///////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////
	//////////////////////////////////
	DWORD delen = _mbslen(pbBuffer);

	// decrypt data
	if(CryptDecrypt(
	hKey,
	0,
	TRUE,
	0,
	pbBuffer,
	&delen)){
		//printf("After decryption: %s\n", pbBuffer);
		//printf("++++++++++++++++++++++++++++++++\n");
	}

	// Remove all references
	if(hKey)
	CryptDestroyKey(hKey);
	if(hHash)
	CryptDestroyHash(hHash);
	if(hCryptProv)
	CryptReleaseContext(hCryptProv,0);
	s = (reinterpret_cast<char*>(pbBuffer));
	delete pbBuffer;
	return s;
}

string encrypt1(string s){
	int len = s.length();
	for(int i=0;i<len;i++){
		s[i] = 2*(toupper(s[i]) - 'A') + 'A';
	}
	return s;
}

string decrypt1(string s){
	int len = s.length();
	for(int i=0;i<len;i++){
		s[i] = ( s[i] - 'A')/2 + 'A';
	}
	return s;
}