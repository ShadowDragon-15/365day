#include <bits/stdc++.h>
using namespace std;
int a;
string isprime(int n){
  if(n<2){return "NO";}
  if(n==2){return "YES";}
  if(n%2==0){return "NO";}
  for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
      return "NO";
    }
  }
  return "YES";
}
int main(){
  ifstream fi("./B1.inp");
  fstream fo("./B1.out",ios::out);
  fi>>a;
  fo<<isprime(a);


}