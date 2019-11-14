//Holiday Of Equality

#include<stdio.h>

int main()
{
    int n,max,tot,sum=0,s;
    int a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
        sum=sum+a[i];
    }
    tot=max*n;
    s=tot-sum;
    printf("%d",s);
    return 0;
}
