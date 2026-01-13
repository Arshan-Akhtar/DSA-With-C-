
// bool allocateBook(int maxPages, vector<int> &arr, int k){
    
// 	// count: number of student, pages: abhi tak usko kitne pages mile hai
// 	int count = 1 , pages = arr[0];

// 	for(int i=1;i<arr.size();i++){
// 		pages+=arr[i];
// 		if(pages>maxPages){
// 			count++;
// 			pages = arr[i];
// 		}
// 	}

// 	return count <= k;
// }


// int findPages(vector<int> &arr, int k) {
//     // Your code here

// 	int n = arr.size();

// 	if(k>n){
// 		return -1;
// 	}

// 	// array ka jo maximum hoga
// 	int start = 0;
// 	for(int i=0;i<n;i++){
// 		start = max(start,arr[i]);
// 	}


       
// 	 while(start){
          
// 		  if(allocateBook(start,arr,k)){
// 			return start;
// 		  }
          
// 		  start++;
// 	 }

	

// 	return -1;
// }

#include <bits/stdc++.h>
using namespace std;

// Helper function to check if allocation is possible
bool allocateBook(int maxPages, vector<int> &arr, int k) {
    int students = 1;
    int pages = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (pages + arr[i] <= maxPages) {
            pages += arr[i];
        } else {
            students++;
            pages = arr[i];
        }
    }
    return students <= k;
}

// Main function
int findPages(vector<int> &arr, int k) {
    int n = arr.size();

    if (k > n) return -1;

    int start = *max_element(arr.begin(), arr.end());
    int end = accumulate(arr.begin(), arr.end(), 0);
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (allocateBook(mid, arr, k)) {
            ans = mid;
            end = mid - 1;   // try to minimize pages
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

// Driver code
int main() {
    vector<int> arr = {12, 34, 67, 90};
    int k = 2;

    cout << "Minimum pages = " << findPages(arr, k) << endl;
    return 0;
}
