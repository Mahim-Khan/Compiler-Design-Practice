//Take two strings from the user and concatenate those strings (without using library function , u can only use string length function).
#include<stdio.h>
#include<string.h>
void main() {
    char a[100],b[100];
    int i=0;
    int j=0;
    printf("1st String : \n");
    scanf("%s",&a);
    printf("2nd String : \n");
    scanf("%s",&b);
    while(a[i]!='\0') {
        i++;
    }
    while(b[j]!='\0') {
        a[i]=b[j];
        j++;
        i++;
    }
    a[i]='\0';
    printf("Concatenated String : %s",a);
}
