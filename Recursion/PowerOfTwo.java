
public class PowerOfTwo {

    public static boolean isPowerOfTwo(int n) {
        if (n < 1) {
            return false;
        }
        if (n == 1) {
            return true;
        }
        if (n % 2 != 0) {
            return false;
        }
        return isPowerOfTwo(n / 2);
    }

    public static void main(String[] args) {
        int n = 16;
        boolean ans = isPowerOfTwo(n);
        System.err.println(ans);
    }
}
