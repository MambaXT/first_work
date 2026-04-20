#  include<iostream>
using namespace std;
int main()
{
    cout<< boolalpha;// output boolean value
    bool res = false;
    int y = 5;
    res = 7 || (y=0);
    cout << "Result of (7|| (y=0)):"<<res<<endl;
    cout<< "value of y :" <<y<<endl;
    int a,b,c;
    a=b=c=0;
    res = ++a =++b && ++c; // since the condiotion ++a is laready excuted ,further isnot excuted so the answer is 0 , o for b and c 
    cout<<'\n'
    <<"res="<<res
    <<",a="<<a
    <<",b="<<b
    <<",c="<<c<<endl;
    a=b=c=0;
    res = ++a && ++b || ++c ;
    cout<<  "res="<<res
    <<",a = "<<a
    <<",b= "<<b
    <<",c= "<<c<<endl;
    return 0;
}