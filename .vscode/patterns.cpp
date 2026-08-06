                             // patterns
 //1                            
#include<bits/stdc++.h>
using namespace std;
void pattern1(){
      int l;
    cout<<"Enter the no. of lines"<<endl;
    cin>>l;
    
for(int i=0;i<l;i++){
    for(int j=0;j<l;j++){

    
    cout<<"*";
    }
    cout<<"\n";
}
}
void pattern2(){
      int l;
    cout<<"Enter the no. of lines"<<endl;
    cin>>l;
    
for(int i=0;i<l;i++){
    for(int j=0;j<=i;j++){

    
    cout<<"*";
    }
    cout<<"\n";
}
}
void pattern3(){
      int l;
    cout<<"Enter the no. of lines"<<endl;
    cin>>l;
    
for(int i=1;i<=l;i++){
    for(int j=1;j<=i;j++){

    
    cout<<j;
    }
    cout<<"\n";
}
}

void pattern4(){
      int l;
    cout<<"Enter the no. of lines"<<endl;
    cin>>l;
  
for(int i=1;i<=l;i++){
    for(int j=1;j<=i;j++){

    
    cout<<i;
    }
    cout<<"\n";
}
}
void pattern5(){
      int l;
    cout<<"Enter the no. of lines"<<endl;
    cin>>l;
   

for(int i=1;i<=l;i++){
    for(int j=0;j<l-i+1;j++){

    
    cout<<"*";
    }
    cout<<"\n";
}
}
void pattern6(){
      int l;
    cout<<"Enter the no. of lines"<<endl;
    cin>>l;
     
for(int i=1;i<=l;i++){
    for(int j=1;j<=l-i+1;j++){

    
    cout<<j;
    }
    cout<<"\n";
}
}
void pattern7(){
      int l;
    cout<<"Enter the no. of lines"<<endl;
    cin>>l;
    
    for(int i=0;i<l;i++){
        for(int j=0;j<l-i-1;j++){
            cout<<" ";
        }
        for(int k=0;k<(2*(i+1)-1);k++){
            cout<<"*";
        }
        for(int j=0;j<l-i-1;j++){
            cout<<" ";
        }
        cout<<"\n";

    }
    
}
void pattern8(){
      int l;
    cout<<"Enter the no. of lines"<<endl;
    cin>>l;
   
    for(int i=0;i<l;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=0;k<(2*(l+1)-2*(i+1)-1);k++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<"\n";

    }
}

void pattern9_1(){
      int l;
    cout<<"Enter the no. of lines"<<endl;
    cin>>l;
   
    for(int i=0;i<l;i++){
        for(int j=0;j<l-i-1;j++){
            cout<<" ";
        }
        for(int k=0;k<(2*(i+1)-1);k++){
            cout<<"*";
        }
        for(int j=0;j<l-i-1;j++){
            cout<<" ";
        }
        cout<<"\n";

    }
     for(int i=0;i<l;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=0;k<(2*(l+1)-2*(i+1)-1);k++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<"\n";

    }
}
void pattern9_2(){
      int l;
    cout<<"Enter the no. of lines"<<endl;
    cin>>l;
   
    for(int i=0;i<l-1;i++){
        for(int j=0;j<l-i-1;j++){
            cout<<" ";
        }
        for(int k=0;k<(2*(i+1)-1);k++){
            cout<<"*";
        }
        for(int j=0;j<l-i-1;j++){
            cout<<" ";
        }
        cout<<"\n";

    }
     for(int i=0;i<l;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=0;k<(2*(l+1)-2*(i+1)-1);k++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<"\n";

    }
}

void pattern10(){
      int l;
    cout<<"Enter the no. of lines"<<endl;
    cin>>l;
   
    for(int i=0;i<l;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";

        }
        cout<<"\n";
    }
    for(int i=0;i<l;i++){
        for(int j=0;j<l-i-1;j++){
            cout<<"*";
        }
        cout<<"\n";
    }


}

