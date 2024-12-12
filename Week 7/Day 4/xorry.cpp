#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int maxBit = __lg(n);

        int a = (1<<maxBit);
        int val = n - a;
        int mx = __lg(val);

        int cnt = 0;

        for(int i=mx;i>=0;i--)
        {
            int ans = (val >> i) &1;
            if(!ans)
            {
                cnt++;
            }
        }

        cout <<(1LL<<cnt) << endl;
    }
    return 0;
}