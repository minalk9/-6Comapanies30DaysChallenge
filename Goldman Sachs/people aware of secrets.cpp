class Solution {
public:
    int peopleAwareOfSecret(int n, int delay, int forget) {
        long long int mod=1e9+7;
        vector<long long int>dp(n,0);
       dp[0]=1;
       long long int no_of_people_sharing=0;
       for(int i=1;i<n;i++)
       {
           int a=i-delay;
           int b=i-forget;
           
           if(a>=0)
           no_of_people_sharing= (no_of_people_sharing+dp[a]);
           if(b>=0)
           no_of_people_sharing= (no_of_people_sharing-dp[b]);
           dp[i]=no_of_people_sharing%mod;
       }
       int secret=0;
       for(int i=n-forget;i<n;i++)
       secret=(secret+dp[i])%mod;
       return secret;
       
    }
    
};