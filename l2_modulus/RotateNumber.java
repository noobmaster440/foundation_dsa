class RotateNumber{
  public static void main(String args[]){
    System.out.println(rotate(12345,2));
  }
  public static int getDigits(int number){
    int counter=0;
    if (number == 0)
    {
      return 1;
    }
    while (number != 0)
    {
      number /= 10;
      counter++;
    }
    return counter;
  }
  public static int reverse(int number){
    int rem=0,answer=0;
    while(number!=0){
      rem=number%10;
      number/=10;
      answer=answer*10+rem;
    }
    return answer;
  }
  public static int rotate(int number,int r){
    int digits=getDigits(number);
    r%=digits;
    r=r<0?r+digits:r;

    int divider=1;
    int multiplyr=1;
    for (int i = 0; i < digits; i++) {
      if(i<r){
        multiplyr*=10;
      }
      else{
        divider*=10;
      }
    }

    int first=number/divider;
    int sec=number%divider;

    return (sec*multiplyr)+first;
  }
}