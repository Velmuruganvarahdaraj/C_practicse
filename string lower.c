#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    int i;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='A'&& a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
    }
    printf("%s",a);
}

