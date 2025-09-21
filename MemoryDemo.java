public class MemoryDemo {
    public static void main(String[] args) {
        int[] arr = new int[1_000_000];
        System.out.println("Array length: " + arr.length);
        arr = null;
        System.gc();
        System.out.println("MemoryDemo finished.");
    }
}
