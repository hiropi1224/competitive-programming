#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int N;
    cin >> N;

    vector<int> d(N);

    rep(i, N)
    {
        cin >> d.at(i);
    }

    set<int> se;
    rep(i, N)
    {
        se.insert(d.at(i));
    }
    int ans = se.size();

    cout << ans << endl;
}