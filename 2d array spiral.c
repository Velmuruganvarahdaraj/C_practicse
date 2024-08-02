#include<stdio.h>
int printspiral(int a[10][10],int rl,int cl,int r,int c)
{
    int i,j;
       for(i=rl;i<c;i++)
       {
               printf("%d ",a[rl][i]);
       }
       for(i=rl+1;i<c;i++)
       {
               printf("%d ",a[i][c-1]);
       }

       if(rl<r)
       {
           for(i=r-2;i>=rl;--i)
           {
               printf("%d ",a[r-1][i]);
           }
       }
       if(cl<c)
       {
           for(i=c-2;i>cl;i--)
           {
               printf("%d ",a[i][cl]);
           }
       }
       printspiral(a,rl+1,cl+1,r-1,c-1);

}

int main()
{
    int c,r,a[10][10],i,j;
    printf("ENTER THE NO OF ROW AND COLUMN:");
    scanf("%d %d",&r,&c);
    printf("ENTER THE ELEMENT FOR %d ROW AND %d COLUMN:",r,c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
    }
    printf("\n");
    if(r==c)
    {
       printspiral(a,0,0,r,c);
    }

}
