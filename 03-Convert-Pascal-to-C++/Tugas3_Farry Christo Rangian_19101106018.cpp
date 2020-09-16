#include <stdio.h>
#include <cmath>

 int fpb_iteratif(int u, int v){
     
    int t;
    while(v != 0){
        t = u;
        u = v;
        v = t % v;
    }
     return abs(u);
}
    
 int main(){
     
     printf("fpb = %d",fpb_iteratif(24,60));
   return 0;
}
