#include<stdio.h>
#include<string.h>
int main()
{
  char a[10],b[10];
  int i,j,k=0;
  gets(a);
  for(i=0;a[i]!='\0';i++);
  for(j=i-1;j>=0;j--)
  {
      b[k]=a[j];
      k++;
  }
  b[k]='\0';
  printf("%s",b);
}
