#include<stdio.h>

int main()
{
    long long int n,totalCost=0,borrow;
    int k,w;
    int i;
    scanf("%d%lld%d",&k,&n,&w);
    for(i=1;i<=w;i++)
        totalCost+=k*i;
    borrow=totalCost-n;
    if(borrow<0)
        borrow=0;
    printf("%lld",borrow);
    return 0;
}
