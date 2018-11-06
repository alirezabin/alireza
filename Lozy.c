#include <stdio.h>
int main()
{
    char a,b;
    scanf("%c %c",&a,&b);
    char max,min;
    if (a > b)
    {
        max=a;
        min=b;
    }
    else
    {
        max=b;
        min=a;
    }
        int d=max-min;

    for(int i=1;i <= d+1;i++)
    {
        char f=min;
        for(int k=i;k <= d;k++)
        {
            printf(" ");
        }
        for(int j=1;j <= i;j++)
        {
            
            printf("%c ",f);
            f++;
        }
        
        printf(" \n");
    }
    
    d=1;
    for(int i=(max-min);i >= 1;i--)
    {
        char f=min;
        for(int k=1; k <= d ; k++)
        {
        
            printf(" ");
        }
        for(int j=i;j >=1 ; j--)
        {
            printf("%c ",f);
            f++;
        }
        printf("\n");
        d++;
    }


            
    return 0;
}