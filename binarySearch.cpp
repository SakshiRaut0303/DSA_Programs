#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>&arr){
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr = {179,124,120,99,87,74,44,22,11,-4};
    int n = arr.size();
    print(arr);
    int hi = n-1 , lo = 0;
    int target = 11;
    while(lo <= hi){
        int mid = (lo+hi)/2;
        cout<<mid<<" ";
        if(arr[mid] > target) lo = mid+1;
        else if (arr[mid] < target) hi = mid -1;
        else return mid;
    }
    print(arr);
}   