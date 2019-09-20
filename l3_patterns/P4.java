public class P4 {
  public static void main(String[] args) {
    print(11);
  }

  public static void print(int n) {
    int nst = 1;
    int nsp = n / 2;
    for (int r = 1; r <= n; r++) {
      // loop for spaces
      for (int csp = 1; csp <= nsp; csp++) {
        System.out.print(" ");
      }
      // loop for stars
      for (int cst = 1; cst <= nst; cst++) {
        System.out.print("*");
      }
      if (r >= ((n / 2) + 1)) {
        nst -= 2;
        nsp++;
      } else {
        nst += 2;
        nsp--;
      }
      System.out.println();
    }
  }
}