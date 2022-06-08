#include <bits/stdc++.h>
using namespace std;

int main() {
  int fct=1, n;
  cin>>n;
  while(n!=1){
      fct=fct*n;
      n--;
  }
  cout<<fct<<endl;
  
    return 0;
}