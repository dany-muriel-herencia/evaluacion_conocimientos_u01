#include<iostream>
using namespace std;
int factorial(int);
void Sumatoria(int);
void primo(int n);
int main(){
    int n;
    cout<<"Ingrese un numero: "; cin>>n;
    Sumatoria(n);
    primo(n);
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
void primo(int n){
int  i;	
    cout << "\nIntroduce un numero: ";
    cin >> n;

    if(n==1)                                             
    {
        cout << "\nNo es primo" << endl;
    }
    else
    {
        i=2;         
        while(n%i!=0) 
        {
            i++;      
        }
        if(i==n)      
            cout << "\nPrimo" << endl;   
        else
            cout << "\nNo es primo" << endl; 
    }
}

