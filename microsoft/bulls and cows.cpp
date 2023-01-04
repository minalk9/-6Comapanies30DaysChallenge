class Solution {
public:
    //Q.299  leetcode
    string getHint(string secret, string guess) {
        int b = 0, c = 0;
        unordered_multiset<char> temp;
        
        for(int i = 0; i <secret.size(); ++i){
            if(secret[i] == guess[i]){
                ++b;
                secret[i] = 'a';
            }
            else{
                temp.insert(secret[i]);
            }
        }
        for(int i = 0; i< secret.size(); ++i){
            if(secret[i] != 'a' && temp.find(guess[i]) != temp.end()){
                ++c;
                cout<<guess[i];
                temp.erase(temp.find(guess[i]));
            }
        }
        return to_string(b)+"A"+to_string(c)+"B";
    }
};