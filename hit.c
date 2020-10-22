#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    void bubblesort(int ar[], int n) 
    { 
       int i, j,temp; 
       for (i = 0; i < n-1; i++)
       {       
            for (j = 0; j < n-i-1; j++)
            {  
               if (ar[j] > ar[j+1])
               {
                    temp=ar[j];
                   ar[j]=ar[j+1];
                   ar[j+1]=temp;
               } 
            }
       }
    } 
    
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        bubblesort(a,n);
        int c=0;
        for(int k=0;k<n;k++)
        {
            if(a[k]==a[k+1])
            {
                c++;
            }
            else
            {
                if(c==0)
                {
                    printf("%d\n",a[k]);
                    break;
                }
                else
                {
                    c=0;
                }
            }
        }
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

