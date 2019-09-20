import java.util.Scanner;
class GreatestNo{
  public static Scanner scn=new Scanner(System.in);
  public static void main(String args[]){
    System.out.print("Enter a  ");
    int a=scn.nextInt();
    System.out.println();
    System.out.print("Enter b  ");
    int b=scn.nextInt();
    System.out.println();
    System.out.print("Enter c  ");
    int c=scn.nextInt();

    System.out.println();

    if(a>b&&a>c){
      System.out.println(a);
    }else if(b>a&&b>c){
      System.out.println(b);
    }
    else{
      System.out.println(c);
    }
  }
}