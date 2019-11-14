#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    long long int t;
    scanf("%d",&n);
    t=pow(2,n);
    t--;
    printf("%I64d",t);
    return 0;
}
