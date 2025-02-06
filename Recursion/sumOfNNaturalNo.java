
public class sumOfNNaturalNo {

    public static void sum(int n, int sum) {
        if (n < 1) {
            System.err.println(sum);
            return;
        }
        sum(n - 1, sum + n);
    }

    public static void main(String args[]) {
        int n = 3, sum = 0;
        sum(n, sum);
    }
}
