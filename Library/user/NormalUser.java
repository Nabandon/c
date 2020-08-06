package Library.user;

import Library.action.*;
import java.util.Scanner;

public class NormalUser extends     User {
    public NormalUser(String name) {
        this.name=name;
        this.actions=new IAction[]{
                new Exitaction(),
                new FindAction(),
                new Borrowacyion(),
                new Returnaction(),

        };
    }

    @Override
    public int menu() {
        System.out.println("欢迎"+this.name+"来到图书馆");
        System.out.println("1.查找书籍");
        System.out.println("2.借书");
        System.out.println("3.还书");
        System.out.println("0.退出");
        System.out.println("输入您的选择:");
        int choice=0;
        Scanner scanner=new Scanner(System.in);
        choice=scanner.nextInt();
        return choice;
    }
}
