class Solution {
vector<vector<int>> arrSum;
public:
    int sum(vector<int> &combination)
    {
        int res=0;
        for(auto x: combination)
        {
            res+=x;
        }
        return res;
    }

    void combinationSumHelper(int k,int n,vector<int> &combination,int num)
    {
        if(k==0)
        {
            if(sum(combination)==n)
            {
                arrSum.push_back(combination);
            }
            return;
        }
        if(num>9)
        {
            return;
        }
        combination.push_back(num); 
        combinationSumHelper(k-1,n,combination,num+1);
        combination.pop_back();
        combinationSumHelper(k,n,combination,num+1);  
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> combination;
        combinationSumHelper(k,n,combination,1);
        return arrSum;
    }
};