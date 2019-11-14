#include<stdio.h>
#define MAX 100

int main()
{
  int n,i,j;
  int x=0,y=0,z=0;
  int a[MAX][3];
  scanf("%d",&n);
  for(i=0;i<n;i++)
    for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);

  for(i=0;i<n;i++)
    for(j=0;j<3;j++)
    {
      x+=a[i][0];
      y+=a[i][1];
      z+=a[i][2];
    }

    if(x==0 && y==0 && z==0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
