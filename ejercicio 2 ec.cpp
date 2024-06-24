#include<iostream>
using namespace std;

bool mcd (int, int); //pónemos algunas funciones


int main(){

bool primos;
int n;  
cout<<"introduce el numero"<<endl;//introduce bel numero que quieres analizar
cin>>n;

for(int m=3;m<n ;m++){ 

primos=mcd(n,m);
if (primos)//usamos el if para saber su estado ,si nes primo entre si o no 
cout << n << " y " << m << " son primos entre si\n";
else 
cout << n << " y " << m << " no son primos entre si\n";
}
}

bool mcd (int n, int m){

bool	primos;
for (int i = 2; i <= n; i++)
if (n % i == 0 && m % i == 0)
primos = false;
return primos;
}
