// Program C++ untuk mencari FPB
// FPB dicari menggunakan algoritma Euclidean
#include<iostream>
#include<conio.h>
#include <bits/stdc++.h> 
using namespace std; 

// Program fungsi untuk penggunaan algoritma Euclidean
int gcdExtended(int a, int b, int *x, int *y) 
{ 
	// Base Algorithm 
	if (a == 0) 
	{ 
		*x = 0; 
		*y = 1; 
		return b; 
	} 

	int x1, y1; // Untuk menyimpan hasil panggilan rekursif
	int gcd = gcdExtended(b%a, a, &x1, &y1); 

	// Perbarui x dan y menggunakan hasil 
	// panggilan rekursif
	*x = y1 - (b/a) * x1; 
	*y = x1; 

	return gcd; 
} 

// Program inti 
int main() 
{ 
	int x, y, a,b;
	cout<< "Menghitung FPB menggunakan Agoritma Euclidean\n";
	cout<< "Masukkan bilangan pertama :";
	cin>>a;
	cout<< "Masukkan bilangan Kedua :";
	cin>>b; 
	int g = gcdExtended(a, b, &x, &y);
	cout << "GCD(" << a << ", " << b 
		<< ") = " << g << endl; 
	return 0; 
} 


