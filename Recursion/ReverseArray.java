
import java.util.ArrayList;
import java.util.Collections;

public class ReverseArray {

    public static void reverse(ArrayList<Integer> list, int l, int n) {
        if (l >= n / 2) {
            return;
        }
        Collections.swap(list, l, n - l - 1);
        reverse(list, l + 1, n);
    }

    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList<>(5);
        int l = 0;
        System.err.print("Array Before: ");
        for (int i = 1; i <= 5; i++) {
            list.add(i);
        }
        System.out.println("ArrayList befor reverse : " + list);
        int n = list.size();
        reverse(list, l, n);
        System.out.println("ArrayList after reverse : " + list);
    }
}
