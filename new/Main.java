import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;

public class Main {
    public static void main(String[] args) {
        int[][] ints={{2,1,4},{4,1,6}};
        int c=5;
//        int[] arr=new int[1001];
//        for(int i=0;i<10;i++){
//            arr[i]-=i;
//        }
//        for(int i=0;i<10;i++){
//            System.out.println(arr[i]);
//        }
 //   System.out.println(minCarCount(ints,c));
    }
    public int maxLevel (int x, int level, int[][] tasks) {
        // write code here
        if(x==0){
            return level;
        }
        Arrays.sort(tasks,(Comparator.comparingInt(o -> o[1])));

        for(int i=0;i<x;i++){
            for(int j=tasks.length-1;j>=0;j--){
                if(level>=tasks[j][0]){
                    level+=tasks[j][1];
                    break;
                }
            }
        }
            return level;
    }


    public static int minCarCount (int[][] trips, int capacity) {
        // write code here
        int len=trips.length;
        if(len==0){
            return  0;
        }
        int[] arr=new int[1001];
        for(int i=0;i<len;i++){
            int r=trips[i][0];
            int s=trips[i][1];
            int x=trips[i][2];
            arr[s]+=r;
            arr[x]=(arr[x]-r<=0?0:(arr[x]-r));
        }
        int res=0;
        for(int j=0;j<1001;j++){
            int r=arr[j];
            if(r>(capacity*res)){
                res+=(r/capacity);
                if(r%capacity!=0){
                    res+=1;
                }
            }
        }
        return res;
    }
}
