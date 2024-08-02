#include<stdio.h>
int main()
{
    int i,j,k;
    char a[100];
    printf("ENTER STRING A:");
    gets(a);
    for(i=0;a[i]!='\0';i++);
    for(j=i-1;j>=0;j--)
    {
       if(a[j]==' ')
       {
           a[j]='\0';
           for(k=j+1;a[k]!='\0';k++)
           {
               printf("%c",a[k]);
           }
           printf(" ");
       }
    }
    printf("%s",a);
}

