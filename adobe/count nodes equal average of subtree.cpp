 
class Solution {
private:
int ans=0;
public:
   
    pair<int,int> dfs(TreeNode*root)
    //pair<int,int>(sum of subtree,count of nodes in subtree)
    {
        if(root==NULL)//base case
        return {0,0};
        auto left=dfs(root->left);
        int left_sum=left.first;
        int left_count=left.second;

        auto right=dfs(root->right);
        int right_sum=right.first;
        int right_count=right.second;

        int sum=(left_sum+right_sum+root->val);
        int count=(left_count+right_count+1);

        if(sum/count==root->val)ans++;
        return {sum,count};

    }
    int averageOfSubtree(TreeNode* root) {
        
        dfs(root);
        return ans;
    }
};