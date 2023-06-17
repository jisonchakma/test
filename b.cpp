#include<bits/stdc++.h>
using namespace std;
#define dbg(x) cerr << #x << " " << x << "\n";
#define ll long long
void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n), pr(n+1, 0);
    for(ll i=0; i<n; i++) {
        cin >> a[i];
        pr[i+1] = pr[i] + a[i];
    }

    for(int i=0; i<n; i++) {
        ll rt = pr[n]-pr[i+1];
        ll lft = pr[i];

        if(rt==lft) {
            cout << i << "\n";
            return;
        }
    }
    cout << -1 << "\n";
    
}
int main() {
    int tc;
    cin >> tc;

    for(int i=1; i<=tc; i++) {
        solve();

    }
}