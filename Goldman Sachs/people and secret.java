


class Solution {
    public int peopleAwareOfSecret(int n, int delay, int forget) {
        
long mod=1000000007;
long dp[]=new long[n+1];
dp[1]=1;
long noofpeoplesharingthesecret=0;
for(int i=2;i<=n;i++)
{
   long noofpeoplespread=dp[Math.max(i-delay,0)];
     long noofpeopleforget=dp[Math.max(i-forget,0)];
     noofpeoplesharingthesecret+=(noofpeoplespread-noofpeopleforget+mod)%mod;
dp[i]=noofpeoplesharingthesecret%mod;

}
long ans=0;
for(int i=n-forget+1;i<=n;i++)
{
   ans=(ans+dp[i])%mod;
}


return (int)ans;
    }
}
