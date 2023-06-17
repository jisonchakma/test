#include<bits/stdc++.h>
using namespace std;
const int N=1000;
int a[N];
int w[N];
int dp[N][N];
int max_sum(int n,int cap)
{
    if(n==0)
    return 0;
    if(dp[n][cap]!=-1)
    return dp[n][cap];
    if(cap<=w[n])
    {
    int ans=max_sum(n-1,cap);
    dp[n][cap]=ans;
    return ans;
    }
    int ans1=a[n]+max_sum(n-1,cap-w[n]);
    int ans2=max_sum(n-1,cap);
    int ans=max(ans1,ans2);
    dp[n][cap]=ans;
    return ans;
}
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>w[i];
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=k;j++)
        {
        dp[i][j]=-1;
        }
    }
    cout<<max_sum(n,k)<<endl;
    return 0;
}