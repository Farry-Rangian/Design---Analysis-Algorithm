#include <stdio.h>
#include <cmath>

int main()
{
  int t,u,v;
   u = 60;
   v = 24;
    
    while(v != 0){
        t = u;
        u = v;
        v = t % v;
    }
    
   printf("fpb = %d ", abs(u));
   
   return 0;
}



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