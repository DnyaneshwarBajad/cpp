#include<iostream>
#include<vector>
using namespace std;


int findmissingnum(vector<int>& arr){
 int n = arr.size()+1;
int totalsum =(n*(n+1))/2;
int sum =0;
 for(int i =0;i<arr.size();i++){
    sum +=arr[i];
 }
 return totalsum-sum;
}

int main(){
    vector<int> nums ={1,2,3,5,6};
    int missingnum =findmissingnum(nums);
    cout<< missingnum;
}