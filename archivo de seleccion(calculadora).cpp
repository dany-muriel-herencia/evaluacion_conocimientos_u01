#include<iostream>
using namespace std;
int main(){
    int c,op1,op2;
    char op;
    cout<<"ingrese el primer operando: ";cin>>op1;
    cout<<endl;
    cout<<"ingrese el segundo operando: ";cin>>op2;
    cout<<endl;
    cout<<"ingrese la operacion: ";cin>>op;
    cout<<endl;
    switch (op)
    {
    case '+':
            c=op1+op2;  
        break;
    
    case '-':
        c=op1-op2;
        break;
    
    case '*':
        c=op1*op2;
        break;
    case '/':
        c=op1/op2;
        break;
    }
    cout<<"el resultado de la opracion es : "<<c;
    return 0;
}