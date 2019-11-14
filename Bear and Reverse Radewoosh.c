#include<stdio.h>
#define MAX 60

int main()
{
    int n,c;
    scanf("%d%d",&n,&c);
    int a[2][MAX];
    for(int i=0;i<2;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    int lP=0,rP=0,t=0;

    for(int j=0;j<n;j++)
    {
        int localPoints=0;
        t+=a[1][j];
        localPoints=a[0][j]-(c*t);
        if(localPoints>0)
            lP+=localPoints;
    }

    t=0;

    for(int j=n-1;j>=0;j--)
    {
        int localPoints=0;
        t+=a[1][j];
        localPoints=a[0][j]-(c*t);
        if(localPoints>0)
            rP+=localPoints;
    }

    if(lP==rP)
        printf("Tie");
    else if(lP>rP)
        printf("Limak");
    else
        printf("Radewoosh");

    return 0;
}
