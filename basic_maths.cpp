// counting the number of digits in a number

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int count,a;
  count = 0;
  cout<<"Enter the number"<<endl;
  cin>>a;
  while(a>0){
    int digits = a%10;
    count++;
    a=a/10;
  }
  cout<<"The number of digits are "<<count<<endl;

  return 0;
}*/

// reversing a number

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int count,a,p;
  count = 0;
  cout<<"Enter the number"<<endl;
  cin>>a;
  while(a>0){
    int digits = a%10;
    count++;
  cout<<digits;
    a=a/10;
  }
  
  return 0;
}*/

            //OR

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int count,a,rev=0;
  cout<<"Enter the number"<<endl;
  cin>>a;
  while(a>0){
    int digits = a%10;
    rev = rev*10 + digits;
    a=a/10;
  }
  cout<<"The reversed number is "<<rev<<endl;
  
  return 0;
}
*/

// Palindrome number

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b, rev=0;
  cout<<"Enter the number"<<endl;
  cin>>a;
  b=a;
  while(a>0){
    int digit = a%10;
    rev = rev*10 +digit;
    a=a/10;
  }  
  if(rev==b){
    cout<<b<<" is a palindrome"<<endl;
  }
  else{
     cout<<b<<" is not a palindrome"<<endl;
  }

  return 0;
} */

// Armstrong number
/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c,sum;
  sum=0;
  cout<<"Enter the number"<<endl;
  cin>>a;
  c=a;
  while(a>0){
    b=a%10;
    sum = sum + (b*b*b);
    a=a/10;
  }

  if (c==sum){
    cout<<sum<<" is armstrong number "<<endl;
  }
  else{
    cout<<c<<"is not a armstrong number"<<endl;
  }
  return 0; 
} */

// divisors of a number
/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,count =0;
  cout<<"Enter the number:"<<endl;
  cin>>a;
  for(int i=1;i<=a;i++){
    if (a%i==0){
      cout<<i<<" ";
      count++;
    }
    if(count==2){
      cout<<"\n"<<a<<" is prime";
    }
  }
    cout<<"\nThe number of divisors are "<<count<<endl;
  return 0;
}*/

// prime number
/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,count =0;
  cout<<"Enter the number:"<<endl;
  cin>>a;
  for(int i=1;i<=a;i++){
    if (a%i==0){
      count++;
    }
  }
    if(count==2){
      cout<<"\n"<<a<<" is prime";
    }
    else{
      cout<<"\n"<<a<<" is not prime";
    }
  return 0;
}
  */
 // HCF
 #include<bits/stdc++.h>
 using namespace std;
 
 int main(){
  int a,b,c;
  cout<<"Enter two number"<<endl;
  cin>>a>>b;
  if (a>b){
    for(int i=1;i<=a;i++){
      if(a%i==0 && b%i==0){
        c =i;
      }
    }
    cout<<"HCF is"<<c<<endl;
  }

  else{
    for(int i=1;i<=b;i++){
      if(a%i==0 && b%i==0){
        c =i;
      }
    }
    cout<<"HCF is "<<c<<endl;
  }
  return 0;
 }


