#include<stdio.h>
int main()
{
  char a[10],i;
  gets(a);
  for(i=0;a[i]!='\0';i++);
printf("%d",i);
}
