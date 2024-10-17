//https://leetcode.com/problems/find-numbers-with-even-number-of-digits/submissions/
package find;

public class EvenDigits {

	public static int findNumbers(int[] nums) {
        int count =0;
        
        for(int num : nums){
            if(even(num))
            count++;
        }
        
        return count;
    }
    
    public static boolean even(int num){
        int numberOfDigits = digits(num);
        return numberOfDigits % 2 == 0;
    }
    
    public static int digits(int num){
        if(num<0){
            num = num*-1;
        }
        
        if(num == 0){
            return 1;
        }
        
        int count =0;
        while(num >0){
            count++;
            num = num/10;
        }
        return count;
    }
    
	public static void main(String[] args) {
		int[] arr= {12, 345, 2, 6, 7896};
		int ans = findNumbers(arr);
		System.out.println(ans);
	}
}
