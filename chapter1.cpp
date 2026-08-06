//                                             #1  first program
/*#include<iostream>
int main(){
int sum=36;
    std::cout<<"Hello shivam"<<sum;
    std::cout<<"\nlearning C++";
    return 0;
}
    */
//this is my first program

//                                          #2  testing all data types
/*#include<iostream>
using namespace std;
int main(){
 int a=10;
 float b=2.4;
 char c='s';
 bool f=true;
 double d=3.567439202;
 cout<<"Here the value of a is" <<a<<
  "\nThe value of b is "<<b<<
  "\nThe value of c is "<<c<<
  "\nThe value of d is " <<d<<
  "\nThe value of f is "<<f;
 
 return 0;
} */

//                                           #3  global and local variable
//global
/*#include<iostream>
using namespace std;
int glo=8;
int main(){
cout<<glo;
return 0;
} */
// local
/*#include<iostream>
using namespace std;
int main(){
    int glo=8;
cout<<glo;
return 0;
} */

//                                              #4 basic input output
/*#include<iostream>
using namespace std;
int main(){
    int num1 , num2 ;
    
    cout<<"Enter a number num1:";
    cin>>num1;
    cout<<"Enter a number num2:";
    cin>>num2;
    cout<<"The multiplication of two numbers is:"<<num1*num2<<endl;
    return 0;
} */
//                                           #5 operators (we take eg of comparison & logical op)
//comparison op
/*#include<iostream>
using namespace std;
int main(){
    int a=10,b=8;
    cout<<"the value of a!=b is:"<<(a!=b)<<endl;
    cout<<"the value of a==b is:"<<(a==b)<<endl;
    cout<<"the value of a>b is:"<<(a>b)<<endl;
    cout<<"the value of a<b is:"<<(a<b)<<endl;

    return 0;
}*/
// logical op
/*#include<iostream>
using namespace std;
int main(){
    int a=10,b=8;
    cout<<"the value of && for a==b and a>b is:"<<((a==b)&&(a>b))<<endl;
    cout<<"the value of || for a==b or a>b is:"<<((a==b)||(a>b))<<endl;
    cout<<"the value of !(a<b)is:"<<(!(a<b))<<endl;

    return 0;
} */
//                                                #6 using sizeof
/*#include<iostream>
using namespace std;
int main(){
    float a=3.6f;
    long double b=9.56l;
    cout<<"The size of 3.6 is:"<<sizeof(3.6)<<endl;
    cout<<"The size of 3.6f is:"<<sizeof(3.6f)<<endl;
    cout<<"The size of 3.6F is:"<<sizeof(3.6F)<<endl;
    cout<<"The size of 3.6l is:"<<sizeof(3.6l)<<endl;
    cout<<"The size of 3.6L is:"<<sizeof(3.6L)<<endl;
    return 0;
}*/

//                                               #7 reference variable
/*#include<iostream>
using namespace std;
int main(){
    int a=9;
    int &b=a;
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}*/
//                                                  #8Typecasting
/*#include<iostream>
using namespace std;
int main(){
    int a=5;
    float b=7.8;
    cout<<"The value of a in float is:"<<float(a)<<endl;
    cout<<"The value of a in float is:"<<(float)a<<endl;
    cout<<"The value of b in int is:"<<int(b)<<endl;
    cout<<"The value of b in int is:"<<(int)b<<endl;
    return 0;
}*/
//                                                  #9 constant
/*#include<iostream>
using namespace std;
const int a=5;
int main(){
    cout<<"value of a is:"<<a<<endl;
    a=8;
    cout<<"value of a is:"<<a<<endl;
    return 0;
}*/ // ERROR
//                                            #10 Manipulator
/*#include<iostream>
#include<iomanip>
using namespace std;
int a=4,b=50,c=256;
int main(){
    cout<<"The value of a:"<<a<<endl;
    cout<<"The value of b:"<<b<<endl;
    cout<<"The value of c:"<<c<<endl;
    cout<<"The value of a with setw is:"<<setw(3)<<a<<endl;
    cout<<"The value of b with setw is:"<<setw(3)<<b<<endl;
    cout<<"The value of c with setw is:"<<setw(3)<<c<<endl;
    return 0;
}*/
//                ************************************************************************* 
 //                                        **BONUS CODE**
 #include<iostream>
 #include<string>
 using namespace std;
 
 int main(){
    string name;
    cout<<"Enter your name:"<<endl;
    cin>>name;
    cout<<"Hello "<<name<<".Hope you are good";
    
    return 0;
 }






    
 
