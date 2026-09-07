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

                /*
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
  */

                //hashing in strings

/* #include<bits/stdc++.h>
using namespace std;

int main(){
  string k;
  cout<<"Enter any string"<<endl;
  cin>>k;
  int hash[26]={0};
  for(int i=0;i<k.size();i++){
    hash[k[i]-'a']++; // take the ASCII  value  'a'=97
  }
 char c;
 cout<< "Enter the char"<<endl;
 cin>> c;
 cout<<"The number of "<<c<< " is "<<hash[c-'a']<<endl;

  return 0;
}
*/

                       //hashing via using map


/*#include<bits/stdc++.h>
using namespace std;

int main(){
  cout<<"Enter the value of n"<<endl;
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];

  }
  map<int,int> mpp;
  for(int i=0;i<n;i++){
    mpp[arr[i]]++;

  }
  for(auto it:mpp){
    cout<<it.first<<"->"<<it.second<<endl;

  }
  cout<<"Enter number of elements you want to see hashing of"<<endl;
  int q;
  cin>>q;
  cout<<"Enter the number one by one"<<endl;
  while(q--){
    int number;
    cin>>number;
    cout<<"Total: "<<mpp[number]<<endl;
  }
  return 0;
}*/

                        // Hashing in strings


/*#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cout<<"Enter the string"<<endl;
  cin>>s;
  map<char,int> mpp;
  for(int i=0;i<s.size();i++){
    mpp[s[i]]++;

  }
  cout<<"Enter number of char you want to count"<<endl;
  int q;
  cin>>q;
  cout<<"Enter the char one by one"<<endl;
  while(q--){
    char ch;
    cin>>ch;
    cout<<"Total: "<<mpp[ch]<<endl;
  }
  return 0;
}
  */

                           // using unordered map

  #include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cout<<"Enter the string"<<endl;
  cin>>s;
  unordered_map<char,int> mpp;

  for(int i=0;i<s.size();i++){
    mpp[s[i]]++;

  }   // for checking unordering
  for(auto it:mpp){
    cout<<it.first<<"->"<<it.second<<endl;
  }
  cout<<"Enter number of char you want to count"<<endl;
  int q;
  cin>>q;
  cout<<"Enter the char one by one"<<endl;
  while(q--){
    char ch;
    cin>>ch;
    cout<<"Total: "<<mpp[ch]<<endl;
  }
  return 0;
}