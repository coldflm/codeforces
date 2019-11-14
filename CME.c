#include<stdio.h>

int main()
{
    int q,n;
    scanf("%d",&q);
    while(q)
    {
        scanf("%d",&n);
        if(n==2)
            printf("%d\n",2);
        else if(n%2==0)
            printf("%d\n",0);
        else
            printf("%d\n",1);

        q--;
    }
    return 0;
}
