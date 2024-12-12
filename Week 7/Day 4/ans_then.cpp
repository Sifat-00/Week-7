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

        int ans = 0;

        for(int i=0;i<maxBit;i++)
        {
            ans+=(1<<i);
        }

        cout <<ans<< endl;
    }
    return 0;
}