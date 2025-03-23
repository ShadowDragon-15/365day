// tínt
#include <bits/stdc++.h>
using namespace std;
int n;

string ktra(int n){
  if(n<2){return "No";}
  if(n==2){return "YES";}
  if (n%2==0){return "NO";}
  for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
      return "NO";
    }
  }
  return "YES";
}

int main(){
  ifstream fi("./B3.inp");
  fstream fo("./B3.out",ios::out);
  fi>> n;
  fo<< ktra(n);
  return 0;
} 