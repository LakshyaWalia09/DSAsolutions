#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    int min = num[0];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
            count = 1;
        }

        else if (num[i] == min)
            count++;
    }
    if (count % 2 == 0)
        cout << "Unlucky";
    else
        cout << "Lucky";
    return 0;
}