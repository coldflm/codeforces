#include<stdio.h>
#include<string.h>
int main()
{
    int n,total=0;
    scanf("%d",&n);
    char str1[20]="Tetrahedron";
    char str2[20]="Cube";
    char str3[20]="Octahedron";
    char str4[20]="Dodecahedron";
    char str5[20]="Icosahedron";
    while(n)
    {
        char test[20];
        scanf("%s",test);
        if(!(strcmp(test,str1)))
                    total+=4;
        if(!(strcmp(test,str2)))
                    total+=6;
        if(!(strcmp(test,str3)))
                    total+=8;
        if(!(strcmp(test,str4)))
                    total+=12;
        if(!(strcmp(test,str5)))
                    total+=20;
        n--;
    }
    printf("%d",total);
    return 0;
}
