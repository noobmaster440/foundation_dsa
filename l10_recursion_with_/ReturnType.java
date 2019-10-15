import java.util.ArrayList;
class ReturnType{
  public static void main(String args[]){
  //  System.out.println(subSequence("abcd"));
  //  System.out.println(deleteHi("hiiiiahibchihihidhihihi"));
   System.out.println(removeDup("aabbbbbcccddd"));
  }
  public static ArrayList<String> subSequence(String str){
    if(str.length()==0){
      ArrayList<String> base=new ArrayList<>();
      base.add("");
      return base;
    }
    char ch=str.charAt(0);
    String ros=str.substring(1);

    ArrayList<String> recAns=subSequence(ros);
    ArrayList<String> myAns=new ArrayList<>();

    myAns.addAll(recAns);
    for(String s:recAns){
      myAns.add(ch+s);
    }
    return myAns;
  }

  public static String deleteHi(String str){
    if(str.length()==0){
      return "";
    }
    String first2=str.substring(0,2);
    if(str.length()>1&&first2.equals("hi")){
      return deleteHi(str.substring(2));
    }else{
      return str.charAt(0)+deleteHi(str.substring(1));
    }
  }

  public static String removeDup(String str){
    if(str.length()==1){
      return str;
    }
    String ans=removeDup(str.substring(1));
    if(str.charAt(0)==ans.charAt(0)){
      return ans;
    }else{
      return str.charAt(0)+ans;
    }
  }
}