#include<stdio.h>

int main()
{	
    int i,j,n,s1=0,s2=0;
    scanf("%d",&n);
    int arr[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                s1=s1+arr[i][j];
            }
            if((i+j)==n-1)
            {
                s2=s2+arr[i][j];
            }
        }
    }
    if(s1>s2)
    {
        printf("%d",(s1-s2));
    }
    else
    {
        printf("%d",(s2-s1));
    }


    return 0;
}
