
public class ReverseString {

    public static void reverse(String s) {
        if (s.length() <= 1) {
            System.out.println(s);
        } else {
            System.out.print(s.charAt(s.length() - 1));
            reverse(s.substring(0, s.length() - 1));
        }
    }

    public static void main(String[] args) {
        String s = "Hello";
        reverse(s);
    }
}
