class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        int mini=1e7;
        int maxi=-1e7;
       if(n==1)return 0;
       for(int i=0;i<n;i++){
           if(i==0){
               if(nums[i]>nums[i+1]){
                mini=min(nums[i],mini);
                maxi=max(nums[i],maxi);
               }
              
           }
            else if(i==n-1){
                   if(nums[i-1]>nums[i]){
                    mini=min(nums[i],mini);
                    maxi=max(nums[i],maxi);   
                }
            }
            else if(nums[i]>nums[i+1]||nums[i-1]>nums[i]){
                mini=min(nums[i],mini);
                maxi=max(nums[i],maxi);
            }
       }
       if(mini==1e7||maxi==-1e7)return 0;
       int i,j;
       for( i=0;i<n&&mini>=nums[i];i++);
       for( j=n-1;j>=0&&maxi<=nums[j];j--);
       
       return j-i+1;
    }
};