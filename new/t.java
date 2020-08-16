import java.util.Scanner;
import java.util.Stack;

public class t {
    public static void main(String[] args) {
        Scanner sca = new Scanner(System.in);
        Stack<String> stack = new Stack<>();
        String[] str = sca.nextLine().split(" ");
        if(str.length==0){
            return;
        }
        String t=null;
        for(int i=0;i<str.length;i++){
            if(str[i].equals("undo") && !stack.isEmpty()){
                t=stack.pop();
            }else if(str[i].equals("redo") && t!=null){
                stack.push(t);
            }else {
                stack.push(str[i]);
            }
        }
        StringBuilder stringBuilder=new StringBuilder();
        while (!stack.isEmpty()){
            stringBuilder.insert(0," "+stack.pop());
        }
        System.out.println(stringBuilder.toString().trim());
     }
}
