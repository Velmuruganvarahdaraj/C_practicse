#include<stdio.h>
int main()
{
    int j,k;
    char a[100];
    printf("ENTER STRING A:");
    gets(a);
    for(j=0; a[j]!='\0'; j++)
    {
        if(a[j]==' ')
        {
            a[j]='\0';
            for(k=j-1; a[k]!='\0'; k--)
            {
                printf("%c",a[k]);
            }
            printf(" ");
        }
    }
    for(k=j-1; a[k]!='\0'; k--)
    {
        printf("%c",a[k]);
    }
}

