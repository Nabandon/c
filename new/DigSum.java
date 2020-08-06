import java.util.Scanner;

public class DigSum {
    public static void main(String[] args){
        Scanner sca=new Scanner(System.in);
        int t=sca.nextInt();
        for(int k=0;k<t;k++){
            int n=sca.nextInt();
            int[][] arr=new int[4][n];
            for(int i=0;i<4;i++){
                for(int j=0;j<n;j++){
                    arr[i][j]=sca.nextInt();
                }
            }
            String[] fx={"E","S","W","N"};
            StringBuilder str=new StringBuilder();
            int res=0;
            for(int i=0;i<n;i++){
                int index=0;
                for(int j=1;j<4;j++){
                    if(arr[index][i]>arr[j][i]){
                        index=j;
                    }
                }
                res+=arr[index][i];
                str.append(fx[index]);
            }
            System.out.println(res);
            System.out.println(str.toString());
        }
    }
}
