#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<vector>
#include<map>
#define ull unsigned long long int
#define fl(i,n) for(i=0;i<n;i++)
#define pn printf('\n')
#define ps printf(' ')
#define lli long long int
using namespace std;
lli exp(lli a, lli p ,lli mod)
{
    lli x;
    if(p==0)
        return 1;
    if(p&1)
        {
         x = exp(a,p-1,mod);
         return (a*x)%mod;
        }
    else
    {
        x = exp(a,p>>1,mod);
        return (x*x)%mod;
    }
}
int main()
{
    lli a,p,m;
    m=1;
    cout<<"Enter a , p and mod : ";
    cin>>a>>p>>m;
    cout<<exp(a,p,m);
    return 0;
}
