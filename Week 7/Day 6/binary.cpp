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
        int mx = __lg(n);

        vector<int> v(32,0);

        for(int i=0;i<=mx;i++)
        {
            int tmp = (n>>i) &1;
            v[i] = tmp;
        }

        int i = 0;

        while(i<32)
        {
            if(v[i]!=1)
            {
                i++;
                continue;
            }

            int j = i+1;

            while(v[j]==1)
            {
                v[j] = 0;
                j++;
            }

            if((j-i)>1)
            {
                v[j] = 1;
                v[i] = -1;
            }

            i = j;
        }

        cout << v.size() << endl;

        for(int i=0;i<v.size();i++)
        {
            cout <<v[i] <<" ";
        }
        
        cout << endl;
    }
    return 0;
}