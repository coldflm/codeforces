#include<stdio.h>

int main()
{
    long long int n,sum=0,i;
    scanf("%I64d",&n);
    if(n%2==0)
        sum=n/2;
    else
        sum=-1*((n/2)+1);

    printf("%I64d",sum);
    return 0;

}
