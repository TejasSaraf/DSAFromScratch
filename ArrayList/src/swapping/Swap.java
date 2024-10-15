package swapping;

import java.util.*;

public class Swap {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
//		Scanner in = new Scanner(System.in);
		ArrayList<Integer> arr = new ArrayList<>(5);

		for (int i = 1; i <= 5; i++) {
			arr.add(i);
		}
		System.out.println("Original ArrayList : " + arr);
		swapArrayList(arr, 1, 2);
		System.out.println("Swapped ArrayList : " + arr);
	}

	public static void swapArrayList(ArrayList<Integer> arr, int index1, int index2) {
		int temp = arr.get(index1);
		arr.set(index1, arr.get(index2));
		arr.set(index2, temp);
	}
}
