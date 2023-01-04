class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
  
        int n = nums.size();
        int sum=0,prev=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            ans+=i*nums[i];
        }
        prev = ans;
        for(int i=1;i<n;i++)
        {
            int currSum = prev + sum - n * (nums[n-i]);
            ans = max(currSum,ans);
            prev = currSum;
        }
        return ans;
    }
};