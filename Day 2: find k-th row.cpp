#include <bits/stdc++.h> 
bool find(vector<vector<int>> &mat, int k){
    for(int i = 0; i < mat.size(); i++){
        if(k == i) continue;
        if(mat[k][i] == 1) return false;
        if(mat[i][k] == 0) return false;
    }
    return true;
}

int findRowK(vector<vector<int>> &mat){
    int n = mat.size();
    for(int i = 0;i < n; i++){
        if(find(mat,i)){
            return i;
        }
    }
    return -1;
}
