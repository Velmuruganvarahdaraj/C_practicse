#include<stdio.h>
int main()
{
  int n,i,pos,ele;
  printf("ENTER THE SIZE:");
  scanf("%d",&n);
  int a[n+1];
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
  printf("\nENTER THE ELEMENT TO BE INSERTED:");
  scanf("%d",&ele);
  for(i=n-1;i>=pos;i--)
  {
      a[i+1]=a[i];
  }
  a[pos]=ele;
  for(i=0;i<=n;i++)
  {
      printf("%d ",a[i]);
  }
}
