package find;

public class SearchInsertPosition {

	public static void main(String[] args) {
		int[] nums = { 1, 3, 5, 6 };
		int target = 5;
		int ans = searchInsert(nums, target);
		System.out.println(ans);
	}

	public static int searchInsert(int[] nums, int target) {
		int ans = nums.length;
		int start = 0;
		int end = nums.length - 1;

		while (start <= end) {
			int mid = start + (end - start) / 2;

			if (nums[mid] >= target) {
				ans = mid;
				end = mid - 1;
			} else {
				start = mid + 1;
			}
		}
		return ans;
	}

}
