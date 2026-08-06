// printing name 5 times

/*#include<bits/stdc++.h>
using namespace std;

void name(int i,int b,string a){
  if(i>b){
    return;
  }
  cout<<a<<endl;

  name(i+1,b,a);

}

int main(){
  int b;
string a;
  cout<<"Enter you name"<<endl;
  cin>>a;
  cout<<"Enter number of times you want to repeat"<<endl;
  cin>>b;
  
    name(1,b,a);
  
  return 0;
}*/

//  printing till n
/*#include<bits/stdc++.h>
using namespace std;
void num(int i,int a){
  if(i>a){
    return;
  }
  cout<<i<<endl;
  num(i+1,a);
}
int main(){
  int a;
  cout<<"Enter the value of n"<<endl;
  cin>>a;
  num(1,a);

  return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;
void num(int i){
  if(i<1){
    return;
  }
  cout<<i<<endl;
  num(i-1);
}
int main(){
  int a;
  cout<<"Enter the value of n"<<endl;
  cin>>a;
  num(a);

  return 0;
}*/

// backtracking (not used i+1)
/*#include<bits/stdc++.h>
using namespace std;
void num(int i){
  if(i<1){
    return;
  }
   num(i-1);
  cout<<i<<endl;
 
}
int main(){
  int a;
  cout<<"Enter the value of n"<<endl;
  cin>>a;
  num(a);

  return 0;
}*/
// sum of n numbers

/*#include<bits/stdc++.h>
using namespace std;
 void add(int i,int n,int sum){
    if(i>n){
      cout<<"The sum is "<<sum<<endl;
      return ;
    }
    sum=sum+i;
    add(i+1,n,sum);
    
  }

int main(){
  int n,sum=0;
  cout<<"Enter the value of n"<<endl;
  cin>>n;
  add(1,n,sum);
  
  return 0;
}*/

// factorial
/*#include<bits/stdc++.h>
using namespace std;
 void facto(int i,int n,int mul){
    if(i>n){
      cout<<"The factorial is "<<mul<<endl;
      return ;
    }
    mul = mul*i;
    facto(i+1,n,mul);
    
  }
int main(){
  int n,mul=1;
  cout<<"Enter the value of n"<<endl;
  cin>>n;
  facto(1,n,mul);
  
  return 0;
}*/

// reversing an array
/*#include<bits/stdc++.h>
using namespace std;
void rev(int l, int r,int a[]){
  if(l>r){

    return ;
  }
  swap(a[l],a[r]);
  rev(l+1,r-1,a);

}

int main(){
  int n;
  cout<<"Enter the number of value in array"<<endl;
  cin>>n;
  int l,r,a[n];
  cout<<"Enter the data"<<endl;

  for(int i =0;i<n;i++){
    cin>>a[i];
  }
  cout<<"Your arrsy is"<<endl;
  for(int i =0;i<n;i++){
    cout<<a[i]<<" ";
  }

  cout<<"\nReversing of the array "<<endl;
  rev(0,n-1,a);
   cout<<"Reversed array is "<<endl;
    for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
    }
  
  return 0;
}
  */

// palindrome in string
/*#include<bits/stdc++.h>
using namespace std;
void palin(int i,int n , string a){
  if (i>=n/2){
    cout<<"The word is palindrome"<<endl;
    return;
  }
if(a[i]!=a[n-i-1]){
  cout<<"The word is not palindrome"<<endl;
  return;
}

palin(i+1,n,a);
}

int main(){
  string a;
  int n;
  cout<<"Enter the word"<<endl;
  cin>>a;
  n=a.length();
palin(0,n,a);
  return 0;
}*/

// fabonacci
#include<bits/stdc++.h>
using namespace std;
int f(int n){
  if(n<=1){
    return n;
  }
  return f(n-1) + f(n-2);

}
int main(){
  cout<<"The fabonacci is "<<f(7)<<endl;
  return 0;
}
 
