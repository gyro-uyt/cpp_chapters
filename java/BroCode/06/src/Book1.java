public class Book1 {

    String title;
    int pages;

    Book1(String title, int pages){
        this.title = title;
        this.pages = pages;
    }

    String displayInfo(){
        return this.title+" ("+this.pages+" pages)";
    }
}
