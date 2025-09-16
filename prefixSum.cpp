#include<bits/stdc++.h>
using namespace std;

// Function to build prefix sum array
vector<int> buildPrefixSum(const vector<int>& arr) {
    int n = arr.size();
    vector<int> prefix(n);
    prefix[0] = arr[0];

    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    return prefix;
}

// Function to get sum in range [l, r]

int rangeSum(const vector<int>& prefix, int l, int r) {
    if (l == 0){
        return prefix[r];
    }
    return prefix[r] - prefix[l - 1];
}


int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i = 0;i<n; i++){
        cin>>arr[i];
    }

    vector<int> prefix = buildPrefixSum(arr);

    for (int x : prefix) {
        cout << x << " "<< "\n";
    }

    // cout << "Sum(1, 3): " << rangeSum(prefix, 1, 3) << "\n";
    // cout << "Sum(0, 4): " << rangeSum(prefix, 0, 4) << "\n";
    // cout << "Sum(2, 4): " << rangeSum(prefix, 2, 4) << "\n";
    return 0;
}