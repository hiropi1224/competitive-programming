#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int H, W;
    cin >> H >> W;

    vector<vector<char>> table(H, vector<char>(W));
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < H; j++)
        {
            cin >> table.at(i).at(j);
        }
    }

    vector<int> row;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < H; j++)
        {
            if (table.at(i).at(j) == '#')
            {
                row.push_back(i);
                break;
            }
        }
    }

    vector<int> col;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < H; j++)
        {
            if (table.at(i).at(j) == '#')
            {
                col.push_back(j);
                break;
            }
        }
    }

    for (int i = 0; i < row.size(); i++)
    {
        for (int j = 0; j < col.size(); j++)
        {
            cout << table.at(row.at(i)).at(col.at(j));
        }
        cout << endl;
    }
}