#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[100];
    int l,i;
    scanf("%s",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]=='H' || str[i]=='Q' || str[i]=='9')
        {
            printf("YES");
            exit(0);
        }
    }
    printf("NO");
    return 0;

}
