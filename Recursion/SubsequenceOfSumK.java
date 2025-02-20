
import java.util.ArrayList;

public class SubsequenceOfSumK {

    public static boolean subsequence(int i, int[] arr, int s, int sum, ArrayList<Integer> list, int n) {
        if (i == n) {
            if (s == sum) {
                System.out.println(list);
                return true;
            }
            return false;
        }

        list.add(arr[i]);
        s += arr[i];
        if (subsequence(i + 1, arr, s, sum, list, n) == true) {
            return true;
        }
        list.remove(list.size() - 1);
        s -= arr[i];
        if (subsequence(i + 1, arr, s, sum, list, n) == true) {
            return true;
        }
        return false;
    }

    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList<>();
        int sum = 2;
        int[] arr = {1, 2, 1};
        int size = arr.length;
        subsequence(0, arr, 0, sum, list, size);
    }
}
