#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll l,r;
    cin>>l>>r;
    if(l>r) swap(l,r);
    ll sm = (r*(r+1))/2;
    l--;
    sm -= (l*(l+1))/2LL;


    
    cout<<sm<<"\n";

}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
        
    }
    return 0;
}