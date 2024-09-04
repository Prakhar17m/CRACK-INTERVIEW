class Solution {
    public int majorityElement(int[] nums) {
        int n = nums.length;
        HashMap <Integer,Integer> m = new HashMap<>();
        for(int i = 0;i < n;i++ )
        {
            int value = m.getOrDefault(nums[i],0);
            m.put(nums[i],value + 1);
        }
        for (Map.Entry<Integer, Integer> it : m.entrySet())
        {
            if(it.getValue()>(n/2))
            {
                return it.getKey();
            }
        }
        return -1;
}
};