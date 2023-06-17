#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dbg(x) cerr << #x << " " << x << "\n";
void solve() {
    string s;
    cin >> s;
    ll n = s.size();
    ll i=0;
    while(s[i] == '?') {
        s[i++] = '0';
    }
    i=n-1;
    while(s[i]=='?') {
        s[i--] = '1';
    }
    for(ll j=0; j<n; ){
        if(s[j]=='?') {
            ll k = j;
            for(; k<n; k++) {
                if(s[k] != '?') {
                    break;
                }
            }
            if(s[j-1] == '0' and s[k]=='0') {
                for(ll l=j; l<k; l++) {
                    s[l] = '0';
                }
            }
            j = k;
        } else {
            j++;
        }

    }
    for(ll i=0; i<n;i++) {
        if(s[i] == '?') s[i] = '1';
    }
    cout << s << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int tcs=1;
    cin >> tcs;
    for(ll i=1; i<=tcs; i++) {
        solve();
    }
}