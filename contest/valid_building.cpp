#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main()
{
    Faster;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int>even,odd;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                even.push_back(a[i]);
            }
            else
            {
                odd.push_back(a[i]);
            }
            
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        bool is_even=true,is_odd=true;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)continue;
            if(odd.empty() or odd[0]>=a[i])
            {
                is_even=false;
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]%2!=0) continue;
            if(odd.empty() or odd[0]>=a[i])
            {
                is_odd=false;
                break;
            }
        }
        if(is_odd or is_even)
        {
           cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
        }
        return 0;
}