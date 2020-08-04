import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class yushu {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str;
        while((str=br.readLine())!=null){
            String[] s = str.trim().split(" ");
            int n = Integer.valueOf(s[0]);
            int t = Integer.parseInt(s[1]);
            int c = Integer.parseInt(s[2]);
            int[] value = new int[n];
            if((str=br.readLine())!=null){
                String[] s2 = str.trim().split(" ");
                for(int i =0;i<n;i++){
                    value[i] = Integer.parseInt(s2[i]);
                }
            }
            System.out.println(carryMan(n,t,c,value));
        }
        br.close();
    }
    public static int carryMan(int n,int t,int c,int[]value){
        int sumValue=0;
        int result=0;
        for(int i=0;i<c;i++){
            sumValue+=value[i];
        }
        if(sumValue<=t){
            result++;
        }
        for(int i=c;i<n;i++){
            sumValue=sumValue-value[i-c]+value[i];
            if(sumValue<=t)
                result++;
        }
        return result;
    }
}
