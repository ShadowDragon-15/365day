#include <bits/stdc++.h>
using namespace std;
void tong_doan_con(int sl,int gh,vector<int> &a){
  int day_max=INT_MAX;
  int chi_so_i=0;
  for(int i=0;i<sl;i++){
    int Tong=0;
    for(int j=i;j<sl;j++){
      Tong+=a[j];
      if(Tong==gh && day_max>(j-i+1)){
        day_max=j-i+1;
        chi_so_i=i+1;
      }
    }
  }
  cout<<day_max<<" "<<chi_so_i;
}

int main(){
  freopen("./B2.inp","r",stdin);
  freopen("./B2.out","w",stdout);
  int N,K;cin>>N>>K;
  vector<int> arr(N);
  for(int i=0;i<=N;i++) cin>>arr[i];
  tong_doan_con(N,K,arr);
}