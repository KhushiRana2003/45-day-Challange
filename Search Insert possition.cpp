
int searchInsert(vector<int>& arr, int m)
{
    int n = arr.size();
    if(m > arr[n-1]){
        return n;
    }
	for(int i = 0; i < arr.size(); i++){
        if(arr[i] <= m && arr[i+1] >= m){
            return i+1;
        }
    }
    return 0;
}


