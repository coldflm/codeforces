#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    if(m>n)
    {
        printf("%d",-1);
        return 0;
    }
    if(n%2==0)
        mid=n/2;
    else
        mid=(n/2)+1;



    printf("%d",-1);
    return 0;
}
