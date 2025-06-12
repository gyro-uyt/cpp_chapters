public class Aggregation1 {
    public static void main(String[] args){

        // Aggregation -> Represents a "has-a" relationship between objects.
        //                One object contains another object as part of its structure,
        //                but the contained object/s can exist independently.

        Book1 book1 = new Book1("A Game of Thrones", 694);
        Book1 book2 = new Book1("A Clash of Kings", 768);
        Book1 book3 = new Book1("A Storm of Swords", 973);

        Book1[] books  = {book1,book2,book3};
        for (Book1 book: books){
            System.out.println(book.displayInfo());
        }

        Library1 library1 = new Library1("NYC Public Library", 1897, books);

        library1.displayInfo();

        // we can even delete Library class as Book is not built into it
    }
}
