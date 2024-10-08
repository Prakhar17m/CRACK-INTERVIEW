class Solution {
public:
    int maxDepth(string s) {
        int depth = 0, open = 0;
        for(char c: s){
            if(c == '('){
                open++;
            }
            if(c == ')'){
                open--;
            }
            depth = std::max(depth, open);
        }
        return depth;
    }
};