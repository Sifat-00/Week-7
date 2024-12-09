#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll check_kth_bit_on_or_off(ll n,ll k)
{
    return (n>>k) & 1;
}

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        ll maxbit = __lg(n);
        vector<ll> v;
        for(int i=maxbit;i>=0;i--)
        {
            if(check_kth_bit_on_or_off(n,i))
            {
                ll ans = n-(1<<i);

                if(ans>0)
                {
                    v.push_back(n-(1LL<<i));
                }
            }
        }

        v.push_back(n);
        cout << v.size() << endl;
        for(auto x:v)
        {
            cout <<x <<" ";
        }
        cout << endl;
    }
    return 0;
}