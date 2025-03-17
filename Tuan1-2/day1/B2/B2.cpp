//  tìm số chẵn/lẽ
#include <bits/stdc++.h>
using namespace std;
int a;

string ktra(int n){
  if(n%2==0){
    return "Even";
  } else{
    return "Odd";
  }
}

int main(){
  ifstream fi("./B2.inp");
  fstream fo("./B2.out",ios::out);

  fi >> a;

  fo<<ktra(a);
}
