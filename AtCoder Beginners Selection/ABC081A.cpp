#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string s;
    cin >> s;
    int ans = 0;
    rep(i, s.size())
    {
        if (s.at(i) == '1')
        {
            ans++;
        }
    }

    cout << ans << endl;
}