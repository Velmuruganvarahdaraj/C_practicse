#include<stdio.h>
int main()
{
    int res=0;
    char a[100],b[100];
    printf("ENTER STRING A:");
    gets(a);
    printf("ENTER STRING B:");
    gets(b);
    int i=0;
    while(a[i]!='\0' || b[i]!='\0')
    {
        if(a[i]!=b[i])
        {
            res=a[i]-b[i];
            break;
        }
        i++;
    }
    printf("%d",res);
}
