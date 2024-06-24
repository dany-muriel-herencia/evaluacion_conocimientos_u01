#include<iostream>
using namespace std;
int factorial(int);
void Sumatoria(int);
int main(){
    int n;
    cout<<"Ingrese un numero: "; cin>>n;
    Sumatoria(n);
    return 0;
}

void Sumatoria(int n){
    double serie=0;
    for(int i=1;i<=n;i++){
        serie+=(double(factorial(i))/(2*i));
    }
    cout<<"La sumatoria de la serie es: "<<serie;
}

int factorial(int c){
    int resultado;
    if(c==0){
    c=1;
    }else{
    c=c*factorial(c-1);
    }
    return c; 
}