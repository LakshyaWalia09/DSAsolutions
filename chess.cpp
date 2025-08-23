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
int main()
{
    vector<vector<int>> board1 = {{0, 1},
                                  {1, 0}};

    vector<vector<int>> board2 = {{1, 0, 1},
                                  {0, 1, 0},
                                  {1, 0, 1}};

    vector<vector<int>> board3 = {{1, 0, 1},
                                  {0, 1, 0},
                                  {1, 1, 1}};

    if (boardOrNot(board1, 2))
        cout << "true\n";
    else
        cout << "false\n";

    if (boardOrNot(board2, 3))
        cout << "true\n";
    else
        cout << "false\n";

    if (boardOrNot(board3, 3))
        cout << "true\n";
    else
        cout << "false\n";

    return 0;
}