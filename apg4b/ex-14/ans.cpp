#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int minimun = min(min(a, b), c);
    int maximun = max(max(a, b), c);

    cout << maximun - minimun << endl;
}