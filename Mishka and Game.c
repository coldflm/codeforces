#include<stdio.h>
#define MAX 105

int main()
{
    int n;
    int m=0,c=0;
    scanf("%d",&n);
    int i,j,a[MAX][2];
    for(i=0;i<n;i++)
        for(j=0;j<2;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
    {
        if(a[i][1]==a[i][0])
            continue;
        else if(a[i][1]>a[i][0])
            m++;
        else
            c++;
    }
    if(m==c)
        printf("Friendship is magic!^^");
    else if(m<c)
        printf("Mishka");
    else
        printf("Chris");
    return 0;
}
