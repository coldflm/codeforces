#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n)
    {
        int a;
        scanf("%d",&a);
        if(a==1)
        {
            printf("HARD");
            return 0;
        }
        n--;
    }
    printf("EASY");
    return 0;
}
