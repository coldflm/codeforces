//  Time limit exceeded
#include<stdio.h>
int main()
{
    int n;
    int l,r,d,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d%d",&l,&r,&d);
        int j;
        for(j=1;;j++)
        {
            if((j%d==0) && (j<l) )
            {
                printf("%d\n",j);
                break;
            }
            if((j%d==0) && (j>r) )
            {
                printf("%d\n",j);
                break;
            }
            if(j==l)
                j+=r-l;
        }
    }
    return 0;
}
