#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  vector<int> bubbleSort(vector<int>& arr) {
    // Write your code here

	int n = arr.size();
    
	for(int i=0;i<n-1;i++){
        
		bool swapped = false;

		for(int j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				swapped = true;
				swap(arr[j],arr[j+1]);
			}
		}


		if(!swapped){
			return arr;
		}

	}
	return arr;

  }
};