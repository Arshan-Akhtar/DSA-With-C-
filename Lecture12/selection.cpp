// class Solution {
// public:
//   vector<int> selectionSort(vector<int>& arr) {
//     // Write your code here
    
// 	int n = arr.size();

// 	// 1 task, smallest number hoga usko uski first position pe laana
// 	// 0 to n-1 traverse, smallest number 0 index pe laana
//     // 1 to n-1 traverser, smallest number 1 index pe laana hai
// 	// 2 to n-2 traverse, smallest number 2 index pe laana hai

//     for(int i=0;i<n;i++){

// 	   int index = i;



// 	for(int j=i+1;j<n;j++){
// 		if(arr[j]<arr[index]){
// 			index = j;
// 		}
// 	}



// 	swap(arr[index],arr[i]); 
// 	// just swap the number with first index of current

// 	}


// 	return arr;




//   }
// };

#include<iostream>
using namespace std;
  
  int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;

    
    int arr[n];
    cout<<"The given array is ";
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        int index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[index])
            index =j;
        }
        swap(arr[i],arr[index]);
    }

    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
  }
    

