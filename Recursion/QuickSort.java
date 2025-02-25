

public class QuickSort {

    public static int swap(int[] arr, int low, int high) {
        int pivot = arr[low];
        int i = low, j = high;
        while (i < j) {
            while (arr[i] <= pivot && i <= high) {
                i++;
            }
            while (arr[j] > pivot && j >= low) {
                j--;
            }
            if (i < j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

            int temp = arr[low];
            arr[low] = arr[j];
            arr[j] = temp;
        }
        return j;
    }

    public static void qs(int[] arr, int low, int high) {
        if (low < high) {
            int partition = swap(arr, low, high);
            qs(arr, low, partition - 1);
            qs(arr, partition + 1, high);
        }
    }

    public static void main(String[] args) {
        int[] arr = {3, 1, 5, 4, 2};
        int low = 0;
        int high = arr.length - 1;
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]);
        }
        System.err.println("");
        qs(arr, low, high);
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]);
        }
    }
}
