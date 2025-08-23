#include <iostream>
using namespace std;
#include <vector>
bool boardOrNot(vector<vector<int>> &a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if ((a[i][j] == a[i][j + 1]) || (a[i][j] == a[i + 1][j]))
            {
                return false;
            }
        }
    }
    return true;
}
