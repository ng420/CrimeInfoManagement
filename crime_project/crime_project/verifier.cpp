#include "StdAfx.h"
#include "verifier.h"


verifier::verifier(String^ utype, String^ uname, String^ pwd)
{
	verified=false;
	if ( uname == "Ranu" ) {
		if ( pwd == "Vikram" ) {
			verified=true;}}
}
