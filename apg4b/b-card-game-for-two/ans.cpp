#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int N, a = 0, b = 0;
    cin >> N;

    vector<int> arr(N);

    rep(i, N)
    {
        cin >> arr.at(i);
    }

    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());

    for (int p = 0; p < N; p += 2)
    {
        a += arr[p];
    }

    for (int q = 1; q < N; q += 2)
    {
        b += arr[q];
    }

    int maximun = max(a, b);
    int minimun = min(a, b);

    cout << maximun - minimun << endl;
}