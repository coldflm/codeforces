#include<stdio.h>

int isLucky(int n);
int isALucky(int n);

int main()
{
  int n,isL;
  scanf("%d",&n);
  if(isLucky(n))
      printf("YES");
  else if(isALucky(n))
    printf("YES");
  else
    printf("NO");
  return 0;
}

int isLucky(int n)
{
    int rem;
    while(n>0)
    {
        rem=n%10;
        if(rem==1 || rem==2 || rem==3 || rem==5 || rem==6 || rem==8 || rem==9 || rem==0)
            return 0;
        n=n/10;
    }
    return 1;
}

int isALucky(int n)
{
    for(int i=1;i<=1000;i++)
    {
        if(isLucky(i))
        {
            if(n%i==0)
                return 1;
        }
    }
    return 0;
}
