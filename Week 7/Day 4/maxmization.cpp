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

        int v[n];

        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        int cnt = 0;

        for(int i=0;i<n;i++)
        {
            cnt |= v[i];
        }

        int val = v[0];
        for(int i=1;i<n;i++)
        {
            val &= v[i];
        }
        
        cout<<cnt - val << endl;
    }
    return 0;
}