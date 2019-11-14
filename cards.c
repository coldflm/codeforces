#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100000

int main(void)
{
    int n;
    scanf("%d",&n);
    char c[MAX];
    scanf("%s",c);
    int zs=0,ns=0;

    for(int i=0;i<n;i++)
    {
        if(c[i]=='z')
            zs++;
        if(c[i]=='n')
            ns++;
    }

    while(ns--)
    {
        printf("%d ",1);
    }


    for(int i=1;i<=zs;i++)
    {
        if(i==zs)
            printf("%d",0);
        else
            printf("%d ",0);
    }


    return 0;
}
