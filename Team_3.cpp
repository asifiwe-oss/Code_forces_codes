#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int count = 0;
    for(int i = 0; i < n; i++){
         int p,q,r;
         cin >> p >> q >> r;
       if( p + q + r >= 2){
        count ++;
       }
    }
  cout << count <<endl;
    return 0;
}