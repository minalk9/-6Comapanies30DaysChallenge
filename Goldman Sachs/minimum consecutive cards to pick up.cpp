class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
       unordered_map <int, int> mp;
        int res = 1e9; bool f=false;

        for(int i= 0; i<cards.size(); i++){

            if(mp.count(cards[i])){
                res = min(res, i-m[cards[i]]+1 );
                f =true;
            }
            mp[cards[i]] = i; 
        }

        return (!f) ? -1 :res;  
    }
};