import com.sun.xml.internal.ws.policy.privateutil.PolicyUtils;

import javax.sql.ConnectionPoolDataSource;
import java.lang.reflect.Array;
import java.math.BigDecimal;
import java.math.BigInteger;
import java.net.Inet4Address;
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
class Char{
    int c;
    char aChar;

}
public class Main {

    public static void main(String[] args){
        Scanner sca=new Scanner(System.in);
        String s=sca.nextLine();
        ArrayList<Character> list=new ArrayList<>();
        HashMap<Character,Integer> map=new HashMap<>();
        for(int i=0;i<s.length();i++){
            map.put(s.charAt(i),map.getOrDefault(s.charAt(i),0));
            if(!list.contains(s.charAt(i))){
                list.add(s.charAt(i));
            }
        }
        Char[] arr=new Char[list.size()];
        for(int i=0;i<list.size();i++){
            Char tt=new Char();
            tt.c=map.get(list.get(i));
            tt.aChar=list.get(i);
            arr[i]=tt;
        }
        Arrays.sort(arr,(Comparator.comparingInt(o -> o.c)));
        StringBuilder stringBuilder=new StringBuilder();
        int in=list.size();
        int i=1;
           while (i<in && arr[i].c==arr[i-1].c){
               i++;
           }
            while (i<in){
                stringBuilder.append(arr[i].aChar);
                i++;
            }
            String s1=stringBuilder.toString();
        StringBuilder sb=new StringBuilder();
        for(int i1=0;i1<s.length();i1++){
            if(s1.contains(s.charAt(i1)+"")){
                sb.append(s.charAt(i1));
            }
        }
        System.out.println(sb.toString());
    }

    private static boolean h(int m){
        while(m%2==0){
            m>>=1;
        }
        while(m%3==0){
            m=m/3;
        }
        while(m%5==0){
            m=m/5;
        }
        return m==1;
    }
    static int canCompleteCircuit(int[] supply, int[] cost) {
        int start =0;
        int end=0;
        int sum=0;
        for(int i=0;i<supply.length;i++){
            end+=(supply[i]-cost[i]);
            if(sum<0){
                sum=supply[i]-cost[i];
                start=i;
            }else{
                sum+=(supply[i]-cost[i]);
            }
        }
        if(end>=0){
            return start;
        }
        return -1;
    }

    ArrayList<TreeNode> list=new ArrayList<>();
    public boolean checkBST(TreeNode root) {
        // write code here
        h(root);
        for(int i=1;i<list.size();i++){
            if(list.get(i).val<list.get(i-1).val){
                return false;
            }
        }
        return true;
    }

    public ArrayList<TreeNode> h(TreeNode root){
        if (root==null){
            return list;
        }
        if(root.left==null && root.right==null){
            list.add(root);
            return list;
        }
        h(root.left);
        list.add(root);
        h(root.right);
        return list;
    }
}

