#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

double power(double base, int exponent){
    double result = 1;
    
    for( int i=0;i<exponent;i++){
        result = result*base;
    }
    return result;
}

int main(){
    int indice;
    double base;
    
    cout<<"What is your number? "<<endl;
    cin>> base;
    cout<<"What is your index value? "<<endl;
    cin>> indice;

    double product=power(base,indice);
    cout<<"The result is : "<<product<<endl;

    // int number,exponent;
    // double power;
    // cout<<"Starting calculator"<<endl;
    // cout<<"Enter number"<<endl;
    // cin>> number;
    // cout<<"Enter exponent"<<endl;
    // cin>> exponent;
    // power = pow(number, exponent);
    // cout<< "The result is :"<<power<<endl;

}