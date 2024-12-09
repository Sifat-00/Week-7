#include<bits/stdc++.h>
using namespace std;

int check_kth_bit_on_or_off(int n,int k)
{
    return (n>>k) & 1;
}

int main()
{
    int n;
    cin>>n;
    int ar[n];

    for(int i=0;i<n;i++)
    {
        cin >> ar[i];
    }

    bool flag = false;

    for(int i=0;i<(1<<n);i++)
    {
        int sum = 0;

        for(int j=0;j<n;j++)
        {
            int val = check_kth_bit_on_or_off(i,j);

            if(val)
            {
                sum+=ar[j];
            }
            else
            {
                sum-=ar[j];
            }
        }

        if(sum%360 == 0)
        {
            flag = true;
            break;
        }
    }

    if(flag) cout <<"YES" << endl;
    else cout <<"NO" << endl;
    return 0;
}