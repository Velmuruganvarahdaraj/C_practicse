#include<stdio.h>
#define MUL(a,b) a*b
int main()
{
  printf("%d",MUL(5-2,7+4));
  #undef MUL(a,b)
  printf("%d",MUL(5-2,7+4));
}
