#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int a, b;
    cin >> a >> b;

    vector<string> str(a);

    rep(i, a)
    {
        cin >> str.at(i);
    }
    rep(i, b + 2)
    {
        cout << "#";
    }
    cout << endl;

    rep(i, a)
    {
        cout << "#" << str.at(i) << "#" << endl;
    }
    rep(i, b + 2)
    {
        cout << "#";
    }
}