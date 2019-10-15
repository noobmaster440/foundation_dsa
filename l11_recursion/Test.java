import java.util.ArrayList;
class Test{
  public static void main(String args[]){
    // System.out.println(compress("aabbbccc",0,1));
    ArrayList<String> list=mazePath(0,0,2,2);
    for(String s:list){
      System.out.println(s);
    }
  }
  public static String compress(String ques,int idx,int count){
    if(idx==ques.length()){
      return ques.charAt(idx-1)+(count>1?count+"":"");
    }
    if(ques.charAt(idx-1)==ques.charAt(idx)){
      return compress(ques,idx+1,count+1);
    }else{
      String ans=ques.charAt(idx-1)+(count>1?count+"":"");
      return ans+compress(ques,idx+1,1);
    }
  }

  public static ArrayList<String> mazePath(int sr,int sc,int er,int ec){
    if(sr==er&&sc==ec){
      ArrayList<String> list=new ArrayList<String>();
      list.add("");
      return list;    
    }
    if(sr>er||sc>ec){
      ArrayList<String> list=new ArrayList<String>();
      return list;    
    }
    ArrayList<String> recAns1=mazePath(sr+1,sc,er,ec);
    ArrayList<String> recAns2=mazePath(sr,sc+1,er,ec);

    ArrayList<String> list=new ArrayList<String>();
    for(String s:recAns1){
      list.add("v"+s);
    }
    for(String s:recAns2){
      list.add("h"+s);
    }
    return list;
  } 

    public static ArrayList<String> mazePathD(int sr,int sc,int er,int ec){
    if(sr==er&&sc==ec){
      ArrayList<String> list=new ArrayList<String>();
      list.add("");
      return list;    
    }
    if(sr>er||sc>ec){
      ArrayList<String> list=new ArrayList<String>();
      return list;    
    }
    ArrayList<String> recAnsV=null,recAnsH=null,recAnsD=null;
    
    if(sr+1<=er)
      recAnsV=mazePathD(sr+1,sc,er,ec);
    if(sc+1<=ec)
      recAnsH=mazePathD(sr,sc+1,er,ec);
    if(sr+1<=er&&sc+1<=ec)
      recAnsD=mazePathD(sr+1,sc+1,er,ec);


    ArrayList<String> list=new ArrayList<String>();
    for(String s:recAnsV){
      list.add("v"+s);
    }
    for(String s:recAnsH){
      list.add("h"+s);
    }
    for(String s:recAnsD){
      list.add("d"+s);
    }
    return list;
  
  }

  public static ArrayList<String> mazePathDM(int sr,int sc,int er,int ec){
    if(sr==er&&sc==ec){
      ArrayList<String> list=new ArrayList<String>();
      list.add("");
      return list;    
    }
    // if(sr>er||sc>ec){
    //   ArrayList<String> list=new ArrayList<String>();
    //   return list;    
    // }
    ArrayList<String> list=new ArrayList<String>();
    for(int i=1;i<=er-sr;i++){
      ArrayList<String>  recAnsV=mazePathD(sr+i,sc,er,ec);
      for(String s:recAnsV){
      list.add("v"+i+s);
    }
    }
    for(int i=1;i<=ec-sc;i++){
      ArrayList<String>  recAnsH=mazePathDM(sr,sc+i,er,ec);
      for(String s:recAnsH){
      list.add("h"+i+s);
    }
    }
    // for(int i=1;i<=Math.max(er,ec);i++){
    //   ArrayList<String>  recAnsD=mazePathDM(sr+i,sc+i,er,ec);
    //   for(String s:recAnsD){
    //   list.add("d"+i+s);
    // }
    // }
    return list;
  }  
}

