#include<stdio.h>

int main()
{
    int n,k,a[50]={0},count=0,i;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<=0)
        continue;
        if(a[i]>=a[k-1])
            count++;
    }
    printf("%d",count);
    return 0;
}
