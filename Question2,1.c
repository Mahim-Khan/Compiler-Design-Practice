//Take a string from the user and count the number of words present in that string.
#include<stdio.h>
#include<string.h>
int main() {
    char str1[50],str2[50];
    int i=0;
    //int j=0;
    printf("\nEnter First String\n");
    gets(str1);
    int len=0;
    while(str1[i]!='\0') {
        if(str1[i]==' ') {
            len++;
        }
        i++;

    }
    printf("%d",len+1);
}
