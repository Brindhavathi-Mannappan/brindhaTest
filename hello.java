// Set the source level to 21 or above
// Add the following line at the top of the file
// SourceLevel: 21
public class hello {

    public void sayHello() {
        System.out.println("Hello, World!");
    }

    public static String reverseString(String str) {
        return new StringBuilder(str).reverse().toString();
    }

    public static void main(String[] args) {
        System.out.println("Hello, World!");
        System.out.println(reverseString("Hello, World!"));
    }

}