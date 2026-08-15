#include <iostream>
using namespace std;
int main()
{
    int i, pos, value, arr[10] = {3, 55, 4, 2};
    int n = 4;
    cout << "enter the position of insertion :";
    cin >> pos;
    cout << "enter the value you want to insert:";
    cin >> value;
    for (i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = value;
    // n=n-1;
    cout << "the new array is =";
    for (i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}