// tinh giai thua: giai thừa là ticwsh từ 1 đến số đó

#include <bits/stdc++.h>
using namespace std;
int n;

int giai_thua(int n){
  int total=1;
  for(int i=1;i<=n;i++){
    total*=i;
  }
  return total;
}
int main(){
  ifstream fi("./B4.inp");
  fstream fo("./B4.out",ios::out);
  fi>>n;
  fo<<giai_thua(n);
}
