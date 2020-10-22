#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int x,n,f=0;
        scanf("%d%d",&n,&x);
        int ar[n];
        for(int j=0;j<n;j++)
        {
            scanf("%d",&ar[j]);
        }
        for(int a=0;a<n-1;a++)
        {
            for(int b=a+1;b<n;b++)
            {
                if((ar[a]+ar[b])==x)
                {
                    printf("Yes\n");
                    f=1;
                    break;
                }
            }
            if(f==1)
            {
                break;
            }
        }   
        if(f!=1)
        {
            printf("No\n");
        }
    }
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
