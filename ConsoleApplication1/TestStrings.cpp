#include "KW.h"
#include <string.h>
#include <stdio.h>


extern "C" {
	void testStrings1()
	{

		char szName[] = "Keith Woolterton";

		printf("\n\n### Test Strings 1 ###");
		printf("\nMy name is %s.", szName);

		return;

	}
}

