#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,k,s;
    scanf("%d %d",&n,&k);
    for(int i=0;i<k;i++)
    {
        s=n%10;
        if(s!=0)
            n=n-1;
        else if(s==0)
            n=n/10;
    }
    printf("%d",n);
    return 0;
}
