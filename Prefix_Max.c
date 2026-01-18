#include<stdio.h>
int main(){
int t;
scanf("%d",&t);

for(int i = 0; i < t; i++){
    int n;
    scanf("%d",&n);
    int a[n];

    for(int o = 0; o < n; o++){
        scanf("%d",&a[o]);
     } 

     int max = a[0];
     for(int o = 0; o < n; o++){
       if(a[o] > max){
            max = a[o];
             }
     }
       int Sum = max*n;
       printf("%d\n",Sum);
    }    
        
    return 0;
}