#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

extern "C" {

    int getRandomInt()
    {
        int i = 5;
        i = rand();

        return i;

    }

    int getInt()
    {

        int iMyNum;
        int iResult;

        // Ask the user to type a number
        printf("\nType a number: ");

        // Get and save the number the user types
        iResult = scanf("%d", &iMyNum);

        // Output the number the user typed
        printf("Your number is: %d", iMyNum);

        return iMyNum;

    }

    char* getString(char* pszString)
    {
        char szString[100];

        printf("\nType your full name: ");

        scanf("%s", &szString);

        printf("\nHello %s\n", szString);

        strcpy(pszString, szString);


        return pszString;
    }

}
