#include<bits/stdc++.h>
#define ll long long
#define dbg(x) cerr << #x << " " << x << "\n";
using namespace std;
int main() {
    ll n, ed;
    cin >> n >> ed;
    vector<vector<ll>> g(n, vector<ll>());
    for(ll i=0; i<ed; i++) {
        ll u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    ll x, y, k;
    cin >> x >> y >> k;
    queue<ll> q;
    q.push(x);
    vector<ll> vis(n, 0);
    ll lvl = 0;
    vector<ll> lvl_a(n, 0);
  
    vis[x] = 1;
    while(!q.empty()) {
        ll cr = q.front();
        q.pop();
        for(auto e: g[cr]) {
            if(!vis[e]) {
                vis[e] = 1;
                q.push(e);
                lvl_a[e] = lvl_a[cr]+1;
            }
        }
    }
    ll tm = lvl_a[y];
    if(vis[y] == 0) {
        cout << "NO\n";
        // return 0;
    } else {
        if((tm+1)/2 <=k) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

}