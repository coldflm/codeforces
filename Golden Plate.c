#include<stdio.h>

int main()
{
    int w,h,k;
    scanf("%d%d%d",&w,&h,&k);
    int cells=0;
    int n=k;
    int i=1;
    while(n)
    {
        int a,b;
        a=w-4*(i-1);
        b=h-4*(i-1);

        cells=cells+(a*2);
        cells=cells+((b-2)*2);

        n--;
        i++;
    }
    printf("%d",cells);
    return 0;
}
