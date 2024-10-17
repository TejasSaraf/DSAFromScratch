package find;

public class SearchInRange {

	public static void main(String[] args) {
		int[] arr = { 2, 6, 33, 7, 22, 89, 45, 67, 23, 1 };
		int target = 67;
		int ans = searchElementInRange(arr, target, 1, 8);
		System.out.println(ans);
	}

	public static int searchElementInRange(int arr[], int target, int start, int end) {
		if (arr.length == 0) {
			return -1;
		}

		for (int i = start; i <= end; i++) {
			int element = arr[i];
			if (element == target) {
				return element;
			}
		}
		return -1;
	}

}
