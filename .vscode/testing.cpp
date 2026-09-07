#include<bits/stdc++.h>
using namespace std;

int main(){
  int low,high;
  
  cin << low;
  cin<< high;
     int sum = low;
        for(int i=low+1;i<=high;i++){
            
             sum = sum+i;
        }
        cout<<sum<<endl;
  return 0;
}