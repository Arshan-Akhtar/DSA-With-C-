#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  vector<int> insertionSort(vector<int>& arr) {
    // Write your code here

	int n = arr.size();
    
	for(int i=1;i<n;i++){
     
		for(int j=i;j>0;j--){
			if(arr[j]<arr[j-1]){
				swap(arr[j],arr[j-1]);
			}
			else{
				break;
			}


			// code


		}
    
	}

	//  worst case

	// i=1, j = 1 operation
	// i =2, j= 2 operation
	// i = 3, j= 3 operation
	//  i = n-1, j = n-1 operation

//    best case

	// i=1, j = 1 operation
	// i =2, j= 1 operation
	// i = 3, j= 1 operation
	//  i = n-1, j = 1 operation


	return arr;


	



  }
};
// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     vector<int> insertionSort(vector<int>& arr) {
//         int n = arr.size();

//         for (int i = 1; i < n; i++) {
//             int key = arr[i];
//             int j = i - 1;

//             // Shift elements greater than key to one position ahead
//             while (j >= 0 && arr[j] > key) {
//                 arr[j + 1] = arr[j];
//                 j--;
//             }

//             // Place key at its correct position
//             arr[j + 1] = key;
//         }

//         return arr;
//     }
// };
