#include <stdio.h>
#include <string.h>
#include "functions.h"

const int SIZE=256;

int main()
{
    char buffer[SIZE]="I love NIC"; //"I love NIC" for testing purposes
    //Getting string from user
    //char *cptr;
    //printf("Please enter a string \n"); //Getting string from user
    //cptr = fgets(buffer, SIZE, stdin);
    // if(cptr== NULL) //
    // {
    //     exit(1);
    // }
    //printf("%d", len); //for testing
    char **ptr;

    //using strtok() for testing
    //strok(buffer);
    //mystrok(buffer, ptr);

    int numberOfTokens;
    numberOfTokens=getTokens(buffer, &ptr);
    printf("Number of tokens: %d \n", numberOfTokens);
    for(int i=0; i<numberOfTokens;i++)
    {
        printf("Token %d: %s \n", i+1, ptr[i]);
        //printf("%s \n", ptr[i]);
    }

    //free memory


    return 0;
}
 