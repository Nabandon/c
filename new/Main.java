import java.sql.SQLOutput;
import java.sql.Statement;
import java.util.*;
class Int{
     int x;
     int y;
     public  Int(int x,int y){
         this.x=x;
         this.y=y;
     }
}
public class Main {
    public static void main(String[] args) {
        Scanner sca = new Scanner(System.in);
        ArrayList<Integer> list=new ArrayList<>();
            int l=sca.nextInt();

         String c=sca.next();
        String c2=sca.next();
            for(int i=0;i<c.length();i++){
                char c1=c.charAt(i);
                if(c1<='9' && c1>='0'){
                    list.add(c1-'0');
                }
            }


        for(int i=0;i<c2.length();i++){
            char c1=c2.charAt(i);
            if(c1<='9' && c1>='0'){
                list.add(c1-'0');
            }
        }
            int len=list.size()/2;
        int[] w=new int[len];

        for(int i=0;i<len;i++){
            w[i]=list.get(i);
            list.remove(i);
        }
        int[] v=new int[len];
        for(int i=0;i<list.size();i++){
            v[i]=list.get(i);
        }
            System.out.println(h(l,w,v));
        }

    private static int h(int l,int[] w,int[] v){
        int num=w.length;
        if(num<1 || l<1){
            return 0;
        }
        int[] maxV=new int[l+1];
        for(int i=1;i<=num;i++){
            for(int j=l;j>0;j--){
                if(w[i-1]<=j){
                    int vt=maxV[j-w[i-1]]+v[i-1];
                    maxV[j]=Math.max(vt,maxV[j]);
                }
            }
        }
        return maxV[l];
    }
}

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
