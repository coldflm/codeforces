#include<stdio.h>
#include<string.h>

int main()
{
    char str1[2];
    char str2[2];
    scanf("%s",str1);
    for (int i=0; i<5; i++)
    {
        scanf("%s",str2);
        if (str1[0] == str2[0] || str1[1] == str2[1])
           {
               printf("YES");
               return 0;
           }
    }

    printf("NO");
    return 0;

}
