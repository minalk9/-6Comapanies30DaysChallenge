class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        //just simply solve as given
        vector<int>ans;
        int n=nums.size();
        for(auto q:queries)
        {
            int k=q[0];
            int trim=q[1];//it is from right side
            vector<pair<string,int>>arr;
            for(int i=0;i<n;i++)
            {
                // if(trim>nums.size())trim=0;
                arr.push_back({(nums[i].substr(nums[i].size()-trim)),i});
                
            }
            sort(arr.begin(),arr.end());
            ans.push_back(arr[k-1].second);
        }
        return ans;
        
    }
};