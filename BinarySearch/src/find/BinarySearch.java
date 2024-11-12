package find;

public class Solution {

	public static void main(String[] args) {
		int[] nums = { 1, 5, 6, 9, 12, 33, 54, 67, 89, 91 };
		int target = 91;
		int ans = binarySearch(nums, target);
		System.out.println(ans);
	}

	static int binarySearch(int[] nums, int target) {
		int start = 0;
		int end = nums.length - 1;

		while (start <= end) {
			int mid = start + (end - start) / 2;

			if (target == nums[mid]) {
				return mid;
			}
			if (target > nums[mid]) {
				start = mid + 1;
			} else {
				end = mid - 1;
			}
		}
		return -1;
	}

}
