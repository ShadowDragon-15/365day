#include <bits/stdc++.h>
using namespace std;

int chia_mang(int s, vector<int> &a){
  int total=0;
  for(int i: a){
    total+=i;
    if(total==(s/2)){
      cout<<i;
      break;
    }
  }
}

int main(){
  ifstream fi("./CHIAMANG.INP");
  fstream fo("./CHIAMANG.OUT",ios::out);
  int n,s;
  fi>>n;
  vector<int> arr;
  for(int i=0;i<=n;i++){
    fi>>i;
    arr.push_back(i);
  }
  for(int i: arr){
    s+=i;
  }
  cout<<chia_mang(s,arr);
}