void pattern11(){
      int l;
    cout<<"Enter the no. of lines"<<endl;
    cin>>l;
    int start=1;
    for(int i=0;i<l;i++){
        if(i%2==0){
             start=1;
        }
        else{
            start=0;
        }
        for(int j=0;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;

    }
}

void pattern12(){
     int l;
    cout<<"Enter the no. of lines"<<endl;
    cin>>l;
    for(int i=1;i<=l;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int k=1;k<=2*(l-i);k++){
            cout<<" ";
        }

         for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        
    } 
}
void pattern13(){
     int l;
     int a=1;
    cout<<"Enter the no. of lines"<<endl;
    cin>>l;
    for(int i=1;i<=l;i++){
        for(int j=1;j<=i;j++){
            cout<<a;
            cout<<" ";
            a+=1;
        }
        cout<<endl;
    }
}

void pattern14(){
    int l;
    cout<<"Enter the no. of lines"<<endl;
    cin>>l;
    for(int i=0;i<l;i++){
        for(char j='A';j<='A'+i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}

void pattern15(){
    int l;
    cout<<"Enter the no. of lines"<<endl;
    cin>>l;
    for(int i=0;i<l;i++){
        for(char j='A';j<='A'+l-i-1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}
void pattern16(){
     int l;
    cout<<"Enter the no. of lines"<<endl;
    cin>>l;
    for(int i=0;i<l;i++){
        for(char j='A';j<='A'+i;j++){
            for(char k='A';k<=j;k++){
                cout<<j<<" ";
            }
        }
        cout<<endl;

    }
}
void pattern17(){
     int l;
    cout<<"Enter the no. of lines"<<endl;
    cin>>l;
    for(int i=0;i<l;i++){
        char a='A'+i;
        for(int j=0;j<=i;j++){
            cout<<a<<" ";
        }
        cout<<endl;
    }

}

void pattern18(){
     int l;
    cout<<"Enter the no. of lines"<<endl;
    cin>>l;
    for(int i=0;i<l;i++){
        
        for (int j=0;j<l-i;j++){
            cout<<" ";
        }
        for(char j='A';j<'A'+i;j++){
            cout<<j;
        }
        cout<<char('A'+i);
        for(char j='A'+i-1;j>='A';j--){
            cout<<j;
           
        }
        cout<<endl;

        }
       
    }

void pattern19(){
     int l;
    cout<<"Enter the no. of lines"<<endl;
    cin>>l;
    for(int i=0;i<=l;i++){
        for(char j='A'+l-i;j<='A'+l-1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}

void pattern20(){
     int l;
    cout<<"Enter the no. of lines"<<endl;
    cin>>l;
    for(int i=0;i<l;i++){
        for(int j=0;j<l-i;j++){
            cout<<"*";
        }
        for(int j=0;j<2*i;j++){
            cout<<" ";
        }
        for(int j=0;j<l-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
     for(int i=0;i<l;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<2*(l-i-1);j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}

void pattern21(){
     int l;
    cout<<"Enter the no. of lines"<<endl;
    cin>>l;
     for(int i=0;i<l-1;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<2*(l-i-1);j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

     for(int i=0;i<l;i++){
        for(int j=0;j<l-i;j++){
            cout<<"*";
        }
        for(int j=0;j<2*i;j++){
            cout<<" ";
        }
        for(int j=0;j<l-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}

void pattern22(){
      int l;
    cout<<"Enter the no. of lines"<<endl;
    cin>>l;
    for(int i=0;i<l;i++){
         for(int j=0;j<l;j++){

        if(i==0 || j==0 || i==l-1 || j==l-1){
            cout<<"* ";
        }
        else{
            cout<<"  ";
        }
   
        
    }
    cout<<endl;

    }

}

 

int main(){
   

   //pattern1();
   // pattern2();
   //pattern3();
   //pattern4();
   //pattern5();
   //pattern6();
   //pattern7();
   //pattern8();
   //pattern9_1();
   //pattern9_2();
   //pattern10();
   //pattern11();
   //pattern12();
   //pattern13();
   //pattern14();
   //pattern15();
   //pattern16();
   //pattern17();
   //pattern18();
   //pattern19();
   //pattern20();
   //pattern21();
   //pattern22();

    return 0;
}



