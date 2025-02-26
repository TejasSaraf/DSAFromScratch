
public class MaxMinValueInArray {

    public static int min(int[] arr, int n) {
        int min = 1;
        int i = 0;
        if (n == i) {
            return arr[i];
        }

        while (n > i) {
            if (arr[n] < min) {
                min = arr[n];
            }
            n--;
        }
        min(arr, n);

        return min;
    }

    public static int max(int[] arr, int n) {
        int max = 0;
        int i = 0;
        if (n == i) {
            return arr[i];
        }

        while (n > i) {
            if (arr[n] > max) {
                max = arr[n];
            }
            n--;
        }
        max(arr, n);

        return max;
    }

    public static void main(String[] args) {
        int[] arr = {1, 4, 45, 6, 10};

        int min = min(arr, arr.length - 1);
        System.out.println(min);
        int max = max(arr, arr.length - 1);
        System.out.println(max);
    }
}
