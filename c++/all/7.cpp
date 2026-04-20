#include <iostream>
using namespace std;
int gVar1;//Global variable
int gVar2=2;//explicit initialization
int main(){
    char ch('A');
    cout<<"Value of gVar1:"<<gVar1<<endl;
    cout<<"Value of gVAr2:"<<gVar2<<endl;
    cout<<"Character in ch:"<<ch<<endl;
    int sum, number=3;
    sum=number+5;
    cout<<"Value of sum:"<<sum<<endl;
    return 0;


}