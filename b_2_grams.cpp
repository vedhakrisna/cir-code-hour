#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a;
    cin>>a;
    char s1,s2;
    int c,m=INT_MIN;
    for(int i=0;i<a.size()-1;i++)
    {
        c=0;
        for(int j=0;j<a.size()-1;j++)
        {
            if(a[i]==a[j] && a[i+1]==a[j+1])
            {
                c++;
            }
        }
        if(c>m)
        {
            s1=a[i];
            s2=a[i+1];
            m=c;
        }
    }
    cout<<s1<<s2<<endl;
}
