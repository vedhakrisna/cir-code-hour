#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t,sum=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        char s[10];
        int c=0;
        scanf("%s",s);
        int l=strlen(s);
        for(int j=0,k=l-1;j<(l/2),k>(l/2);j++,k--)
        {
            if(s[j]==s[k])
            {
                c++;
            }
        }
        if(c==(l/2))
        {
            sum=sum+l;
        }
    }
    printf("%d",sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
