#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                for(int k=j;k<n;k++)
                {
                    if(a[i]+a[j]+a[k]==x)
                    {
                        c++;
                        j=n;
                        i=n;
                    }
                }
            }
        }
        if(c)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
}
