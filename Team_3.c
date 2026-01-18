#include <stdio.h>
int main(){
  int n;
  int count = 0;
  scanf("%d",&n);
  for(int i = 0; i < n; i++){
         int q,r,s;
      scanf("%d %d %d",&q,&r,&s);    
      if(q + r + s >= 2){
      count ++;  
      }
        }
        printf("%d",count);
  return 0;
}