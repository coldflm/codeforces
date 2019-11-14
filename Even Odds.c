#include<stdio.h>

int main()
{
    long long int n,k,mid,x,ans;
    scanf("%I64d%I64d",&n,&k);
    if(n%2==0)
        mid=n/2;
    else
        mid=(n/2)+1;

    if(k<=mid)
        ans=2*k-1;
    else
    {
        x=k-mid;
        ans=2*x;
    }
    printf("%I64d",ans);
    return 0;
}
