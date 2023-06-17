#include<bits/stdc++.h>
#define dbg(x) cerr << #x << " " << x << "\n";
using namespace std;
int main() {
    int n; cin >> n;
    int rw = 2*n-1;
    int cl = 2*n-1;
    int j, k;
    j = k = n;
    char f = '>', s='<';
    bool fir = true;
    // dbg(j)
    // dbg(k)
    vector<vector<char>> g(rw+1, vector<char>(cl+1, ' '));
    for(int i=1; i<=rw; i++) {
        if(fir) {
            
            if(j>=1) {
                for(int l=j; l<=k; l++) {
                    // if(l>= j and l<= k) {
                        if(i%2) {
                            g[i][l] = f;
                        } else {
                            g[i][l] = s;
                        }
                    // }
                }
                j--, k++;

            } else {
                fir = false;
                j++,k--;
            }
        }
        if(!fir) {
            j++, k--;
            for(int l = j; l<=k; l++) {
                if(i%2) {
                    g[i][l] = f;
                } else {
                    g[i][l] = s;
                }
            }
        }
    }
    for(int i=1; i<=rw; i++) {
        for(int j=1; j<=cl; j++) {
            cout << g[i][j];
        }
        cout << "\n";
    }

}