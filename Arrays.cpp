#include<iostream>
using namespace std;
int main ()
{
    //array-is a collection of elements grouped into one "variable".
    //int num_1=0;//holding numbers.
    //int num_2=0;//could take a while to store a lot of data.
    //int num_3=0;
    //int num_4=0;
    //int num_5=0;
    int numbers [50]={};//it will print 50 int's with value of 0.
    int numbers_2[6]={22,23,24,25,26,56};//6 elements with   initial values.
    int numbers_3[7]={4,8};//all this is gonna be that the first two values have been initialised and has value but the rest would be 0.
    int numbersarray[]={45,12,4};//assumes from the initialised amount.
    string words []={"booty","clappers"};
    //arrays are zero based.
    string booklist [4]={
        "cant",//0
        "hurt",//1
        "me",//2
        "anymore"//3
    };
    
    cout<<"this is the third book:"+booklist[0]<<endl;//even if you modify array it would show the same as pre.. denote.
    //booklist [0]= "booty";
    //cout<<"this is the third book:"+booklist[0]<<endl;//now it will work.
    //int ages[6]={22,45,56,78,30};//examples on how, 
    //cout<<ages[4]<<endl;//we can update,
    //ages[4]=ages[4]+1;//and denote array, 
    //cout<<ages[4]<<endl;//variables.
    //cout<<"Size of the Array is:"<<sizeof(int)*8<<"bytes"<<endl;//should display 32 bytes.
    return 0 ;
}