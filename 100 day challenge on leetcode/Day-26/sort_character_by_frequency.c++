class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> map;
        priority_queue<pair<int,char>> pqueue;
        string ans = "";
        for(char ch:s){
            map[ch]++;
        }
        for(auto it:map){
            pqueue.push({it.second,it.first});
        }
        while(!pqueue.empty()){
            auto temp = pqueue.top();
            int freq = temp.first;
            char ch = temp.second;
            ans += string(freq,ch);
            pqueue.pop();
        }
        return ans;
    }
};