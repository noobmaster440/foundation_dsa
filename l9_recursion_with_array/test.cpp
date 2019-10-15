#include <iostream>
#include <vector>
using namespace std;

int jumping(int src,int dest){
    if(src==dest){
        return 1;
    }
    if(src>dest){
        return 0;
    }
    int count=0;
    for(int jump=1;jump<=3;jump++){
        count+=jumping(src+jump,dest);
    }
    return count;
}

vector<int> allIndex(vector<int>& arr,int data,int vidx,int size){
    if(vidx==arr.size()){
        vector<int> ans(size,0);
        return ans;
    }
    vector<int> ans;
    if(arr[vidx]==data){
        ans=allIndex(arr,data,vidx+1,size+1);
        ans[size]=vidx;
    }else{
        ans=allIndex(arr,data,vidx+1,size);
    }
    return ans;
}

int getMax(vector<int>& arr,int vidx){
    if(vidx==arr.size()-1){
        return arr[vidx];
    }
    return max(arr[vidx],getMax(arr,vidx+1));
}

int getLI(vector<int>& arr,int vidx,int data){
    if(vidx==arr.size()){
        return -1;
    }
    int ans=getLI(arr,vidx+1,data);
    if(ans!=-1){
        return ans;
    }else{
        if(arr[vidx]==data){
            return vidx;
        }else{
            return ans;
        }
    }
}

bool find(vector<int>& arr,int vidx,int data){
    if(vidx==arr.size()){
        return false;
    }
    if(arr[vidx]==data){
        return true;
    }
    return find(arr,vidx+1,data);
}

void display(vector<int>& arr,int vidx){
    if(vidx==arr.size()){
        cout<<endl;
        return;
    }
    cout<<arr[vidx]<<" ";
    display(arr,vidx+1);
}

void solve(){
    // vector<int> arr={21,32,4,-3,298,-3,8,2,-3,8,10};
    // display(arr,0);
    // cout<<(boolalpha)<<find(arr,0,4);
    // cout<<getLI(arr,0,-3);
    // cout<<getMax(arr,0);
    // vector<int> ans=allIndex(arr,-3,0,0);
    // display(ans,0);
    cout<<jumping(0,4);

}

int main(int args,char** argn){
    solve();
}