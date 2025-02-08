
public class Fibonacci {

    public static int fibb(int n) {
        if (n <= 1) {
            return n;
        }

        return fibb(n - 1) + fibb(n - 2);
    }

    public static void main(String[] args) {
        int n = 12;
        fibb(n);

        for (int i = 0; i < n; i++) {
            System.out.print(fibb(i) + " ");
        }

    }
}
