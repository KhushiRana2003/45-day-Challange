#include <bits/stdc++.h> 
bool checkSubset(vector < int > & arr1, vector < int > & arr2, int n, int m) {
    // unordered_map<int,int> mp;
    // for(int i = 0; i < n; i++){
    //     mp[arr1[i]]++;
    // }
    
    // for(int i = 0; i < m; i++){
    //     if(mp[arr2[i]] == 0) return false;
    //     mp[arr2[i]]--;
    // }
    // return true;

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    
    int i = 0, j = 0, cnt = 0;
    while(i < n){
        if(j < m && arr1[i] == arr2[j]){
            i++;
            j++;
            cnt++;
        }else{
            i++;
        }
    }
    if(cnt == m) return true;
    else return false;
}
