#include<stdio.h>
#include<string.h>
int main()
{
  char a[10];

  scanf("%[^\t]s",a);// \t is used to get a paragraph
  puts(a);
}
