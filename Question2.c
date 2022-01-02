//Take a string from the user and count the number of words present in that string.
#include<stdio.h>
#include<string.h>
int main() {
    char a[50];
    int i=0;
    printf("Enter a String: \n");
    gets(a);
    int mhm=1;
    while(a[i]!='\0') {
        if(a[i]==' ') {
            mhm++;
        }
        i++;
    }
    printf("%d",mhm);
}
