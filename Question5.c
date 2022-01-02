//Write a function for string tokenizer.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main() {
    char mhm[100];
    int i=0;

    printf("Enter string: \n");
    gets(mhm);
   int len = strlen(mhm); //string length count

    for(i=0; i<len; i++) {
        if(mhm[i]==' ') {  // here in ' ' is the character upon basis of which you want to tokenize in this code there is space
            mhm[i]='\n' ;
        }
    }
    puts(mhm);
}
