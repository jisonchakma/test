#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dbg(x) cerr << #x << " " << x << "\n";
void solve() {
    ll x, k;
    cin >> x >> k;
    if(x%k!= 0) {
        cout << 1 << "\n";
        cout << x << "\n";
    } else {
        cout << 2 << "\n";
        cout << x-1 << " " << 1 << "\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int tcs=1;
    cin >> tcs;
    for(ll i=1; i<=tcs; i++) {
        solve();
    }
}