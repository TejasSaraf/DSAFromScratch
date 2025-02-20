
public class Fibonacci {

    public static int fibb(int n) {
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        }
        if (n < 1) {
            return n;
        }
        return fibb(n - 1) + fibb(n - 2);
    }

    public static void main(String[] args) {
        int n = 2;
        System.out.println(fibb(n));
    }
}
