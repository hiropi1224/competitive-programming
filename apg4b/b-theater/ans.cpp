#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int N;
    int ans = 0;
    cin >> N;
    rep(i, N)
    {
        int l, r;
        cin >> l >> r;
        ans += r - l + 1;
    }

    cout << ans << endl;
}