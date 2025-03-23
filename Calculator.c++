#include<iostream>

using namespace std;

int main(){

    char op;
    double a,b,result;

    cout<<"******************CALCULATOR***************\n";
    cout<<"\n";
    
    cout<<"Enter any oparator:( + - * / ): ";
    cin>>op;

    cout<<"Enter the value of a: ";
    cin>>a;

    cout<<"Enter the value of b: ";
    cin>>b; 

    switch(op){
        case '+' :
            result = a+b;
            cout<<"Result is: "<< result <<'\n';
            break;

        case '-' :
            result = a - b;
            cout<<"Result is: "<< result <<'\n';
            break;

        case '*' :
            result = a * b;
            cout<<"Result is: "<< result <<'\n';
            break;

        case '/' :
            result = a / b;
            cout<<"Result is: "<< result <<'\n';
            break;

        defalut:
            cout<<"Enter any valid operator!\n";
            break;

    }

    cout<<"*******************************************";

}