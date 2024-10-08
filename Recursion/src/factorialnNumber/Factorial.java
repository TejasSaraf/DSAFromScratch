package factorialnNumber;

import java.util.*;

public class Factorial {

	public static int factorial(int n) {

		if (n == 0)
			return 1;

		int prob = factorial(n - 1);
		int ans = n * prob;
		return ans;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int ans;
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter number:");
		int n = sc.nextInt();

		sc.close();

		ans = factorial(n);
		System.out.println("Factorial of " + n + ": " + +ans);

	}

}
