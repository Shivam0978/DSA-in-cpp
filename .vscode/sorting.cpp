                               //Selection Sort

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout<<"Enter n:"<<endl;
  cin>>n;
  int arr[n];
  cout<<"Enter array"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];

  }

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";

  }
    //sorting
  for(int i=0;i<=n-2;i++){

    int min=i;
    for(int j=i;j<=n-1;j++){
      if(arr[j]<arr[min]){
        min=j;
      }
    

    }
      swap(arr[min],arr[i]);

    //  int temp;
    //   temp=arr[min];
    //   arr[min]=arr[i];
    //   arr[i]=temp;

  }
  cout<<"\n Sorted array:"<<endl;

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
*/

                           //Selection sort (from last to first)

/*
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout<<"Enter n:"<<endl;
  cin>>n;
  int arr[n];
  cout<<"Enter array"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];

  }

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";

  }
    //sorting
  for(int i=n-1;i>0;i--){

    int max=i;
    for(int j=i;j>=0;j--){
      if(arr[max]<arr[j]){
        max=j;
      }
    }
      swap(arr[max],arr[i]);
  }

  cout<<"\n Sorted array:"<<endl;

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
   return 0;
}

*/

                              //Bubble Sort

 /*#include<bits/stdc++.h>
 using namespace std;
 
 int main(){
  
  int n;
  cout<<"Enter n:"<<endl;
  cin>>n;
  int arr[n];
  cout<<"Enter array"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];

  }

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";

  }
      // sorting
  for(int i= n-1;i>=1;i--){

    for(int j=0;j<=i-1;j++){
      if(arr[j+1]<arr[j]){
       // swap(arr[j+1],arr[j])
       int temp = arr[j+1];
       arr[j+1]=arr[j];
       arr[j]= temp;

      }
    }
  }

  cout<<"\nSorted Array: "<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

  return 0;
 }      */                       

                               // Insertion Sort
/*

#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int n;
  cout<<"Enter n:"<<endl;
  cin>>n;
  int arr[n];
  cout<<"Enter array"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];

  }

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";

  }

   // sorting
   for(int i=0;i<n-1;i++){

    int j =i;
    while( j>0 && arr[j-1]>arr[j]){
      swap(arr[j-1],arr[j]);
      j--;
    }

   }

   cout<<"\n Sorted Array:"<<endl;
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";

  }
  
  return 0;
}
  */

                                      //Merge Sort
/*
#include<bits/stdc++.h>
using namespace std;

void Merge(vector<int> &arr,int low,int mid,int high){
 vector<int> temp;
  int left = low;
  int right = mid+1;
  while(left<=mid && right<=high){
  
    if(arr[left]<=arr[right]){
      temp.push_back(arr[left]);
      left++;
    }
    else{
      temp.push_back(arr[right]);
      right++;
    }

  }
  while(left<=mid){
    temp.push_back(arr[left]);
    left++;
  }
  while(right<=high){
     temp.push_back(arr[right]);
      right++;

  }

  for(int i=low;i<=high;i++){
    arr[i]=temp[i-low];
  }
}

void MergeSort(vector<int> &arr,int low, int high){
 

 if(low >= high) return;
 int mid = (low+high)/2;
 MergeSort(arr,low,mid);
 MergeSort(arr,mid+1,high);
 Merge(arr,low,mid,high);
}
int main(){
    int arr[7];

    cout << "Enter array: ";

    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
    }
  }

  for(int i=0;i<7;i++){
    cout<<arr[i]<<" ";

  }

  
 MergeSort( arr, 0, n-1);
  
cout<< "Sorted array:"<<endl;

for(int i=0;i<7;i++){
  cout<<arr[i]<<" "<<endl;
}

  return 0;
}*/

                        // 2nd Method

/* #include <bits/stdc++.h>
using namespace std;

void Merge(int arr[], int low, int mid, int high) {
    int temp[7];

    int left = low;
    int right = mid + 1;
    int k = 0;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp[k] = arr[left];
            left++;
        }
        else {
            temp[k] = arr[right];
            right++;
        }
        k++;
    }

    while (left <= mid) {
        temp[k] = arr[left];
        left++;
        k++;
    }

    while (right <= high) {
        temp[k] = arr[right];
        right++;
        k++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void MergeSort(int arr[], int low, int high) {

    if (low >= high)
        return;

    int mid = (low + high) / 2;

    MergeSort(arr, low, mid);
    MergeSort(arr, mid + 1, high);

    Merge(arr, low, mid, high);
}

int main() {

    int arr[7];

    cout << "Enter array: ";

    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
    }

    MergeSort(arr, 0, 6);

    cout << "Sorted array: ";

    for (int i = 0; i < 7; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
*/

                                    // Quick Sort
/* #include<bits/stdc++.h>
using namespace std;
 int n;

int partition(int arr[],int low, int high){

  int pivot = arr[low];
  int i = low;
  int j = high;
  while (i<j){
    while(arr[i]<=pivot && i<=high-1){

      i++;
    }
    while(arr[j]>pivot && j>=low+1){
      j--;
    }
    if(i<j){
      swap(arr[i],arr[j]);
    }
  };
  swap(arr[low],arr[j]);

  return j;
}

void quicksort(int arr[],int low,int high){

if(low<high){
  int index = partition(arr,low,high);
  quicksort(arr,low,index-1);
  quicksort(arr,index+1,high);

}

}

int main(){
  
cout<<"Enter the value of n"<<endl;
cin>> n;

int arr[n];

cout<<"Enter elements"<<endl;
for(int i=0;i<n;i++){
  cin>> arr[i];
}

cout<<"Your array"<<endl;
for(int i=0;i<n;i++){
  cout<< arr[i]<<" ";
}


quicksort( arr,0,n-1);

cout<<"\nSorted Array: "<<endl;

for(int i=0;i<n;i++){
  cout<< arr[i]<<" ";
}


  return 0;
}
*/

                               // method 2 (vector)

#include<bits/stdc++.h>
using namespace std;
 int n;

int partition(vector<int> &arr,int low, int high){

  int pivot = arr[low];
  int i = low;
  int j = high;
  while (i<j){
    while(arr[i]<=pivot && i<=high-1){

      i++;
    }
    while(arr[j]>pivot && j>=low+1){
      j--;
    }
    if(i<j){
      swap(arr[i],arr[j]);
    }
  };
  swap(arr[low],arr[j]);

  return j;
}

void quicksort(vector<int> &arr,int low,int high){

if(low<high){
  int index = partition(arr,low,high);
  quicksort(arr,low,index-1);
  quicksort(arr,index+1,high);

}

}


int main(){
  
cout<<"Enter the value of n"<<endl;
cin>> n;

vector<int> arr(n);

cout<<"Enter elements"<<endl;
for(int i=0;i<n;i++){
  cin>> arr[i];
}

cout<<"Your array"<<endl;
for(int i=0;i<n;i++){
  cout<< arr[i]<<" ";
}


quicksort( arr,0,n-1);

cout<<"\nSorted Array: "<<endl;

for(int i=0;i<n;i++){
  cout<< arr[i]<<" ";
}


  return 0;
}
