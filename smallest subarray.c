#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    int i,j,t,n,k,b,m,s,sum,min,f=0,l;
    scanf("%d",&t);
    for(m=0;m<t;m++)
    {
        f=0;
        min=INT_MAX;
        scanf("%d%d",&n,&s);
        int a[n];
        for(i=0;i<n;i++)
        { 
            scanf("%d",&a[i]);
        }
        for(k=0;k<n;k++)
        {
            for(b=k;b<n;b++)
            {
                sum=0;
                for(j=k;j<=b;j++)
                {
                    sum=sum+a[j];
                }
                l=(b-k)+1;
                if(sum>=s)
                {
                    f=1;
                    if(l<min)
                    {
                        min=l;
                    }
                }
                
            }   
        }
        if(f!=1)
        {
            printf("%d\n",0);    
        }
        else if(f==1)
        {
            printf("%d\n",min);
        }
     }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
