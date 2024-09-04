class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int max_occurance = 0;
        for(int i =0;i<n ;i++)
        {
            if(nums[i] == 1)
            {
                count ++;
            }
            else
            {
                count =0;
            }
            max_occurance =max(max_occurance,count);
        }
        return max_occurance;
    }
};