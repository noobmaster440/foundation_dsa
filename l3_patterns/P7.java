public class P7 {
  public static void main(String[] args) {
    print(9);
  }

  public static void print(int n) {
    int nst = 1;
    for (int r = 0; r < n; r++) {
      int val = 1;
      // loop for stars
      for (int cst = 0; cst < nst; cst++) {
        System.out.print(val + " ");
        val = ((r - cst) * val) / (cst + 1);
      }
      nst++;
      System.out.println();
    }

  }
}