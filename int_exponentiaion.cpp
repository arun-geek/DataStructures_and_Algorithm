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
lli result = 1;
if(p==0)
    return 1;
if(p==1)
    return a;
while(p)
{
    if(p&1)
        result *= a;
    result%=mod;
    p >>=1;
    a*=a;
    a%=mod;
}
return result;
}
int main()
{
    lli a,p,m;
    m=1;
    cout<<"Enter a , p and mod : ";
    cin>>a>>p>>m;
    cout<<exp(a,p,m)<<'\n';
    return 0;
}
