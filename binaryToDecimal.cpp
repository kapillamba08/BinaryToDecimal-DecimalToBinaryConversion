#include <iostream>
#include <cmath>
using namespace std;

int BinaryToDecimal(int n){
    int decimal=0;
    int i=0;
    while(n){
        int bit = n %10;
        decimal = bit * pow(2, i++) + decimal;
        n = n/10;
    }
    return decimal;
}

int main(){
    int n;
    cout<<"Enter binary value you want to convert in decimal: ";
    cin>>n;

    int indecimal = BinaryToDecimal(n);
    cout<<"Binary to Decimal conversion is: "<<indecimal<<endl;
    return 0;
}