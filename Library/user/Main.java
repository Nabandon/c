package Library.user;

import Library.book.Book;
import Library.book.BookList;

import java.sql.SQLOutput;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        BookList bookList=new BookList();
        User user=login();
        while (true){
            int choice=user.menu();
            user.doaction(choice,bookList);
        }

    }
    public static User login(){
        Scanner scanner=new Scanner(System.in);
        System.out.println("输入您的姓名:");
        String name=scanner.next();
        System.out.println("您的身份:1.管理员 2.普通用户");
        int who=scanner.nextInt();
        if(who==1){
            return new Adamin(name);
        }
        return new NormalUser(name);
    }
}
