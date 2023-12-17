#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int N;
    cin >> N;

    vector<int> btn(N + 1);

    for (int i = 1; i < N + 1; i++)
    {
        cin >> btn.at(i);
    }

    int cur = 1;
    rep(i, N + 1)
    {
        cur = btn.at(cur);
        if (cur == 2)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}