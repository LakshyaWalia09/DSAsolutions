#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string test;
    cin >> test;
    vector<int> arr;
    for (char c : test)
    {
        if (c == '+')
        {
            continue;
        }
        else
        {
            arr.push_back(c-'0');
        }
    }
    int size = arr.size();
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i; j < size ; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i != size - 1)
            cout << '+';
    }
    return 0;
}