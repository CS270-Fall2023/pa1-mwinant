/**
 * @file functions.c
 * @author MIKAYKA WINANT
 * @brief 
 * @version 0.1
 * @date 2023-08-28
 * 
 * @copyright Copyright (c) 2023
 * char args: a pointer to a pointer to an array of pointers to char (array of tokens?)
 */
#include "functions.h"

int getTokens(char str[], char **ptr[])//will need to dynamically allocate space for args
{
    int len=strlen(str);
    *ptr=malloc(len/2*sizeof(char*));
    for (int i =0; i<len/2; i++) //point pointer of char array to s array
    {
        (*ptr)[i]=str;

    }
    ptr[len-1]=NULL;

    for (int i =0; i<len/2; i++)  //print array of pointers to s array (s array is printed)
    {
        //printf("%s\n",(*ptr)[i]); //scanf automatically deferences pointer, allowing it to print array

    }

    int token=0;
    int start=0;
    int end=0;
    for(int i=0; i<len; i++) //len=str length
    {
        if((str[i])==' '|| str[i]=='\0' )
        {
            int ln=end-start+1; //length of string in token
            (*ptr)[token]=malloc((ln)*sizeof(char)); 
            strncpy((*ptr)[token], str+start, ln-1);
            (*ptr)[ln-1]=NULL;
            start=end+1; //moving start to correct position
            token++;
        }
        //TODO count null terminator as token
        
        end++;
 
    }
    return token; //returns int because it needs to return EOF, which is type int

}

// char * strok(char *str)
// {
//     char *delim=" ";
//     char *token;
//     token=strtok(str, delim);
//     while(token) //while token does not equal NULL
//     {
//         printf("%s\n", token);
//         token=strtok(NULL, delim);
//     }
//     return token;
// }
    


