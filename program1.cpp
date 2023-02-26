#include <iostream>
using namespace std;

bool reverseString(string ss,int i,int j){
    if(i>j) return true;

    if(ss[i] != ss[j]) return false;

    else return reverseString(ss,i+1,j-1);
}

int main(){
  string arr = "deaem";

  bool find=reverseString(arr,0,arr.length()-1);

  if(find) std::cout<<"YES";
  else std::cout<<"NO";
}