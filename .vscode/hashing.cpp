            // brutforce

/*#include<bits/stdc++.h>
using namespace std;

int main(){
 int arr[8] ={1,1,1,3,4,4,3,3};
 int a,count=0;
 cout<<"Enter the number you want to count"<<endl;
 cin>>a;
 
 for(int i =0;i<sizeof(arr);i++){
  if(arr[i]==a){
    count++;
  }
 }
 cout<<"The total no. of "<<a<< " is "<< count;
  return 0;
} */

                // *Hashing* (my way)

#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b;
cout<<"Enter the number of element you want to insert: "<<endl;
cin>>a;

int arr[a];
cout<<"Enter the elements"<<endl;
for(int i=0;i<a;i++){

  cin>>arr[i];
}

cout<<"your array is: "<<endl;

for(int i=0;i<a;i++){

  cout<<arr[i]<<" ";
}
int vrr[10] = {0};

for(int i=0;i<a;i++){
  
vrr[arr[i]]+=1;

}

cout<<"\n Search??"<<endl;
cin>>b;
 
cout<<b<<" is repeated "<<vrr[b]<<" times"<<endl;

  return 0;
}


