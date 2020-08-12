import java.util.*;

public class sou{
    public static void main(String[] args){
        Scanner sca=new Scanner(System.in);
        while(sca.hasNext()){
            int n=sca.nextInt();
            long r=sca.nextLong();
            long avg=sca.nextLong();
            long need=n*avg;
            int[][] arr=new int[n][2];
            for(int i=0;i<n;i++){
                arr[i][0]=sca.nextInt();
                arr[i][1]=sca.nextInt();
                need-=arr[i][0];
            }
            if(need<=0){
                System.out.println(0);
                continue;
            }
            Arrays.sort(arr,(o1,o2)->o1[1]-o2[1]);
            long res=0;
            for(int i=0;i<n;i++){
                long s=r-arr[i][0];
                for(int j=0;j<s;j++){
                    res+=arr[i][1];
                    need-=1;
                    if(need<=0){
                        System.out.println(res);
                        break;
                    }
                }
                if(need<=0){
                    break;
                }
            }
        }
    }
}
