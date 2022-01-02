#include<stdio.h>
#include<string.h>
int mm_str(char [], char []);
int main() {
    int a=0;
    char mhm1[100],mhm2[100];
    printf("1st String\n");
    gets(mhm1);
    printf("2nd String\n");
    gets(mhm2);

    a=mm_str(mhm1,mhm2);
    if(a==0)
        printf("Same");
    else
        printf("Not same");

}
 int mm_str(char mhm1[],char mhm2[]) {
    int i=0;
    while(mhm1[i]==mhm2[i]) {
        if(mhm1[i]=='\0'||mhm2[i]=='\0') {
            break;
        }
        i++;
    }
    if(mhm1[i]=='\0'&&mhm2[i]=='\0')
        return 0;
    else
        return 1;
}
