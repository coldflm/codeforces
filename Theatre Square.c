#include<stdio.h>
int main()
{
    long long int m,n,a,l,w;
    scanf("%lld%lld%lld",&m,&n,&a);
    l=m/a;
    w=n/a;
    if(m%a==0)
        ;
    else
        l++;
    if(n%a==0)
        ;
    else
        w++;
    printf("%lld",l*w);
    return 0;
}
