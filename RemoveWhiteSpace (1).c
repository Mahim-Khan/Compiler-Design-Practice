#include <string.h>
int main()
{
    char mhm[100];
    int  i,j=0;
     printf("Enter  the string : ");
    gets(st);


    for(i=0;mhm[i];i++)
    {
     	mhm[i]=mhm[i+j];


     	if(mhm[i]==' '|| mhm[i]=='\t')
     	{
		  j++;
		  i--;
	    }

    }
    printf("\nString after removing all white spaces: ");

 	 printf("%s",mhm);


    return 0;
}
