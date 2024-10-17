package find;

public class OrderAgnosticBS {

	public static void main(String[] args) {
		int[] nums = { 99, 68, 55, 45, 39, 33, 10, 5, 4, 3, 2, 1 };
		int target = 1;
		int ans = orderAgnosticBS(nums, target);
		System.out.println(ans);

	}

	static int orderAgnosticBS(int[] nums, int target) {
		int start = 0;
		int end = nums.length - 1;

		boolean isAsc = nums[start] < nums[end];

		while (start <= end) {
			int mid = start + (end - start) / 2;

			if (nums[mid] == target) {
				return mid;
			}

			if (isAsc) {
				if (target > nums[mid]) {
					start = mid + 1;
				} else {
					end = mid - 1;
				}
			} else {
				if (target < nums[mid]) {
					start = mid + 1;
				} else {
					end = mid - 1;
				}
			}
		}
		return -1;
	}
}
