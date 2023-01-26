// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <map>
using namespace std;


int count(vector<int>arr,int n ){
map<int,int>m1;
    int sum=0;
  for(int i=0;i<n;i++){
    sum+=arr[i];
    m1[arr[i]]++;
   }
   int avg=sum/n;
   if(m1.find(avg)!=m1.end()){
       return m1[avg];
   }
   return 0;
   
   
}


int main() {
vector<int>arr= {1,3,2,4,5};
int n=arr.size();
  cout<< count(arr,n);
return 0;
}
