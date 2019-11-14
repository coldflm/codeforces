#include<stdio.h>
#include<string.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    char str[100];
    for(i=0;i<n;i++)
    {
        scanf("%s",str);
        int l;
        l=strlen(str);
        if(l<=10)
            printf("%s\n",str);
        else
        {
             printf("%c",str[0]);
             printf("%d",(l-2));
             printf("%c\n",str[l-1]);
        }
    }

    return 0;
}
