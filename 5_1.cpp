#include<bits/stdc++.h>
using namespace std;
/*
    - state: knapsack(n, cap) -> maximum profit considering objects 1 to n and capacity=cap
    - recurrance: 
        knapsack(n, cap) -> max {
                                val[n] + knapsack(n - 1, cap - wt[n]),
                                knapsack(n - 1, cap)
                            }
    - base_case: knapsack(0, x) = 0
*/
const int N = 10001;
int  dp[N][N];
int a[N], val[N];

int main() {
    int n, k;
    cin >> n >> k;

    for(int i = 1 ; i <= n ; i++) {
        cin >> a[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>val[i];
    }

    // 1. handle base case
    for(int i = 0 ; i <=k ; i++) {
        dp[0][i] = 0;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            if(val[i-1]<=k)
            {
                int ans1=a[i-1]+dp[i][j-val[i-1]];
                int ans2=dp[i-1][j];
                dp[i][j]=max(ans1,ans2);
            }
            else
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    }

    cout<< dp[n][k] << endl;
    return 0;
}