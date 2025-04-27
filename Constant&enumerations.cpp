#include<iostream>
using namespace std;
int main ()
{
  //Constant variable that cant change.
  //int high_score =56;
  //high_score = 45;
  //cout<<high_score<<endl;
  //const int high_score =56;//wont work because const cant be changed.
  //high_score = 45;
  //cout<<high_score<<endl;
  //const int highscore= 367843;//its so that we can identify errors easily
  //cout<<highscore<<endl;
   
  //enumerations-you can create datatype with predefined value.
  enum names{
    angona,//this will be placed as 0th.
    mahir,//this will be placed as 1st.
    someone,//this will be placed as 2nd.
  };
  //names highone = 45;//cant do that 
  names name1=angona;//can do this.
  names name2=mahir;
  names name3=someone;
  cout<<name1<<endl;
  cout<<name2<<endl;
  //again
  enum colors{
    red,
    blue,
    yellow=55,//assigning a number and it will increament after ever line it reads
    green,
  };
  colors first=red;
  colors second=blue;
  colors third=green;//i did a thing 
  cout<<first<<endl;
  cout<<second<<endl;
  cout<<third<<endl; 
    return 0 ;
}