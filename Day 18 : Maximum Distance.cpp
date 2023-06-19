#include <bits/stdc++.h> 
int maximumDistance(int arr[], int n)
{
    unordered_map<int,int> seen;
    int maxLength = 0;
    for(int i = 0; i < n; i++){
        if(seen.count(arr[i])){
            int length = i-seen[arr[i]];

            if(length > maxLength){
                maxLength = length;
            }
            
            if(i < seen[arr[i]]){
                seen[arr[i]] = i;
            }
            continue;
        }
        seen[arr[i]] = i;
    }
    return maxLength;
}
