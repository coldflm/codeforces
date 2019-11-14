#include<stdio.h>
#define MAX 1005

int main()
{
    int n,a[MAX][3];
    int i,j;
    int at=0,bt=0,ar=0,br=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<n;i++)
    {
        if(a[i][0]==1)
            {
                at+=10;
                ar+=a[i][1];
            }
        else
            {
                bt+=10;
                br+=a[i][1];
            }
    }


    if(ar>=(at/2))
        printf("LIVE\n");
    else
        printf("DEAD\n");

    if(br>=(bt/2))
        printf("LIVE");
    else
        printf("DEAD");

    return 0;
}
