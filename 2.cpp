#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    char op;
    cout<<"enter operator: +,-,*,/: ";
    cin>>op;
    cout<<"enter two operands: ";
    cin>>a>>b;
    switch(op){
        case '+':
        cout<<a+b<<endl;
        break;
        case '-':
        cout<<a-b<<endl;
        break;
        case '*':
        cout<<a*b<<endl;
        break;
        case '/':
        cout<<a/b<<endl;
        break;
        default :
        cout<<"error operator"<<endl;
        
    }
}
