// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)


#include "KW.h"
#include "TestStrings.h"
#include "TestIO.h"
#include "TestModule.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{

    char szName[100];
    char* pszName;
    int iMyNum;
    int iRandom = 5;

    testModule();

    iMyNum = getInt();
    // iRandom = getRandomInt(10);
    pszName = getString(szName);

    printf("\n\nMy Name is %s!\n\n", pszName);

    printf("\n\nMy random number was %d", iRandom);

    // testStrings1();


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
