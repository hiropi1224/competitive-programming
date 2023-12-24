#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int N, a = 0, b = 0;
    cin >> N;
    vector<int> vec(N);
    rep(i, N)
    {
        cin >> vec.at(i);
    }
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());

    for (int j = 0; j < N; j += 2)
    {
        a += vec.at(j);
    }
    for (int k = 1; k < N; k += 2)
    {
        b += vec.at(k);
    }
    int maximun = max(a, b);
    int minimun = min(a, b);

    cout << maximun - minimun << endl;
}