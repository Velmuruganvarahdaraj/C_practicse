#include<stdio.h>
int main()
{
    int res=0,n;
    char a[100],b[100];
    printf("ENTER STRING A:");
    gets(a);
    printf("ENTER STRING B:");
    gets(b);
    int i=0;
    for(n=0;a[n]!='\0';++n);
    while(b[i]!='\0')
    {
        a[n]=b[i];
        ++i;
        ++n;
    }
    a[n]='\0';
    printf("%s",a);
}
