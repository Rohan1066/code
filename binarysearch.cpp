#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6}, n = 6,mid,i;
    int low =0;
    int high =n-1;
    int value = 6;
    while(low<=high)
    {
    mid = low + (high - low) / 2;
        if (arr[mid] == value)
        {
            cout <<mid;
            break;}
            else if (arr[mid] > value)
            {
                high = mid - 1;}
                else
                {
                    low = mid + 1;
                }
    }
    return 0;
}