#include <bits/stdc++.h> 
/********************************************************* 

	Binary tree node class for reference:
	
	class TreeNode {
		int val;
		TreeNode left;
		TreeNode right;

		TreeNode(int val) {
			this.val = val;
			this.left = null;
			this.right = null;
		}
	}

********************************************************/

int maxLevelSum(TreeNode<int>* root){
	// Write your code here.
  int maximumSum = INT_MIN;
    int sum = 0;
    queue<TreeNode<int>*> q;
    if(root == NULL){
        return 0;
    }
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        TreeNode<int>*node = q.front();
        q.pop();
        if(node == NULL){
            if(sum > maximumSum){
                maximumSum = sum;
            }
            if(q.empty()){
                break;
            }
            sum = 0;
            q.push(NULL);
            continue;
        }else{
            sum+=node->val;
            if(node->left != NULL){
                q.push(node->left);
            }
            if(node->right != NULL){
                q.push(node->right);
            }
        }
    }
    return maximumSum;
}
