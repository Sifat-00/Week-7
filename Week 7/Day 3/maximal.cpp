#include<bits/stdc++.h>
#define ll long long int
using namespace std;

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
        int n,x;
        cin >>n >> x;

        vector<ll> v(n);

        ll maxbit = 30;

        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        vector<ll> bit(maxbit+1);

        for(auto val : v)
        {
            for(int j=maxbit; j>=0; j--)
            {
                if( (val>>j) & 1 )
                {
                    bit[j]++;
                }
            }
        }

        ll ans = 0;

        for(int i=maxbit;i>=0;i--)
        {
            if(bit[i]==n)
            {
                ans+=(1LL<<i);
            }
            else
            {
                ll dif = n-bit[i];

                if(x>=dif)
                {
                    x-=dif;
                    ans+=(1LL<<i);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}