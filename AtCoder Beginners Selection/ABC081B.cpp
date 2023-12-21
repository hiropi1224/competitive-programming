#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int N;
    cin >> N;

    vector<int> arr(N);
    rep(i, N)
    {
        cin >> arr.at(i);
    }
    int ans = 10000000000;
    rep(i, N)
    {
        int cnt = 0;
        int a = arr.at(i);
        while (a % 2 == 0)
        {
            a = a / 2;
            cnt++;
        }
        ans = min(cnt, ans);
    }

    cout << ans << endl;
}