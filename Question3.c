//Take two strings from the user and check whether they are the same or not (without using library function , u can only use string length function).
#include<stdio.h>
#include<string.h>
int mm(char a[],char b[]) {
    int i;
    for(i=0; a[i]==b[i]&&a[i]&&b[i]; i++)
        return a[i]-b[i];
}
void main() {
    char a[100],b[100];
    printf("\nEnter First String\n");
    scanf("%s",&a);
    printf("\nEnter Second String\n");
    scanf("%s",&b);
    if(mm(a,b)==0)
        printf("Same");
    else
        printf("Not Same");
}
