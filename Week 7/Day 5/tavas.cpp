#include <bits/stdc++.h>
using namespace std;

int check_kth_bit_on_or_off(int n,int k)
{
    return (n>>k) &1;
}

int main()
{

    int n;
    cin >> n;
    set<int> s;
    string x = to_string(n);

    int sz = x.size();

    for (int k = 1; k <= sz; k++)
    {
        for (int i = 0; i < (1 << k); i++)
        {
            string st;

            for (int j = 0; j < k; j++)
            {
                int a = (i>>j) &1;

                if(a)
                {
                    st.push_back('4');
                }
                else{
                    st.push_back('7');
                }
            }

            int ans = stoi(st);

            s.insert(ans);
        }
    }

    auto it = s.find(n);

    cout <<distance(s.begin(),it)+1 << endl;
    
    return 0;
}