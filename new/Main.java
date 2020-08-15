import java.sql.SQLOutput;
import java.sql.Statement;
import java.util.*;

public class Main {
    public static void main(String[] args){
        Scanner sca=new Scanner(System.in);
        int n=sca.nextInt();
        int a=sca.nextInt();
        int b=sca.nextInt();
        int[][] arr=new int[n][2];
        for(int i=0;i<n;i++){
            arr[i][0]=sca.nextInt();
            arr[i][1]=sca.nextInt();
        }
        int res=0;
        Arrays.sort(arr,(o1,o2) -> o2[0]-o1[0]);
        for(int i=0;i<n;i++){
            int aa=arr[i][0];
            int bb=arr[i][1];
            if(aa>bb){
                if(a>0){
                    res+=aa;
                }
            }
        }

//
//            int n=scanner.nextInt();
//            String qi=scanner.next();
//            String zh=scanner.next();
//            int res=1;
//            ArrayList<String> list=new ArrayList<>();
//            for(int i=1;i<n;i++){
//                    String s1=scanner.next();
//                    String s2=scanner.next();
//                list.add(s1);
//                list.add(s2);
//            }
//            for(int j=0;j<list.size()-1;j++){
//                String t=list.get(j);
//                if(qi.equals(t)){
//                    res++;
//                    qi=list.get(j+1);
//                    j++;
//                }
//            }
//            System.out.println(res);

//        Scanner scanner = new Scanner(System.in);
//        long n = scanner.nextLong();
//        int res=0;
//        ArrayList<Long> list=new ArrayList<>();
//        for(long  i=1;i<=n;i++){
//            if(t(i)){
//                res++;
//                list.add(i);
//            }
//        }
//        if(res==0){
//            System.out.println(res);
//        }else {
//            System.out.println(res);
//            for (int i=0;i<res;i++){
//                long n1=list.get(i);
//                long n2=n1*4;
//                System.out.println(n1+" "+n2);
//            }
//        }
//    }
//    private static boolean t(long n) {
//        long m = n * 4;
//        StringBuilder s1 = new StringBuilder(n + "");
//        StringBuilder s2 = new StringBuilder(m + "");
//        if (s2.length() < s1.length()) {
//            for (int i = 0; i < (s1.length() - s2.length()); i++) {
//                s2.insert(0, "0");
//            }
//        }
//        String s3 = s1.toString();
//        String s4 = s2.toString();
//        int len = s3.length();
//        int l = 0;
//        int r = len - 1;
//        while (true) {
//            if (l >= len || r < 0) {
//                break;
//            }
//            if (s3.charAt(l) != s4.charAt(r)) {
//                return false;
//            } else {
//                l++;
//                r--;
//            }
//
//        }
//        return true;
    }
}
