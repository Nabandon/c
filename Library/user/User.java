package Library.user;

import Library.action.IAction;
import Library.book.BookList;

abstract public class User {
    protected  String name;
    protected IAction[] actions;
    abstract public int menu();
    public void doaction(int choice, BookList bookList){
        actions[choice].work(bookList);
    }
}
