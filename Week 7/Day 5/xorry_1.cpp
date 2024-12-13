#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin >> n;

        int maxBit = __lg(n);

        int x = (1<<maxBit);

        cout <<n-x << " " << x <<endl;

    }
    return 0;
}