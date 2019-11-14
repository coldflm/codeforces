#include<stdio.h>
#define MAX 101

int main()
{
    int n,i,j;
    int sum=0;
    scanf("%d",&n);
    int a[MAX][MAX];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0,j=0;i<n;i++,j++)
            sum+=a[i][j];

    for(i=0,j=n-1;i<n;i++,j--)
            sum+=a[i][j];

    int mid=n/2;
    for(i=0;i<n;i++)
        sum+=a[i][mid];

    for(j=0;j<n;j++)
        sum+=a[mid][j];

    sum=sum-(3*a[mid][mid]);
    printf("%d",sum);
    return 0;
}
