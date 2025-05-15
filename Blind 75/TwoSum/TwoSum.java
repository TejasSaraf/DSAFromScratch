
import java.util.HashMap;

class Solution {

    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> set = new HashMap<>();

        for (int i = 0; i < nums.length; i++) {
            int num = target - nums[i];
            if (set.containsKey(num)) {
                return new int[]{set.get(num), i};
            }
            set.put(nums[i], i);
        }
        return new int[]{-1, -1};
    }
}
