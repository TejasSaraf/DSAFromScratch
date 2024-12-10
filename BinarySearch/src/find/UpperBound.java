package find;

public class UpperBound {

	public static void main(String[] args) {
		int[] nums = { 1, 2, 3, 3, 5, 8, 8, 10, 10, 11 };
		int x = 9;
		int ans = findUpperBound(nums, x);
		System.out.println(ans);
	}

	public static int findUpperBound(int[] nums, int x) {
		int ans = nums.length;
		int start = 0;
		int end = nums.length - 1;

		while (start <= end) {
			int mid = start + (end - start) / 2;

			if (nums[mid] > x) {
				ans = mid;
				end = mid - 1;
			} else {
				start = mid + 1;
			}
		}
		return ans;
	}

}
