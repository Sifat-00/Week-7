#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v(n);
        map<ll,ll> mp;

        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            int val = __lg(v[i]);
            mp[val]++;
        }

        ll ans = 0;

        for(auto [x,y]:mp)
        {

            ll ms = (y*(y-1))/2;
            ans+=ms;
        }

        cout << ans << endl;
    }
    return 0;
}