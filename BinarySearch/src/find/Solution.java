package find;

public class Solution {

	public static void main(String[] args) {
		int[] num = { -3, 0, 5, 6, 7, 22, 34, 55, 99 };
		int target = 99;
		int ans = binary(num, target);
		System.out.println(ans);
	}

	public static int binary(int[] num, int target) {
		int start = 0;
		int end = num.length - 1;

		while (start <= end) {
			int mid = start + (end - start) / 2;

			if (target > num[mid]) {
				start = mid + 1;
			} else if (target < num[mid]) {
				end = mid - 1;
			} else {
				return mid;
			}
		}
		return -1;
	}

}
