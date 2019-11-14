#include<stdio.h>

int main()
{
    int a,b,c,max=0;
    scanf("%d%d%d",&a,&b,&c);
    int arr[6];
    arr[0]=a*b*c;
    arr[1]=a+b+c;
    arr[2]=(a+b)*c;
    arr[3]=a+b*c;
    arr[4]=a*(b+c);
    arr[5]=a*b+c;
    for(int i=0;i<6;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    printf("%d",max);

}
