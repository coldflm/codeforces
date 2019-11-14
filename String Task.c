#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100],str2[200];
    scanf("%s",str1);
    int i=0,j=0;
    int l=strlen(str1);
    while(l)
    {
        if(str1[i]=='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u' || str1[i]=='y' ||
           str1[i]=='A' || str1[i]=='E' || str1[i]=='I' || str1[i]=='O' || str1[i]=='U' || str1[i]=='Y')
               i++;
        else
        {
            str2[j]='.';
            j++;
            str2[j]=str1[i];
            i++;
            j++;
        }
        l--;
    }

    strlwr(str2);
    str2[j]='\0';
    printf("%s",str2);
    return 0;
}
