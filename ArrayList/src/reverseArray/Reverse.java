package reverseArray;

import java.util.ArrayList;

public class Reverse {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ArrayList<Integer> list = new ArrayList<>(5);
		for (int i = 0; i <= 5; i++) {
			list.add(i);
		}
		System.out.println("ArrayList befor reverse : " + list);
		reverse(list);
		System.out.println("ArrayList after reverse : " + list);
	}

	public static void reverse(ArrayList<Integer> list) {
		int start = list.get(0);
		int end = list.size() - 1;

		while (start < end) {
			swap(list, start, end);
			start++;
			end--;
		}
	}

	public static void swap(ArrayList<Integer> list, int index1, int index2) {
		int temp = list.get(index1);
		list.set(index1, list.get(index2));
		list.set(index2, temp);
	}
}
