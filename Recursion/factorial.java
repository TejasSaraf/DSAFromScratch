//factorial of number using parameterized function

public class factorial {

    public static void factorialOfN(int n, int fact) {
        if (n < 1) {
            System.out.println(fact);
            return;
        }
        factorialOfN(n - 1, fact * n);
    }

    public static void main(String args[]) {
        int n = 5, fact = 1;
        factorialOfN(n, fact);
    }
}
