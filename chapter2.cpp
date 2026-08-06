//                                                 #1.1 if/else/elseif
/*#include<iostream>
#include<string>
using namespace std;

int main(){
    int marks;
    string name;
    cout<<"Enter your name:"<<endl;
    cin>>name;
    cout<<"Enter your marks:"<<endl;
    cin>>marks;
    if(marks>90){
        cout<<"Congratulations! "<<name<< " your grade is A+"<<endl;
    }
    else if(80<marks && marks<90){
        cout<<"Welldone! "<<name<< " your grade is A"<<endl;
    }
    else if(70<marks && marks<80){
        cout<<"Very Good! "<<name<< " your grade is B+"<<endl;
    }
    else if(60<marks && marks<70){
        cout<<"Good but can do better " <<name<< " your grade is B"<<endl;
    }
    else{
        cout<< name<<" you need to work hard!!"<<endl;
    }
 

    return 0;
} */
//                                                  #1.2 switch/case
/*#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a random number between 1 to 10:"<<endl;
    cin>>num;
    switch(num)
    {
      case 7:
        cout<<"You have a most common taste:"<<endl;
        break;
        case 2:
        cout<<"You are close to rare:"<<endl;
        break;
        case 4:
        cout<<"You are rare:"<<endl;
        break;
        case 5:
        cout<<"You are close to common:"<<endl;
        break;
        case 8:
        cout<<"You are near to common:"<<endl;
        break;
        case 3:
        cout<<"You are not common but not rare:"<<endl;
        break;
        case 9:
        cout<<"You are not common but not rare:"<<endl;
        break;
        case 10:
        cout<<"You are a exception:"<<endl;
        break;
        case 1:
        cout<<"You are a exception:"<<endl;
        break;
        case 6:
        cout<<"No idea what you are:"<<endl;
        break;

    }
    return 0;
}*/
//                                                    #2.1 for loop
/*#include<iostream>
using namespace std;

int main(){
    int table;
    cout<<"Enter no. whose table you want:"<<endl;
    cin>>table;
    cout<<"The table is: (learn it)"<<endl;
    for(int i=1;i<11;i++){
        cout<<table<< "x" <<i<< "=" <<table*i<<endl; 
    }
    return 0;
}*/
//                                                  #2.2 while loop
/*#include<iostream>
using namespace std;
int main(){
    int i=1;
while(i<=10){
    cout<<i<<endl;
    i++;
}
    return 0;
}*/
//                                               #2.3 do while loop

#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a digit:"<<endl;
    cin>>a;
    int i =0;
    do{
        cout<<"\t"<<*(a-i)+"*"<<*(2*i-1)<<endl;
        i++;

    }
    while(i<=a);

    return 0;
    
}