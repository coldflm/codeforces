#include<stdio.h>
#define MAX 10

int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    int a[MAX][MAX];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
          if(i==0 || j==0)
                a[i][j]=1;
          else
          {
              a[i][j]=a[i-1][j]+a[i][j-1];
          }
        }
    }
    printf("%d",a[n-1][n-1]);
    return 0;
}
