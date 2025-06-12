public class Static {
    public static void main(String[] args) {

        // Static -> Makes a variable or method belong to the class
        //           rather than to any specific object.
        //           Commonly used for utility methods or shared resources. (ex: Math.round(3.99), here Math is class & round is a static method)

        Friend friend1 = new Friend("Shivam");
        Friend friend2 = new Friend("Sumit");

//        System.out.println(friend1.numOfFriends); // we use class name to call static member/methods
        System.out.println(Friend.numOfFriends);
        Friend.showFriends();
    }
}
