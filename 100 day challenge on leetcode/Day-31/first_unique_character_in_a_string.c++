class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mpp;
        for(int i=s.size()-1 ; i>=0 ; i--){
            mpp[s[i]]++;
        }
        for(auto itm:mpp){
            if(itm.second==1){
                return s.find(itm.first);
            }
        }

        return -1;   
    }
};