
                     // Largest element 
                     // bruteforce
/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  int arr[6] = {1,5,3,7,9,3};
   n = arr[0];

  for(int i=1;i<6;i++){
   if(arr[i]>n){
      n = arr[i];
   }
  }

  cout<<"Largest element :"<< n<<endl;
  return 0;
}
*/
                        // Second Largest

 /* #include<bits/stdc++.h>
using namespace std;

int main(){
  int largest;
  int arr[6] = {1,5,3,7,9,3};
   largest = arr[0];

  for(int i=1;i<6;i++){
   if(arr[i]>largest){
      largest = arr[i];
   }
  }

  int second_largest = 0;  // can be -1 also
  for(int i=0;i<6;i++){
    if(arr[i]>second_largest && arr[i]!=largest){
      second_largest = arr[i];
    }
  }

  cout<<"Second largest: "<< second_largest <<endl;
  return 0;
}*/

                          // optimal
/* #include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {1,9,7,7,9,3};
  int largest = arr[0];
  int second_largest = -1;

  for(int i=0;i<6;i++){
    if(arr[i]>largest){
      second_largest = largest;
      largest = arr[i];
    }
    else if(arr[i]<largest && arr[i]>second_largest){
      second_largest = arr[i];
    }

  }
  cout<<" Largest: "<<largest<<endl;
  cout<<"Second largest: "<< second_largest <<endl;
  return 0;
} */

                                 // smallest

/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {1,9,7,7,9,3};
  int smallest = arr[0];
  int second_smallest = INT_MAX;    // let the second smallest be max integer i.e 10^6

  for(int i=0;i<6;i++){
    if(arr[i]<smallest){
      second_smallest = smallest;
      smallest = arr[i];
    }
    else if(arr[i]>smallest && arr[i]<second_smallest){
      second_smallest = arr[i];
    }

  }
  cout<<" Smallest: "<<smallest<<endl;
  cout<<"Second Smallest: "<< second_smallest <<endl;
  return 0;
}
*/

                         // checking if sorted
                         // bruteforce
/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[11]={1,4,3,5,7,8,2,2,54,6,4};
  int count = 0;
  for(int i=0;i<10;i++){
    if(arr[i+1]>arr[i] || arr[i+1] == arr[i]){
      count++;
    }

  }
  if(count == 10){
    cout<<"Array is Sorted"<<endl;
  }
  else{
    cout<<"Array is not Sorted"<<endl;
  }
  

  return 0;
}
*/

                             // Duplicate in sorted
                      // bruteforce
/* #include<bits/stdc++.h>
 using namespace std;
 
 int main(){
    // inserting elements in set (only unique elements are allowed)
  int arr[9] = {1,2,2,2,3,4,5,6,6};
  set<int> st;
  for(int i =0; i<9;i++){
    st.insert(arr[i]);
  }
   // moving the element from set to arr

  int index = 0;
  for(auto it:st){  //Go through every element of st, one by one, and temporarily store the current element in it."
    arr[index] = it;
    index++;
  }

  for(int i=0;i<9;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
 }      */               
                          
                       //optimal
/* #include<bits/stdc++.h>
 using namespace std;
 
 int main(){
  
  int arr[9] = {1,2,2,2,3,4,5,6,6};
 
  int i=0;
  for(int j=0;j<9;j++){
    if(arr[j]!=arr[i]){
      arr[i+1]=arr[j];
      i++;
    }
  }


cout<<"Total Unique:"<< i+1<<endl;
  for(int i=0;i<9;i++){
    
    cout<<arr[i]<<" ";
  }
  return 0;
 }      */      

                             // Array -2

                            // Left rotate the array by one place
    
/*#include<bits/stdc++.h>
using namespace std;

int main(){
   int arr[6]={2,3,4,5,6,7};
 int first = arr[0];
 
 for(int i=0; i<5;i++){
  arr[i] = arr[i+1];

 }

 arr[5] = first;

 cout<< "Rotated array: "<<endl;

 for(int i=0;i<6;i++){
  cout<<arr[i]<<" ";

 }
  return 0;
}*/


                                // Left rotate the array by d place
                         // bruteforce
