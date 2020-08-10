import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;

public class Main {
    public static void main(String[] args) {
        int[][] arr= {{1,1,1,1},{1,1,1,1},{1,1,1,1},
                {1,1,1,1},{1,1,1,1},{1,1,1,1}};
        System.out.println(countWays(arr,6,4));

    }
    public static int countWays(int[][] map, int x, int y) {
        // write code here
        int[][] res=new int[x][y];
        for(int i=0;i<x;i++){
            if(map[i][0]==1){
                res[i][0]=1;
            }else{
                break;
            }
        }
        for(int j=0;j<y;j++){
            if(map[0][j]==1){
                res[0][j]=1;
            }else{
                break;
            }
        }
        for(int i=1;i<x;i++){
            for(int j=1;j<y;j++){
                if(map[i][j]!=1){
                    map[i][j]=0;
                }
            }
        }
        for(int i=1;i<x;i++){
            for(int j=1;j<y;j++){
                if(map[i][j]==1){
                    res[i][j]=res[i-1][j]+res[i][j-1];
                }
            }
        }
        return res[x-1][y-1]%1000000007;
    }
}
