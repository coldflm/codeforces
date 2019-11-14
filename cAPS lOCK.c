

//WRONG ANSWER


#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int l,i;
    scanf("%s",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
    }
    if(str[0]>='a' && str[0]<='z')
        str[0]=str[0]-32;
    printf("%s",str);
    return 0;

}

