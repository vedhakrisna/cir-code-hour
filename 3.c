#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t,f=0,n,c=0,c1=0;
    scanf("%d",&n);
    t=n;
    int temp=n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        f=1;
    }
    while(n!=0)
    {
        n=n/10;
        c1++;
    }
    c1--;
    int s=0;
    while(t!=0)
    {
        int r=t%10;
        s=s+(r*pow(10,c1));
        c1--;
        t=t/10;
    }
    if(f==1 && s==temp)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
