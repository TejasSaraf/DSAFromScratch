
public class Palindrome {

    public static boolean isPalindrome(int l, int n, String s) {

        if (l >= n / 2) {
            return true;
        }

        if (s.charAt(l) != s.charAt(n - l - 1)) {
            return false;
        }

        return isPalindrome(l + 1, n, s);

    }

    public static void main(String[] args) {
        String s = "ABCDCBA";
        int l = 0;
        int n = s.length();
        boolean ans = isPalindrome(l, n, s);
        System.err.println(ans);
    }
}
