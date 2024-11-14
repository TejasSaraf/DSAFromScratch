package find;

public class Sqrt_X {
	public int mySqrt(int x) {
		if (x == 0 || x == 1) {
			return x;
		}
		int start = 1;
		int end = x;
		int result = 0;

		while (start <= end) {
			int mid = start + (end - start) / 2;
			long n = (long) mid * mid;

			if (n == x) {
				return mid;
			}
			if ((long) n > x) {
				end = mid - 1;
			} else {
				start = mid + 1;
				result = mid;
			}
		}
		return result;
	}
}
