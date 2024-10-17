package find;

public class SearchInString {

	public static void main(String[] args) {
		String fruit = "Apple";
		char target = 'e';

		boolean ans = linearSearchInStringArray(fruit, target);
		System.out.println(ans);
	}

	public static boolean linearSearchInStringArray(String fruit, char target) {
		if (fruit.length() == 0) {
			return false;
		}

		for (int i = 0; i < fruit.length(); i++) {
			if (fruit.charAt(i) == target) {
				return true;
			}
		}
		return false;

	}

}
