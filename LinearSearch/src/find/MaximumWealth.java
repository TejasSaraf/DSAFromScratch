//https://leetcode.com/problems/richest-customer-wealth/submissions/
package find;

public class MaximumWealth {
	public int maximumWealth(int[][] accounts) {
        int max=0;
        for(int row=0; row<accounts.length;row++){
            int rowSum =0;  
            for(int col=0; col<accounts[row].length; col++)
            {
                rowSum += accounts[row][col];
            }
                    
            if(rowSum > max){
                max=rowSum;
            }
        }
        return max;
    }
}
