#include <iostream>
#include <cmath>
#include <algorithm>
#define ll long long
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int query;
    cin >> query;
    int* arrQ = new int[query];

    for(int i = 0; i < query; i++) {
        cin >> arrQ[i];
    }
    int* ans = new int[n + 1];

    for(int i = 0; i < n; i++) {
        ans[arr[i]] = i + 1;
    }
    ll sum1 = 0, sum2 = 0;

    for(int i = 0; i < query; i++) {
        sum1 += ans[arrQ[i]];
        sum2 = sum2 + n - ans[arrQ[i]] + 1;
    }
    cout << sum1 << " " << sum2;
    delete[] arr;
    delete[] arrQ;
    delete[] ans;
    return 0;
}
