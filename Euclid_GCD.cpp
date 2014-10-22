#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<vector>
#include<map>
#define ull unsigned long long int
#define fl(i,n) for(i=0;i<n;i++)
#define gi(x) fastscan(x)
#define pi(x) printf("%d",x)
#define pn printf('\n')
#define ps printf(' ')
using namespace std;
int gcd(int x,int y)
{
    if(x==0)
        return y;
    return gcd(y%x,x);
}
int main()
{
    int x,y;
    cout<<"Enter Two Numbers  : ";
    cin>>x>>y;
    cout<<gcd(x,y);
    return 0;
}