/* #include<bits/stdc++.h>
using namespace std;

int main(){
   int arr[6]={2,3,4,5,6,7};

   int i =0;
   int d;
   cout<<"Enter No. of Rotation"<<endl;
   cin>> d;
   while(i<d){
 int first = arr[0];
 
 for(int i=0; i<5;i++){
  arr[i] = arr[i+1];

 }

 arr[5] = first;

 i++;
}

 cout<< "Rotated array: "<<endl;

 for(int i=0;i<6;i++){
  cout<<arr[i]<<" ";

 }
  return 0;   
}         */

                      //Method 2

/* #include<bits/stdc++.h>
 using namespace std;
 
 int main(){
  int arr[6] = {1,2,3,4,5,6};
  int D;
  cout<<"Enter Rotation"<<endl;
  cin>> D;
  int d = D%6;
 vector<int> temp(d);
  for(int i=0;i<d;i++){
    temp[i]=arr[i];
  }
  for(int i = d;i<6;i++){
    arr[i-d]= arr[i];
  }
  for(int i =6-d; i<6;i++){
    arr[i] = temp[i-(6-d)];
  }

   cout<< "Rotated array: "<<endl;

 for(int i=0;i<6;i++){
  cout<<arr[i]<<" ";

 }
  return 0;
 }         */

                                //optimal
/* #include<bits/stdc++.h>
using namespace std;

int main(){
   int arr[7] = {1,2,3,4,5,6,7};
    int D;
  cout<<"Enter Rotation"<<endl;
  cin>> D;
  int d = D%7;

   reverse(arr,arr +( 7- d) );
   reverse(arr+(7-d),arr + 7);   // reverse() takes a range(pointer) where the second argument is exclusive.(not included)
   reverse(arr,arr+7);

  cout<< "Rotated array: "<<endl;

 for(int i=0;i<7;i++){
  cout<<arr[i]<<" ";

 }

  return 0;
} */


                            // Move all zero all the last
           // method 1                 
/* #include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  int j= 0;
  cout<<"Enter Array Size:"<<endl;
  cin>> n;

  int arr[n],temp[n];
  cout<<"Enter Array Elements:"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
         //working
for(int i = 0;i<n;i++){
  if(arr[i]!=0){
    temp[j] = arr[i];
    j++;}
}

while(j<n){
  temp[j]=0;
  j++;
}

cout<<"Resultant Array:"<<endl;
 for(int i=0;i<n;i++){
    cout<<temp[i]<<" ";
  }



  return 0;
}          */             

            // optimal
 /*#include<bits/stdc++.h>
 using namespace std;
 
 int main(){
  int arr[9] = {2,0,3,0,4,5,0,0,6};
 int j=-1;
 for(int i=0;i<9;i++){
  if(arr[i]==0){
    j = i;
    break;
  }
 }

 for(int i=j+1;i<9;i++){
  if(arr[i]!=0){
    swap(arr[j],arr[i]);
    j++;
  }
 }

  cout<<"Resultant Array:"<<endl;
 for(int i=0;i<9;i++){
    cout<<arr[i]<<" ";
  }

  return 0;
 }    */      

                       // Linear Search
   
 /*#include<bits/stdc++.h>
 using namespace std;
 
 int main(){
  int k;
  int arr[7] = {2,7,4,7,6,7,1};
  cout<<"Enter no. you want to search"<<endl;
  cin>> k;

  for(int i=0;i<7;i++){
    if(arr[i]==k){
      cout<<"Number found at "<<i+1<<endl;
      
      // break;     //(for the first time)
    }
  }
  return 0;
 }    */

                                            // Union of two sorted array

   /*#include<bits/stdc++.h>
   using namespace std;
   
   int main(){
    int arr1[6] = {1,1,2,3,4,5};
    int arr2[5] = {2,3,4,5,6};

    set<int> st1;
     
    for(int i=0;i<6;i++){
      st1.insert(arr1[i]);
    }

     for(int i=0;i<5;i++){
      st1.insert(arr2[i]);
    }

   
    int uni[st1.size()];
    int i = 0;

    cout << "Union of the arrays:" << endl;

    for(auto it : st1){
        uni[i] = it;
        i++;
    }

    for(int i = 0; i < st1.size(); i++){
        cout << uni[i] << " ";
    }
  
    return 0;
   }  */
  
   