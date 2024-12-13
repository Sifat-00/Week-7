#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll check_kth_bit_on_or_off(ll n,ll k)
{
    return (n>>k) &1;
}

int main()
{
    int n,m,k;
    cin >>n >>m >>k;

    vector<int> v(m+1);

    int maxBit = 0;

    for(int i=0;i<m+1;i++)
    {
        cin>>v[i];
        maxBit = max(maxBit,__lg(v[i]));
    }

    vector<vector<int>> bit;

    for(int i=0;i<m+1;i++)
    {
        vector<int> tmp;

        for(int j=maxBit;j>=0;j--)
        {
            tmp.push_back(((v[i]>>j)&1));
        }

        bit.push_back(tmp);
    }

    vector<int> track(bit[m]);

    vector<int> diff(m);

    for(int i=0;i<m;i++)
    {
        int cnt = 0;
        for(int j=0;j<=maxBit;j++)
        {
            if(bit[i][j]!=track[j])
            {
                cnt++;
            }
        }

        diff[i] = cnt;
    }

    int ans = 0;

    for(auto x:diff)
    {
        if(x<=k)
        {
            ans++;
        }
    }
    
    cout << ans << endl;

    return 0;
}