#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int count=1;

    for(int i=2;i<=(n/2);i++)
    {
        int k=n-i;
        if(k%i==0)
            count++;
    }

    printf("%d",count);
    return 0;
}
