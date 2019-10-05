import java.util.Scanner;

class Test {
  public static Scanner sc = new Scanner(System.in);

  public static void main(String args[]) {
    // int a = sc.nextInt();
    // int b = sc.nextInt();
    // System.out.println(pow(2, 8));
    System.out.println(counts(5));
  }

  public static int pow(int a, int b) {
    if (b == 0) {
      return 1;
    }
    return a * pow(a, b - 1);
  }

  public static int powBetter(int a, int b) {
    if (b == 0) {
      return 1;
    }
    int res = powBetter(a, b / 2);
    return ((b & 1) == 0) ? res * res : res * res * a;
  }

  public static int counts(int n) {
    if (n <= 1) {
      System.out.println("Base " + n);
      return n + 1;
    }
    int count = 0;
    System.out.println("Pre :" + n);
    count += counts(n - 1);
    System.out.println("In :" + n);
    count += counts(n - 2);
    System.out.println("Post :" + n);
    return count + 3;
  }

}