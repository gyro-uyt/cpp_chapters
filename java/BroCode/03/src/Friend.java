public class Friend {

    static int numOfFriends;
    String name;

    Friend(String name) {
        this.name = name;
        numOfFriends++;
    }

    static void showFriends() {
//        System.out.println("You have " + this.numOfFriends);  // writing this here is wrong as this refers to object's variable and static independent of objects
        System.out.println("You have " + numOfFriends + " total friends");
    }
}
