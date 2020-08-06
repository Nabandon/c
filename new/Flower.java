import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Map;

public class Flower {
    public static void main(String[] args) throws IOException{
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        String[] str=br.readLine().split(" ");
        int n=Integer.parseInt(str[0]);
        int[] p1={Integer.parseInt(str[1]),Integer.parseInt(str[2])};
        int[] p2={Integer.parseInt(str[3]),Integer.parseInt(str[4])};
        long[][] hua=new long[n][2];
        for(int i=0;i<n;i++){
            String[] fl=br.readLine().split(" ");
            long x=Long.parseLong(fl[0]);
            long y=Long.parseLong(fl[1]);
            hua[i][0]=(p1[0]-x)*(p1[0]-x)+(p1[1]-y)*(p1[1]-y) ;
            hua[i][1]=(p2[0]-x)*(p2[0]-x)+(p2[1]-y)*(p2[1]-y) ;
        }
        Arrays.sort(hua,(o1, o2) ->  (o2[0]-o1[0])>0?1:-1);
        long r2=0;
        long r1=Long.MAX_VALUE;
        for(int i=0;i<n;i++){
            r1=Math.min(r1,hua[i][0]+r2);
            r2=Math.max(r2,hua[i][1]);
        }
        System.out.println(Math.min(r1,r2));
    }
}
