#include<stdio.h>
int main()
{
  int n,i,j,k,temp;
  scanf("%d",&n);
    for(i=n;i<=n;i++)
    {
        temp=i;
        for(j=1;j<=i;++j)
        {
            printf("%d",temp);
            --temp;
        }
      for(j=1;j<=i;j++)
      {
          printf("%d",i);
      }
      printf("\n");
    }

}
