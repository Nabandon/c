import com.sun.xml.internal.ws.policy.privateutil.PolicyUtils;

import javax.sql.ConnectionPoolDataSource;
import java.lang.reflect.Array;
import java.math.BigDecimal;
import java.math.BigInteger;
import java.sql.Connection;
import java.sql.SQLOutput;
import java.sql.Statement;
import java.util.*;

class TreeNode{
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode(int val){
        this.val=val;
    }
}
public class Main {

    public static void main(String[] args) {
        Scanner sca = new Scanner(System.in);
        String[] na=sca.nextLine().split(" ");
        String[] nv=sca.nextLine().split(" ");
        int n=sca.nextInt();
        ArrayList<String> l1=new ArrayList<>();
        ArrayList<String> l2=new ArrayList<>();
        for(int i=0;i<n;i++){
            String nta=sca.next();
            String ntv=sca.next();
            if(!l1.contains(nta)){
                l1.add(nta);
            }
            if(!l2.contains(ntv)){
                l2.add(ntv);
            }
        }
        System.out.println(Math.min(l1.size(),l2.size()));
    }
}
//    public static int numberofprize (int a, int b, int c) {
//        // write code here
//        if(a==b && b==c ){
//            return a;
//        }
////        int maxt=Math.max(a,b);
////        int midt=Math.min(a,b);
////         a=Math.max(maxt,c);
////         if(a>maxt && maxt>=c){
////             b=maxt;
////         }
//         c=Math.min(midt,c);
//         if(a==b && b==c+1){
//             return c;
//         }else if(b==c && a==b+1){
//             return c;
//         }else if(a==b+1 && b==c+1){
//             return c;
//         } else {
//             int t=a-c;
//             while (a-t>b){
//                 if(t%2==0){
//                     a-=t;
//                     c+=t/2;
//                 }else {
//                     a=a-t+1;
//                     c+=t/2;
//                 }
//                t=a-c;
//             }
//
//             while (a>=b+2){
//                 a-=2;
//                 c++;
//             }
//
//             while (a>=b && b>c+1){
//                 a--;
//                 b--;
//                 c++;
//             }
//         }
//        return numberofprize(a,b,c);
//    }
//}

//        int t=sca.nextInt();
//        for(int i=0;i<t;i++){
//            ArrayList<Integer> list=new ArrayList<>();
//            int n=sca.nextInt();
//            int m=sca.nextInt();
//            int[] arr=new int[n+1];
//            for(int j=0;j<m-1;j++){
//                int k=sca.nextInt();
//                for(int a=0;a<k;a++){
//                    int l=sca.nextInt();
//                    int r=sca.nextInt();
//                    for(;l<=r;l++){
//                        arr[l]++;
//                    }
//                }
//            }
//            int k=sca.nextInt();
//            for(int a=0;a<k;a++){
//                int l=sca.nextInt();
//                int r=sca.nextInt();
//                for(;l<=r;l++){
//                    arr[l]++;
//                    if(arr[l]==m){
//                        list.add(l);
//                    }
//                }
//            }
//            Collections.sort(list);
//            System.out.println(list.size());
//            for(int i2=0;i2<list.size();i2++){
//                System.out.print(list.get(i2)+" ");
//            }
//            System.out.println();
//        }
//    }
//}

//public class Main {
//    public static void main(String[] args) {
//        Scanner sca=new Scanner(System.in);
//        int n=sca.nextInt();
//        int m=sca.nextInt();
//
//    }
//}
//        Scanner sca=new Scanner(System.in);
//        int t=sca.nextInt();
//        for(int i=0;i<t;i++){
//            int n=sca.nextInt();
//            int m=sca.nextInt();
//            int[] arr=new int[n+1];
//            for(int j=0;j<m;j++){
//                int k=sca.nextInt();
//                for(int a=0;a<k;a++){
//                    int l=sca.nextInt();
//                    int r=sca.nextInt();
//                    for(;l<=r;l++){
//                        arr[l]++;
//                    }
//                }
//            }
//
//            ArrayList<Integer> list=new ArrayList<>();
//            for(int i1=0;i1<=n;i1++){
//                if(arr[i1]==m){
//                    list.add(i1);
//                }
//            }
//            System.out.println(list.size());
//          //  Collections.sort(list);
//            for(int i2=0;i2<list.size();i2++){
//                System.out.print(list.get(i2)+" ");
//            }
//            System.out.println();
//        }
//    }
//}
       // 1
//public class Main {
//    public static void main(String[] args) {
//      Scanner sca=new Scanner(System.in);
//      int n=sca.nextInt();
//      int[] arr=new int[n];
//      boolean f=false;
//      for(int i=0;i<n;i++){
//          arr[i]=sca.nextInt();
//          if(arr[i]==0){
//              f=true;
//          }
//      }
//      if (!f || n<4 ){
//          System.out.println(-1);
//          return;
//      }
//
//    }
//
// }
//        String[] a={"nice","try","do"};
//        String[] res= quick_sort(a);
//        for(int i=0;i<res.length;i++){
//            System.out.println(res[i]);
//        }
//    }
//    public static String[] quick_sort (String[] array) {
//        // write code here
//        q(array,0,array.length-1);
//        return array;
//    }
//    private static void q(String[] arr, int left, int right){
//        if(left>=right){
//            return ;
//        }
//        int mid=h(arr,left,right);
//        q(arr,left,mid-1);
//        q(arr,mid+1,right);
//    }
//    private static int h(String[] arr, int left, int right){
//        int start=left;
//        int end=right;
//        while(start<end){
//            while(start<end && arr[start].compareTo(arr[right])<0){
//                start++;
//            }
//            while(start<end && arr[end].compareTo(arr[right])>0){
//                end--;
//            }
//            String t=arr[start];
//            arr[start]=arr[end];
//            arr[end]=t;
//        }
//        String t=arr[start];
//        arr[start]=arr[right];
//        arr[right]=t;
//        return start;
//    }
//
//}

