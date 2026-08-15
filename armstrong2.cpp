#include <iostream>
using namespace std;
int main()
{
    int original, num, digit = 0, rem, result = 1, i, sum = 0;
    cout << "enter the number :";
    cin >> num;
    original = num;
    while (num != 0)
    {
        digit++;
        num = num / 10;
    }
    num = original;
    while (num != 0)
    {
        rem = num % 10;
        result = 1;
        for (i = 1; i <= digit; i++)
        {
            result = result * rem;
        }
        sum = sum + result;
        num = num / 10;
    }
    if (sum == original)
        cout << "no is armstrong";
    else
        cout << "no is not armstrong";
    return 0;
}