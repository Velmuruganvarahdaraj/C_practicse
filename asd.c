/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int printspiral(int a[3][3],int rl,int cl,int r,int c)
{
    int i;

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
       return printspiral(a,rl+1,cl+1,r-1,c-1);
}
int main()
{
    int a[3][3],i,j;
    int r=3,c=3;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    if(r==c)
    {
       printspiral(a,0,0,r,c);
    }
}
