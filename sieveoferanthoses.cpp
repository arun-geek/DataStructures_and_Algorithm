#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<vector>
#include<iomanip>
#include<map>
#define ull unsigned long long int
#define fl(i,n) for(i=0;i<n;i++)
#define ls(i,s) for(i=0;s[i]!='\0';i++)
#define gi(x) fastscan(x)
#define pi(x) printf("%d",x)
#define checkline(x) while(x!='\0' && x!='\n')
#define pn printf('\n')
#define ps printf(' ')
#define lli long long int
using namespace std;
void mark(int *a,ull n, ull x)
{
    ull X;
    X=x<<1;
    while(X<=n)
    {
        a[X]=1;
        X+=x;
    }
}
void seive(int *a,ull n)
{
    ull N=2;
    a[0]=1;
    a[1]=1;
    while(N<=n)
    {
        if(a[N]==0)
            mark(a,n,N);
        N++;
    }
}
int main()
{
    long int N;
    cout<<"Enter Limit N :";
    cin>>N;
    int i,a[N];
    fill(a,a+N,0);
    seive(a,N);
    vector <ull> prime;
    prime.resize(0);
    fl(i,N)
    if(a[i]==0)
         prime.push_back(i);
    for(vector<ull>::iterator start = prime.begin(); start!=prime.end(); ++start)
        cout<<*start<<"  ";
    return 0;
}
