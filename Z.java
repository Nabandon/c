import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Z {
    public static void main(String[] args) throws IOException{
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        String n;
        while((n=br.readLine())!=null){
            int c=Integer.parseInt(n);
            int[][] arr=new int[c][2];
            for(int i=0;i<c;i++){
                String[] t=br.readLine().split(" ");
                arr[i][0]=Integer.parseInt(t[0]);
                arr[i][1]=Integer.parseInt(t[1]);

            }
            int res=1;
            for(int i=0;i<c-1;i++){
                for(int j=i+1;j<c;j++){
                    int x=Math.abs(arr[i][0]-arr[j][0]);
                    int y=Math.abs(arr[i][1]-arr[j][1]);
                    int tem=Math.max(x,y);
                    res=Math.max(tem,res);
                }
            }
            System.out.println(res*res);
        }
    }
}
