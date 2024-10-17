package find;

public class TwoDimensionalArray {

	public static void main(String[] args) {
		int[][] arr = { { 2, 45, 66 }, { 4, 56, 99 }, { 5, 63, 22 } };
		int target = 99;
		int ans = searchIn2DArray(arr, target);
		System.out.println(ans);
	}

	public static int searchIn2DArray(int[][] arr, int target) {
		if (arr.length == 0) {
			return -1;
		}

		for (int row = 0; row < arr.length; row++) {
			for (int col = 0; col < arr[row].length; col++) {
				int element = arr[row][col];
				if (element == target) {
					return element;
				}
			}
		}
		return -1;
	}

}
