#include<stdio.h>
#define MAX 100005
int main()
{
    int n,count=1;
    scanf("%d",&n);
    int a[MAX];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
            count++;
    }
    printf("%d",count);
    return 0;
}
