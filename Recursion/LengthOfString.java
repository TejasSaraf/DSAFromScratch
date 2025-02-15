
public class LengthOfString {

    public static int strLength(String str) {
        if (str.isEmpty()) {
            return 0;
        } else {
            return strLength(str.substring(1)) + 1;
        }
    }

    public static void main(String[] args) {
        String str = "Hello";
        System.err.println(strLength(str));
    }
}
