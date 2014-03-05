#include "StdAfx.h"
#include "verifier.h"


verifier::verifier(String^ utype, String^ uname, String^ pwd)  // Verifies user credentials against possible user_id and password combinations.
{
	verified=false;
	if ( uname == "Ranu" ) {
		if ( pwd == "Vikram" ) {
			verified=true;}}
}
