#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    cin >> m;
    vector<int> arr1(n);
    vector<int> arr2(m, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] <= m)
            arr2[arr1[i] - 1]++;
    }
    for (int i = 0; i < m; i++)
    {
        cout << arr2[i] << endl;
    }

    return 0;
}