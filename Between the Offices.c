#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define MAX 105

int main(void)
{
    int n;
    scanf("%d",&n);
    char str[MAX];
    scanf("%s",str);
    int SF=0,FS=0;
    for(int i=0;i<n-1;i++)
    {
        if(str[i]=='F')
        {
            if(str[i]==str[i+1]);
            else
                FS++;
        }
        if(str[i]=='S')
        {
            if(str[i]==str[i+1]);
            else
                SF++;
        }
    }

    if(SF>FS)
      printf("YES");
    else
      printf("NO");

    return 0;
}
