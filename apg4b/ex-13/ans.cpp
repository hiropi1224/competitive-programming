#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);

    rep(i, N)
    {
        cin >> A.at(i);
    }

    int sum = 0;

    rep(i, N)
    {
        sum += A.at(i);
    }

    int ave = sum / N;

    rep(i, N)
    {
        if (A.at(i) > ave)
        {
            cout << A.at(i) - ave << endl;
        }
        else
        {
            cout << ave - A.at(i) << endl;
        }
    }
}