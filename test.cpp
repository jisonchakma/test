#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll x,y;
    cin>>x>>y;
    ll count=0;
    for(ll i=x;i<=y;i*=2)
    {
        count++;
    }
    cout<<count<<endl;
    return 0;

}