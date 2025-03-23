#include <bits/stdc++.h>
using namespace std;

int total(int n){
  if(n<=0){return 0;}
  return n+total(n-1);
}
int main(){
  cout<<total(3);
}