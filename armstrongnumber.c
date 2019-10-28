#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i,j,n,u,g,m,s,r;
    printf("Enter a number:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
     {
         u=i;
    for (m=0;u!=0;m++)
    {
        u=u/10;
    }
    g=i;


    for (s=0;g!=0;)
        {
            r=g%10;
            s=s+pow(r,m);
            g=g/10;
        }
        if(s==i)
            printf("%d ",s);
    }




    return 0;
}
