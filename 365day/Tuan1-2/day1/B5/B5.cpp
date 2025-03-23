// dãy foculacci
#include <bits/stdc++.h>
using namespace std;
long long n;

long fibonlacci(long long n){
  long long f1=1,f2=1,fn=0;
  cout<<f1<<" "<<f2<<" ";
  for(long long i=3;i<=n;i++){
    fn=f1+f2;
    f1=f2;
    f2=fn;
    cout<<fn<<" ";
  }
}
int main(){
  ifstream fi("./B5.inp");
  fstream fo("./B5.out",ios::out);
  fi>> n;
  cout<<fibonlacci(n);
}