import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class Tickets {
    public int minPathSum (int[][] grid) {
        // write code here
        int n=grid.length;
        if(n<1){
            return -1;
        }
        int m=grid[0].length;
        if(m<1){
            return -1;
        }
        for(int i=1;i<m;i++){
            grid[0][i]+=grid[0][i-1];
        }
        for(int i=1;i<n;i++){
            grid[i][0]+=grid[i-1][0];
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                grid[i][j]=Math.min(grid[i][j]+grid[i-1][j],grid[i][j]+grid[i][j-1]);
            }
        }
        return grid[n-1][m-1];
    }
    public int[] merge (int[] one, int[] two) {
        // write code here
        Arrays.sort(one);
        Arrays.sort(two);
        int i=0;
        int j=0;
        int index=0;
        int[] newArr=new int[one.length+two.length];
        while (i<one.length && j<two.length){
            if(one[i]<two[j]){
                newArr[index++]=one[i++];
            }else {
                newArr[index++]=two[j++];
            }
        }
        while (i<one.length){
            newArr[index++]=one[i++];
        }
        while (j<two.length){
            newArr[index++]=two[j++];
        }
        return newArr;
    }
}
