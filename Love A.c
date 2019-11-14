#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    int as=0,os=0;
    scanf("%s",str);
    int l=strlen(str);
    for(int i=0;i<l;i++)
    {
        if(str[i]=='a')
            as++;
        else
            os++;
    }
    int erase;
    if(as>os)
        printf("%d",l);
    else
        printf("%d",as+as-1);
    return 0;
}
