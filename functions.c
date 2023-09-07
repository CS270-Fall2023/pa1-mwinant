/**
 * @file functions.c
 * @author MIKAYKA WINANT
 * @brief 
 * @version 0.1
 * @date 2023-08-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "functions.h"
/**
 * @brief Tokenize string from user
 * 
 * @param str from user
 * @param ptr 
 * @return int number of tokens
 */
int getTokens(char str[], char **ptr[])//will need to dynamically allocate space for args
{
    int len=strlen(str);
    *ptr=malloc(len/2*sizeof(char*));
    for (int i =0; i<len/2; i++) //point pointer of char array to s array
    {
        (*ptr)[i]=NULL;

    }
    

    for (int i =0; i<len/2; i++)  //print array of pointers to s array (s array is printed)
    {
        //printf("%s\n",(*ptr)[i]); //scanf automatically deferences pointer, allowing it to print array

    }

    int token=0;
    int start=0;
    int end=0;
    for(int i=0; i<=len; i++) //len=str length
    {
        if((str[i])==' '|| (str[i])=='\0')
        {
            int ln=end-start+1; //length of string in token
            (*ptr)[token]=malloc((ln)*sizeof(char)); 
            strncpy((*ptr)[token], str+start, ln-1);
            (*ptr)[token][ln-1]='\0'; //(*ptr)[ln-1]=NULL;
            start=end+1; //moving start to correct position
            token++;

            //checking for more spaces
            int result=isspace(str[i+1]);
            if(result==1)
            {
                printf("whitespace detected...");
                i++; //next character is not a whitespace
                start=end+2;
                end++;
            }
        }
        
        end++;
 
    }
    return token;

}

    


