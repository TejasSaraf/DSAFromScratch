package find;

public class TwoSumII {

	public static int[] TwoSum(int[] nums, int target) {
		int start = 0;
		int end = nums.length - 1;

		while (start < end) {
			int total = nums[start] + nums[end];

			if (total == target) {
				return new int[] { start + 1, end + 1 };
			} else if (total > target) {
				end--;
			} else {
				start++;
			}
		}
		return new int[] { -1, -1 };
	}
}
