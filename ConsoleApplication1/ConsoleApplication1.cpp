// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "KW.h"
#include <stdio.h>
#include <string.h>


int getInt() 
{

    int iMyNum;

    // Ask the user to type a number
    printf("\nType a number: ");

    // Get and save the number the user types
    scanf("%d", &iMyNum);

    // Output the number the user typed
    printf("Your number is: %d", iMyNum);

    return iMyNum;

}

char* getString(char *pszString)
{
    char szString[100];

    printf("\nType your full name: ");

    scanf("%s", &szString);

    printf("\nHello %s\n", szString);

    strcpy(pszString, szString);


    return pszString;
}



int main()
{

    char szName[100];
    char* pszName;
    int iMyNum;

    iMyNum = getInt();
    pszName = getString(szName);

    printf("\n\nMy Name is %s!\n\n", pszName);



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
