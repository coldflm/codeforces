#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define MAX 105

int main(void)
{
    int n,a[MAX];
    scanf("%d",&n);
    n++;
    for(int i=1;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=1;i<n;i++)
    {
      for(int j=1;j<n;j++)
      {
          if(i==a[j])
          {
              printf("%d ",j);
              break;
          }
      }
    }

    return 0;
}
