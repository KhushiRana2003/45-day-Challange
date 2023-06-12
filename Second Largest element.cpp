#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
     if(n<1){

        return arr[0];

    }
  
    else if(n > 0 ) {

        sort(arr.begin(),arr.end());

        int temp = arr[n-2];

        if(temp < arr[n-1]){

            return temp;

        }

        else if( arr[0] == arr[n-1]){

            return -1;

        }

        else if(temp = arr[n-1]) {

            temp = arr[n-3];

            return temp;

        }

        else{

            return -1;

        }

    }
}
