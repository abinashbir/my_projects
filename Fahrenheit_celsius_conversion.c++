// In this program we will convert farnhiet to celcius and viceversa.

#include<iostream>

using namespace std;

int main(){

    int option;
    double celsius,farenheit,result;

    cout << "Choose conversion:\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    
    cin>>option;

    switch(option){

        case 1:
            cout<<"Enter the value of farenhiet: ";
            cin>>farenheit;
            result = (farenheit-32)* 5/9;
            cout<<result<<" degree celsius";
            break;

        case 2:
            cout<<"Enter the value of celsius: ";
            cin>>celsius;
            result= (celsius*9/5)+32;
            cout<<result<<" degree fahrenhiet";
            break;
    }     
}