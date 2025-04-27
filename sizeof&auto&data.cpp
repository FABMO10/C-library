#include<iostream>
using namespace std;
int main ()
{
    //sizeof
    //cout << "size of int :"<<sizeof(int)<<endl;//it will show us 4 because integar can only hold 4 bytes.
    //int bob = 23;//here bob is also holding 4 bytes of memory.
    //cout << "size of int :"<<sizeof(bob)<<endl;
    //cout << "size of long :"<<sizeof(long)<<endl;
    //cout << "size of short :"<<sizeof(short)<<endl;
    //cout << "size of double :"<<sizeof(double)<<endl;
    //cout << "size of boolean :"<<sizeof(bool)<<endl;

    //auto
    //var mahir = 43;//you can make anytype of datatype ex:javascript.
    //auto mahir_2 = 56;
    //cout << mahir_2 << endl;                   //for C++ 
    //cout << "size of it : "<<sizeof(mahir_2) <<endl;//as mahir_2 is int datatype cause mahir_2 = 56.
    //auto mahir_2 = true;//Trying boolean value.
    //cout << mahir_2 << endl;
    //cout << "size of it : "<<sizeof(mahir_2) <<endl;

    //typedef
    //unsigned long long data = 5453463246;//very big number.
    //cout<< data <<endl;
    typedef unsigned long long verybig;//you can declare a datatype 
    verybig size_2=4352523455;//and then you can easily declare variable with that datatype.
    verybig size_3=879853496;
    cout<<size_2<<endl;
    cout<<size_3<<endl;
    return 0;
}