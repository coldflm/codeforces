#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[5][5],m,n,i,j,count=0;
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
            if(a[i][j]==1)
                {
                    m=i;
                    n=j;
                    break;
                }
    count=abs(2-m);
    count+=abs(2-n);
    printf("%d",count);
    return 0;

}
