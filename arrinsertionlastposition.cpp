#include <iostream>
using namespace std;
int main()
{
    int i, arr[9] = {11, 22, 33, 22, 55, 66}, value;
    int n = 6;
    cout << "enter the element of insertion :";
    cin >> value;
    for (i = n; i > 6; i--)
    {
        arr[6] = value;
    }
    n++;
    cout << "new array is :";
    for (i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}