//        Scanner scanner=new Scanner(System.in);
//        HashMap<Character,Int> map=new HashMap<>();
//        map.put('0',new Int(0,0));
//        map.put('1',new Int(0,1));
//        map.put('C',new Int(0,2));
//        map.put('H',new Int(0,3));
//        map.put('A',new Int(0,4));
//        map.put('9',new Int(1,0));
//        map.put('E',new Int(1,1));
//        map.put('7',new Int(1,2));
//        map.put('B',new Int(1,3));
//        map.put('I',new Int(1,4));
//        map.put('K',new Int(2,0));
//        map.put('D',new Int(2,1));
//        map.put('4',new Int(2,2));
//        map.put('8',new Int(2,3));
//        map.put('J',new Int(2,4));
//        map.put('6',new Int(3,0));
//        map.put('5',new Int(3,1));
//        map.put('F',new Int(3,2));
//        map.put('G',new Int(3,3));
//        map.put('O',new Int(3,4));
//        map.put('L',new Int(4,0));
//        map.put('N',new Int(4,1));
//        map.put('M',new Int(4,2));
//        map.put('2',new Int(4,3));
//        map.put('3',new Int(4,4));
//        while (scanner.hasNext()){
//            String str=scanner.next();
//            boolean f=true;
//            char c=str.charAt(0);
//            Int it=map.get(c);
//            int xt=it.x;
//            int yt=it.y;
//            for(int i=1;i<str.length();i++){
//                char ct=str.charAt(i);
//                Int itt=map.get(ct);
//                int x=itt.x;
//                int y=itt.y;
//                if(x==xt && y==yt-1 || x==xt && y==yt+1 || x==xt-1 && y==yt || x==xt+1 && y==yt){
//                    xt=x;
//                    yt=y;
//                }else {
//                    f=false;
//                    break;
//                }
//            }
//            if(f){
//                System.out.println("Y");
//            }else {
//                System.out.println("N");
//            }
//        }
//
//    }
//}

//        String str=sca.nextLine();
//        StringBuilder sb=new StringBuilder(str);
//        if(str==null || str.length()<1){
//            return;
//        }
//        if(str.charAt(0)=='n'){
//            sb.setCharAt(0,'N');
//            System.out.println(sb.toString());
//            return;
//        }
//
//        StringBuilder stringBuilder=new StringBuilder();
//        for(int i=0;i<str.length();i++){
//            if(i==0 ){
//                String t=str.charAt(i)+"";
//                stringBuilder.append(t.toUpperCase());
//                i++;
//            }
//            if(str.charAt(i)!='n'){
//                while (i<str.length() && str.charAt(i)!='n'){
//                    stringBuilder.append(str.charAt(i));
//                    i++;
//                }
//            }
//            System.out.println(stringBuilder.toString());
//            if(i<str.length()){
//                stringBuilder=new StringBuilder();
//                stringBuilder.append((str.charAt(i)+"").toUpperCase());
//            }
//        }
//
//    }
//}

//        int res=0;
//        for(int i=0;i<n;i++){
//            String str=sca.next();
//            if(h(str)==true){
//                res++;
//            }
//
//        }
//        System.out.println(res);
//    }
//    private static boolean h(String str){
//        if(str==null || str.length()>10 || str.length()<1){
//            return false;
//        }
//        for(int i=0;i<str.length();i++){
//            char c=str.charAt(i);
//            if(c<='Z'&&c>='A' || c<='z'&&c>='a'){
//                continue;
//            }else{
//                return false;
//            }
//        }
//        return true;
//    }
//}

//    public static void main(String[] args){
//        Scanner sca=new Scanner(System.in);
//        Stack<String> stack=new Stack<>();
//
//
//        String str="";
//        while (sca.hasNext()){
//            String t=sca.next();
//            if("undo".equals(t) && !stack.empty()){
//                str=stack.pop();
//            }else if("redo".equals(t) && str!=""){
//                stack.push(str);
//
//            }else{
//                stack.push(t);
//
//            }
//        }
//        StringBuilder sb=new StringBuilder();
//
//        while (!stack.isEmpty()){
//            sb.insert(0," "+stack.pop());
//        }
//        System.out.println(sb.toString().trim());

//        int n=sca.nextInt();
//        int a=sca.nextInt();
//        int b=sca.nextInt();
//        int[][] arr=new int[n][2];
//        for(int i=0;i<n;i++){
//            arr[i][0]=sca.nextInt();
//            arr[i][1]=sca.nextInt();
//        }
//        int res=0;
//        Arrays.sort(arr,(o1,o2) -> o2[0]-o1[0]);
//        for(int i=0;i<n;i++){
//            int aa=arr[i][0];
//            int bb=arr[i][1];
//            if(aa>bb){
//                if(a>0){
//                    res+=aa;
//                }
//            }
//        }

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
//    }
//}
