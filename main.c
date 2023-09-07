/**
 * @file main.c
 * @author Mikayla Winant
 * @brief 
 * @version 0.1
 * @date 2023-09-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include <string.h>
#include "functions.h"

const int SIZE=256;

int main()
{
    char buffer[SIZE];
    //Getting string from user
    printf("Please enter a string \n"); //Getting string from user
    fgets(buffer, SIZE, stdin);
    int size=strlen(buffer);
    buffer[size-1]='\0'; //removing \n character from string

    char **ptr;

    int numberOfTokens;
    numberOfTokens=getTokens(buffer, &ptr);
    printf("Number of tokens: %d \n", numberOfTokens);
    for(int i=0; i<numberOfTokens+1;i++)
    {
        printf("Token %d: %s \n", i+1, ptr[i]);
    }

    //free memory
    free(ptr);

    return 0;
}
 
