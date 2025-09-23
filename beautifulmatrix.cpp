#include <iostream>
#include <vector>
using namespace std;
int abso(int n)
{
    if (n < 0)
        return -n;
    return n;
}
int main()
{
    vector<vector<int>> arr(5, vector<int>(5, 0));
    int ans;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {

            cin >> arr[i-1][j-1];
            if (arr[i-1][j-1])
            {
                ans = abso(3 - j) + abso(3 - i);
            }
        }
    }

    cout << ans;
    return 0;
}