#include <iostream>
#include <vector>
using namespace std;


float average(vector<int>arr,int n ){
float s=arr[0],l=arr[0],avg=0;
   for(int i=1;i<n;i++){
       if(s>arr[i]){
           s=arr[i];
       }
       if(l<arr[i]){
           l=arr[i];
       }
   }
   return (s+l)/2;
}


int main() {
vector<int>arr={1,3,4,0,5,8,9};
int n=arr.size();
  cout<< average(arr,n);
return 0;
}
