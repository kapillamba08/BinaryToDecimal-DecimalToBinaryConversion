#include <iostream>
#include <cmath>
using namespace std;

int  DecimalToBinary(int n){
    int binaryno=0;
    int i=0;
    while(n>0){
        int bit = n%2;
        binaryno = bit * pow(10,i++)+binaryno;
        n = n/2;
    }
    return binaryno;
}

int main(){
    int n;
    cout<<"Enter decimal value you want to convert in binary: ";
    cin>>n;

    int inbinary = DecimalToBinary(n);
    cout<<"Decimal to  Binary conversion is: "<<inbinary<<endl;
    return 0;
}