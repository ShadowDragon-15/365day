//  Tong 2 so
#include <bits/stdc++.h>
using namespace std;
int a,b;

int ktra(int a, int b){
  return a+b;
}
int main(){
  ifstream fi("./B1.inp");
  fstream fo("./B1.out",ios::out);

  fi>> a >> b;
  fo<<ktra(a,b);
  
}