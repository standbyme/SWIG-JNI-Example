public class StandbyMe {
    static {
        System.load("/home/standbyme/Documents/SWIG/libexample.so"); // Must use absolute path!
    }

    public static void main(String argv[]) {
        kitty a = kitty.m();
    }
}