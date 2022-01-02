//Take a string from the user and check whether it is a palindrome or not (without using library function , u can only use string length function).
#include<stdio.h>
#include<string.h>
int main() {
    char a[100];
    int i,l;
    printf("Enter a string : \n");
    scanf("%s",&a);
    l=strlen(a);
    for(i=0; i<l; i++) {
        if(a[i]!=a[l-1-i]) {
            printf("Not Palindrome");
            break;
        }
    }
    if(i==l)
    printf("Palindrome");
}
