
public class BinarySearch {

    public static int search(int start, int end, int target, int[] arr) {
        if (start > end) {
            return -1;
        }
        int mid = start + (end - start) / 2;

        if (target == arr[mid]) {
            return mid;
        }

        if (target < arr[mid]) {
            return search(start, mid - 1, target, arr);
        } else {
            return search(mid + 1, end, target, arr);
        }
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5, 6};
        int start = 0;
        int end = arr.length - 1;
        int target = 4;
        int ans = search(start, end, target, arr);
        System.err.println(ans);
    }
}
