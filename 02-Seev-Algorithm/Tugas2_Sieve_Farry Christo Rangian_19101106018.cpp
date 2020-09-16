/******************************************************************************

Problem : Mencari Deret Bilangan Prima tidak lebih dari input(n) menggunakan Algoritma Sieve
Input   : Bilangan bulat positif n > 1
Output  : Array L dari semua bilangan prima kurang dari atau sama dengan n

*******************************************************************************/
#include <stdio.h>
#include <cmath>

int main()
{
    int n=100; // input bilangan integer lebih dari satu misalkan 100
    int i,j,p;
    int A[n];
    
    for(int p = 2; p <= n; p++){
        A[p]=p;
    }
    
    for(int p = 2; p <= floor(sqrt(n)); p++){ //akar n dibulatkan ke bawah menggunakan floor funtion
        if (A[p] != 0){ // p belum dieliminasi sebelumnya
            j = p*p;
            
            while (j <= n){
                A[j] = 0; //tandai elemen yang dihilangkan
                j = j+p ;
            }
        }
    }
    // salin elemen yang tersisa dari A ke array L dari bilangan prima
    i = 0;
    int L[n];
    printf("Program Menentukan Bilangan Prima\n");
    printf("Rentang yang diinginkan 1 sampai dengan %d\n",n);
    for(p = 2; p <= n ; p++ ){

        if(A[p] != 0){
            L[i] = A[p]; 
	        printf("%d ",L[i]);
            i = i + 1;
        }
    }
    
    
    return 0;
}
