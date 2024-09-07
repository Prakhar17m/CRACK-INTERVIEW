class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int,int> m;
        int n = nums.size();
        for(int i = 0; i<n ; i++)
        {
            int num = nums[i];
            int moreneed = target -num;
            if(m.find(moreneed)!= m.end())
            {
                return {m[moreneed],i};
            }
            m[num] = i;
        }
        return {-1,-1};
    }
};