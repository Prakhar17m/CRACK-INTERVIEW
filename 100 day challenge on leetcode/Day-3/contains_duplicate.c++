class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer> s = new HashSet<> ();
        for(int Arr : nums)
        {
            if(s.contains(Arr))
            {
                return true;
            }
            s.add(Arr);
        }
        return false;
    }
}