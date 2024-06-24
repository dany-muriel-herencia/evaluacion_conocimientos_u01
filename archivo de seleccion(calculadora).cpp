#include<iostream>
using namespace std;
int main(){
    int d,e,f,i,c,op1,op2;
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
    case 'a':
        i=1;
        c=1;
        f=1;
        while(i<=op1){
        c=c*i;
        i++;
        }
        while(i<=op2){
            f=f*i;
            i++;
        }
        cout<<"la factorial de "<<op2<<" es: "<<f;
        break;
    }
    
    cout<<"el resultado de la opracion es : "<<c;
    return 0;

}