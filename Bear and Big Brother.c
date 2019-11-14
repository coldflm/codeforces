#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int count=0;
    while(1)
    {
        count++;
        a*=3;
        b*=2;
        if(a>b)
        {
            printf("%d",count);
            return 0;
        }
    }
}
