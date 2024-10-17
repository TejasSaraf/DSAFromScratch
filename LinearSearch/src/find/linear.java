package find;

public class linear {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] arr = { 3, 45, 6, 72, 14, 33, 90, 65, 22, -2 };
		int target = 22;
		int ans = linearSearch(arr, target);
		System.out.println(ans);
	}

	public static int linearSearch(int arr[], int target) {
		if (arr.length == 0) {
			return -1;
		}

		for (int i = 0; i < arr.length; i++) {
			int element = arr[i];
			if (element == target) {
				return element;
			}
		}

		return -1;
	}

}
