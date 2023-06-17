#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int x=-1;
        for(int i=0;i<n;i++)
        {
            if(i*(i-1)/2+(n-i)*(n-i-1)/2==k)
            x=i;
        }
        if(x==-1)
        {
            cout<<"NO"<<"\n";
        }
        else
        {
            cout<<"YES"<<"\n";
            for(int i=0;i<n;i++)
            {
                if(i<x)
                cout<<1<<" ";
                else
                {
                    cout<<-1<<endl;
                }
            }
        }
    }
    return 0;
}