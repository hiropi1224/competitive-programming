#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int N, A;
    cin >> N >> A;

    rep(i, N)
    {
        int x;
        string op;
        cin >> op >> x;

        if (op == "+")
        {
            A += x;
        }
        else if (op == "-")
        {
            A -= x;
        }
        else if (op == "*")
        {
            A *= x;
        }
        else if (op == "/" && x != 0)
        {
            A /= x;
        }
        else
        {
            cout << "error" << endl;
            break;
        }

        cout << i + 1 << ":" << A << endl;
    }
}
