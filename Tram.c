#include<stdio.h>
#define MAX 1000

int main()
{
    int n,count=0,max=0,i,j;
    int a[MAX][2];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<2;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
        for(j=0;j<2;j++)
        {
            if(j==0)
                count=count-a[i][j];
            else
                count=count+a[i][j];
            if(count>max)
                max=count;
        }
        printf("%d",max);
        return 0;
}
