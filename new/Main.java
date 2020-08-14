import java.sql.SQLOutput;
import java.sql.Statement;
import java.util.*;

public class Main {
    public static void main(String[] args) {
       int[] arr={};
       int[][] arr1={{1,3,1},
                     {1,5,1},
                     {4,2,1}};
        System.out.println(maxValue(arr1));
       // System.out.println(h(arr,1));
       // System.out.println(h(arr,6));
    }
    public static int maxValue(int[][] grid) {
        int m=grid.length;
        if(m<1){
            return 0;
        }
        int n=grid[0].length;
        for(int i=1;i<m;i++){
            grid[i][0]+=grid[i-1][0];
        }
        for(int i=1;i<n;i++){
            grid[0][i]+=grid[0][i-1];
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                int y=grid[i][j]+grid[i-1][j];
                int x=grid[i][j]+grid[i][j-1];
                grid[i][j]=Math.max(x,y);
            }
        }
        return grid[m-1][n-1];
    }
    private static int h(int[] arr,int c){
        int left=0;
        int right=arr.length-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(arr[mid]<c){
                left=mid+1;
            }else if(arr[mid]>c){
                right=mid-1;
            }else{
                return mid;
            }
        }
        return  -1;
    }
}
