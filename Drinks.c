#include<stdio.h>

int main()
{
    float a[100],sum=0;
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%f",&a[i]);
    for(i=0;i<n;i++)
        sum+=a[i];
    printf("%.12f",sum/n);
    return 0;
}
