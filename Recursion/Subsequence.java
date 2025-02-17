
import java.util.ArrayList;

public class Subsequence {

    public static void printF(int i, ArrayList<Integer> list, int[] arr, int n) {
        if (i == n) {
            System.out.println(list); // Print the current subsequence
            return;
        }

        // Not pick the current element
        printF(i + 1, list, arr, n);

        // Pick the current element
        list.add(arr[i]);
        printF(i + 1, list, arr, n);

        // Backtrack to remove the last added element
        list.remove(list.size() - 1);
    }

    public static void main(String[] args) {
        int[] arr = {3, 1, 2};
        int n = arr.length;

        ArrayList<Integer> list = new ArrayList<>();
        printF(0, list, arr, n);
    }
}
