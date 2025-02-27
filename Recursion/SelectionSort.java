
public class SelectionSort {

    public static void sort(int[] arr, int i, int n) {

        if (i < n) {
            int min = i;
            for (int j = i + 1; j <= n; j++) {
                if (arr[j] < arr[min]) {
                    min = j;
                }
            }
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
            sort(arr, i + 1, n);
        }
    }

    public static void main(String[] args) {
        int[] arr = {3, 2, 5, 1, 4};
        int n = arr.length - 1;
        int i = 0;
        sort(arr, i, n);
        for (int idx = 0; idx < arr.length; idx++) {
            System.out.println(arr[idx] + " ");

        }
    }
}
