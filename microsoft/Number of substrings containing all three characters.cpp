class Solution {
public:
    int numberOfSubstrings(string s) {
        int left = 0, c = 0;

        unordered_map<char, int> map;

        for(int i = 0; i < s.size(); ++i){
            map[s[i]]++;
            while(map['a'] && map['b'] && map['c']){
                map[s[left++]]--;
            }
            c += left;
        }
        return c;
        
    }
};