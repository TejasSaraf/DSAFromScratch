
import java.util.ArrayList;

public class CountSubsequencesOfSumK {

    public static int subsequence(int i, int[] arr, int s, int sum, ArrayList<Integer> list, int n) {
        if (i == n) {
            if (s == sum) {
                return 1;
            }
            return 0;
        }

        list.add(arr[i]);
        s += arr[i];
        int left = subsequence(i + 1, arr, s, sum, list, n);
        list.remove(list.size() - 1);
        s -= arr[i];
        int right = subsequence(i + 1, arr, s, sum, list, n);
        return left + right;
    }

    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList<>();
        int sum = 2;
        int[] arr = {1, 2, 1};
        int size = arr.length;
        int ans = subsequence(0, arr, 0, sum, list, size);
        System.err.println("Count:" + ans);
    }
}
