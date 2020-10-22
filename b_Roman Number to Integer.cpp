#include<bits/stdc++.h>
using namespace std;
int var(char s)
{
    int val=0;
                if(s=='I')
            {
                val=1;
            }
            else
                if(s=='V')
            {
                val=5;
            }
            else
                if(s=='X')
            {
                val=10;
            }
            else
                if(s=='L')
            {
                val=50;
            }
            else
                if(s=='C')
            {
                val=100;
            }
            else
                if(s=='D')
            {
                val=500;
            }
            else
                if(s=='M')
            {
                val=1000;
            }
    return val;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        int sm=0,val;
        for(int i=0;i<n-1;i++)
        {
             val=var(s[i]);
            if(var(s[i])>=var(s[i+1]))
            {
                val=val;
            }
            else
            {
                val=-val;
            }
            //cout<<val<<endl;
            sm=sm+val;
        }
        int i;
        i=n-1;
        sm=sm+var(s[i]);
        cout<<sm<<endl;
    }
}
