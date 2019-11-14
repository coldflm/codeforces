#include<stdio.h>

int main()
{
    long int n,count=0;
    scanf("%ld",&n);
    while(n>=5)
    {
        int div=n/5;
        int rem=n%5;
        n=rem;
        count+=div;
    }
    while(n>=4)
    {
        int div=n/4;
        int rem=n%4;
        n=rem;
        count+=div;
    }
    while(n>=3)
    {
        int div=n/3;
        int rem=n%3;
        n=rem;
        count+=div;
    }
    while(n>=2)
    {
        int div=n/2;
        int rem=n%2;
        n=rem;
        count+=div;
    }
    while(n>=1)
    {
        int div=n/1;
        int rem=n%1;
        n=rem;
        count+=div;
    }
    printf("%ld",count);
    return 0;
}
