package find;

public class CellingOfANumber {

	public static void main(String[] args) {
		int[] nums = { 2, 3, 5, 9, 14, 16, 18 };
		int target = 15;
		int ans = cellingOfANumber(nums, target);
		System.out.println(ans);
	}

	static int cellingOfANumber(int[] nums, int target) {
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
		return start;
	}
}
