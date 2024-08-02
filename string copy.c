#include<stdio.h>
int main()
{
    int res=0,n;
    char a[100],b[100];
    printf("ENTER STRING A:");
    gets(a);
    printf("ENTER STRING B:");
    gets(b);
    int i;
    for(i=0;b[i]!='\0';i++)
    {
        a[i]=b[i];
    }
    a[i]='\0';
    printf("%s",a);
}
