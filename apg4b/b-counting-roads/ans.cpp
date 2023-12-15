#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> roads(N + 1, 0);

    rep(i, M)
    {
        int a, b;
        cin >> a >> b;

        roads[a]++;
        roads[b]++;
    }

    rep(i, N)
    {
        cout << roads.at(i + 1) << endl;
    }
}