# include <bits/stdc++.h>
vector<int> searchRange(vector<int> &arr, int x)
{
	// Write your code here.
	if(!binary_search(begin(arr),end(arr),x)) return {-1,-1};

	int lb = lower_bound(begin(arr),end(arr),x)-arr.begin();
	int ub = upper_bound(begin(arr),end(arr),x)-arr.begin();
	return {lb,ub-1};
}




# include <bits/stdc++.h>
// vector<int> searchRange(vector<int> &arr, int x)
// {
// 	// Write your code here.
// 	if(!binary_search(begin(arr),end(arr),x)) return {-1,-1};

// 	int lb = lower_bound(begin(arr),end(arr),x)-arr.begin();
// 	int ub = upper_bound(begin(arr),end(arr),x)-arr.begin();
// 	return {lb,ub-1};
// }

int fbst(vector<int> &arr,int s , int key){

    

    int low=0,high=s-1;int mid=0,res=0;

    

    while(low<=high){

         

         mid=(low+high)/2;

         

         if(arr[mid]==key){

            res=mid;

            high=mid-1;

         }else if(arr[mid]<key){

               low=mid+1;

         }else {

            high=mid-1;

         }

    }

    if(res>0){

        return res;

    }else{

            return -1;

    }

 

}

 

int lbst(vector<int> &arr,int s , int x){

    

    int low=0,high=s-1;int mid=0,res=0;

    

    while(low<=high){

         

         mid=(low+high)/2;

         

         if(arr[mid]==x){

            res=mid;

            low=mid+1;

         }else if(arr[mid]<x){

               low=mid+1;

         }else {

            high=mid-1;

         }

    }

    

    if(res>0){

        return res;

    }else{

            return -1;

    }

}

 

vector<int> searchRange(vector<int> &arr, int x)

{

    // Write your code here.

    vector<int >ans;

    int n=arr.size();

       int first=fbst(arr,n,x);

       int last=lbst(arr,n,x);

       ans.push_back(first);

       ans.push_back(last);

       return  ans;

}
