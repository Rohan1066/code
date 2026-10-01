#include<iostream>
#include<vector>
using namespace std;
void subsum(int arr[], int n, vector<int>& ans, int i, int k) {
    if(i == n) {
        int sum = 0;
        for(int x : ans) {
            sum+= x;
        }
        if(sum == k) {
            for(int x : ans) {
                cout << x << " ";
            }
            cout << endl;
        }
        return;
    }
    subsum(arr, n, ans, i + 1, k);
    ans.push_back(arr[i]);
    subsum(arr, n, ans, i + 1, k);
    ans.pop_back();
}
int main() {
    int arr[] = {2, 3, 45,5,4};
    int n = 5;
    int k;
    cout << "enter the value of k : ";
    cin >> k;
    vector<int> ans;
    subsum(arr, n, ans, 0, k);
    return 0;
}