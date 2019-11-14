#include<stdio.h>

int main()
{
    int a[3];
    for(int i=0;i<3;i++)
        scanf("%d",&a[i]);
    int max,min,ans;
    max=a[0];
    min=a[0];
    for(int i=0;i<3;i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    ans=max-min; // might need to take absolute values of max
    printf("%d",ans);
    return 0;
}
