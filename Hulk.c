#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char str2[20]="I hate ";
    char str3[20]="I love ";
    char str4[20]="that ";
    char str5[20]="it";
    int count=0;
    while(n)
    {
        count++;
        if(count%2!=0)
            printf("%s",str2);
        else
            printf("%s",str3);
        n--;
        if(n!=0)
            printf("%s",str4);
    }
    printf("%s",str5);
    return 0;
}
