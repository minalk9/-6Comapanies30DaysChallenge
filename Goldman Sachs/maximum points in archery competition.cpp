class Solution {
public:
      int maxi=0;
      vector<int>ans;
    void func(vector<int> temp,int score,int n,vector<int> alice,int i)
    {
        //Base case
        if(i== alice.size()){
                if(maxi<score){
                    maxi=score;
                    ans = temp;
                    ans [0]+=n;
                }
                return ;
            }
        
        //Recursive case
        //Bob winning case
         if(n>alice[i]){
                temp[i]= alice[i]+1;
                func(temp,score+i,n-temp[i],alice,i+1);
                 temp[i]= 0;                   
            }
            func(temp,score,n,alice,i+1);
        
    }
    vector<int> maximumBobPoints(int n, vector<int>& alice) {
        
        int l = alice.size();
        vector<int>temp(l);
        ans.resize(l); 
        func(temp,0,n,alice,0);
        return ans;
        
        
    }
};