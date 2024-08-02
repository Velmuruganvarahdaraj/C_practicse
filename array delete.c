#include<stdio.h>
int main()
{
  int n,i,pos;
  printf("ENTER THE SIZE:");
  scanf("%d",&n);
  int a[n];
  printf("\nENTER THE ELEMENTS :");
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
      printf("%d ",a[i]);
  }
  printf("\nENTER THE POSITOIN TO INSERT A VALUE:");
  scanf("%d",&pos);
  for(i=pos-1;i<n;i++)
  {
      a[i]=a[i+1];
  }
  for(i=0;i<n-1;i++)
  {
      printf("%d ",a[i]);
  }
}

