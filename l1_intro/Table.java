import java.util.Scanner;
class Table{
  public static Scanner scn=new Scanner(System.in);
  public static void main(String args[]){
    System.out.print("Enter the number for table  ");
    int number=scn.nextInt();
    System.out.print("Enter limit ");
    int limit=scn.nextInt();

    for(int i=1;i<=limit;i++){
      System.out.println(number+" * "+i+" = "+number*i);
    }
  }
}