package maximum;

import java.util.*;

public class Max {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ArrayList<Integer> list = new ArrayList<>(5);
		for (int i = 1; i <= 5; i++) {
			list.add(i);
		}
		System.out.println(list);
		int ans = maxNumber(list);
		System.out.println("Maximum value of an ArrayList : " + ans);
	}

	public static int maxNumber(ArrayList<Integer> list) {
		int maxNum = list.get(1);

		for (int i = 1; i < 5; i++) {
			if (list.get(i) > maxNum) {
				maxNum = list.get(i);
			}
		}
		return maxNum;
	}

}
