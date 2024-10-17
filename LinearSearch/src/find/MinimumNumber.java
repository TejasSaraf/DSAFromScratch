package find;

public class MinimumNumber {

	public static void main(String[] args) {
		int[] arr = { 3, 45, 66, 2, 35, 4, 33, 78, 99, 56 };
		int ans = min(arr);
		System.out.println(ans);
	}

	public static int min(int arr[]) {
		if (arr.length == 0) {
			return -1;
		}

		int min = arr[0];
		for (int i = 0; i < arr.length; i++) {
			if (arr[i] < min) {
				min = arr[i];
			}
		}

		return min;
	}

}
