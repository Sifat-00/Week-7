#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n ;
        string st,x;

        cin>>n>>st>>x;
        if(st==x || st[0]=='1')
        {
            cout <<"YES" << endl;
            continue;
        }

        int pos = -1;

        for(int i=0;i<n;i++)
        {
            if(st[i]=='1')
            {
                pos = i;
                break;
            }
        }

        if(pos!=-1)
        {
            bool flag = true;

            for(int i=0;i<n;i++)
            {
                if(st[i]!=x[i])
                {
                    if(pos>i)
                    {
                        flag = false;
                        break;
                    }
                }
            }

            if(flag) cout <<"YES" << endl;
            else cout <<"NO" << endl;
        }
        else
        {
            cout <<"NO" << endl;
        }
    }
    return 0;
}