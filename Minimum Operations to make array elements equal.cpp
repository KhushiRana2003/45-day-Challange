#include <bits/stdc++.h> 
int minimumOperation(vector<int> &arr, int n) {
    // Write your code here.
    unordered_map<int,int> mp;
    for(int i = 0; i < n; i++){
        mp[arr[i]]++;
    }

    int mx = INT_MIN;
    for(auto& it : mp){
        mx = max(mx, it.second);
    }
    return n-mx;
}
