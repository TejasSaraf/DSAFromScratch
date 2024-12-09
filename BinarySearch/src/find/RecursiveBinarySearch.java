package find;

class RecursiveBinarySearch {
	public int search(int[] nums, int target) {
		int start = 0;
		int end = nums.length - 1;
		int answer;
		answer = recursiveBinarySearch(nums, start, end, target);
		return answer;
	}

	public int recursiveBinarySearch(int[] nums, int start, int end, int target) {
		if (start > end) {
			return -1;
		}

		int mid = start + (end - start) / 2;

		if (nums[mid] == target) {
			return mid;
		} else if (target > nums[mid]) {
			return recursiveBinarySearch(nums, mid + 1, end, target);
		}
		return recursiveBinarySearch(nums, start, mid - 1, target);
	}
}