#include<iostream>
#include<vector>
using namespace std;
void print (vector <int>& arr){
    for(int ele: arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr = {5,4,3,6,2,1};
    int n = arr.size();
    print(arr);
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        
    }
    print(arr);
}

// bubble sort (optimized)

// int main(){
//     vector<int> arr = {5,4,3,6,2,1};
//     int n = arr.size();
//     print(arr);
//     for(int j = 0; j<n-1; j++){
//         swap = 0;
//         for(int i = 0; i<n-1-i; j++){
//             swap(arr[j],arr[j+1]);
//             swap++;   
//         }
//         if(swap == 0) break;
//     }
//     print(arr);
// }