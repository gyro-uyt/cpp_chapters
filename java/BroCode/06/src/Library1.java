public class Library1 {

    String name;
    int year;
    Book1[] books;

    Library1(String name, int year, Book1[] books) {
        this.name = name;
        this.year = year;
        this.books = books;
    }

    void displayInfo(){
        System.out.println("The "+this.year+" "+this.name);
        System.out.println("Books Available: ");
        for (Book1 book: books){
            System.out.println(book.displayInfo());
        }
    }
}

