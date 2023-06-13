#include <bits/stdc++.h> 
int maximumXor(vector<int> A)
{
    int n = A.size();
    int mx = 0;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            int k = A[i]^A[j];
            if(mx < k){
                mx = A[i]^A[j];
            }
        }
    }
    return mx;
}
