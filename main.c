#include <stdio.h>
#include <string.h>
#include "functions.h"

const int SIZE=256;

int main()
{
    char buffer[SIZE]; //="ls -l file";
    //Getting string from user
    printf("Please enter a string \n"); //Getting string from user
    //scanf
    fgets(buffer, SIZE, stdin);
    int size=strlen(buffer);
    buffer[size-1]='\0';

    char **ptr;

    int numberOfTokens;
    numberOfTokens=getTokens(buffer, &ptr);
    printf("Number of tokens: %d \n", numberOfTokens);
    for(int i=0; i<numberOfTokens+1;i++)
    {
        printf("Token %d: %s \n", i+1, ptr[i]);
        //printf("%s \n", ptr[i]);
    }

    //free memory
    free(ptr);


    return 0;
}
 
