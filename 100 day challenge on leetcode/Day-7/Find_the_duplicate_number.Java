class Solution {
    public int findDuplicate(int[] nums) {
        Set<Integer> numSet = new HashSet<>();
        for(int n : nums)
        {
            if(numSet.contains(n))
            {
                return n;
            }
            numSet.add(n);
        }
        return -1;
    }
}