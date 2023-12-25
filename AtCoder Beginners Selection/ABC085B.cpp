#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int N;
    cin >> N;

    vector<int> vec(N);

    rep(i, N)
    {
        cin >> vec.at(i);
    }

    set<int> arr;

    rep(i, N)
    {
        arr.insert(vec.at(i));
    }

    cout << arr.size() << endl;
}