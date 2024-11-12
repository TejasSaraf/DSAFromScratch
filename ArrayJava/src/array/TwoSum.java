package array;

public class TwoSum {

	public static void main(String[] args) {
		int[] arr = { 3, 2, 4 };
		int[] ans = twoSum(arr, 6);
		for (int i = 0; i < ans.length; i++) {
			System.out.print(ans[i] + " ");
		}
	}

	public static int[] twoSum(int[] nums, int target) {
		int arr[] = new int[2];
		for (int i = 0; i < nums.length; i++) {
			for (int j = i + 1; j < nums.length; j++) {
				if (nums[i] + nums[j] == target) {
					arr[0] = i;
					arr[1] = j;
				}
			}
		}
		return arr;
	}
}
