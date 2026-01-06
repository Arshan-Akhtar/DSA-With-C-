// int search(vector<int>& arr, int key) {
//     // Your code here

// 	int n = arr.size()-1;

// 	int left = 0, right = n;

// 	while(left<=right){

// 		int mid = left + (right-left)/2;

// 		if(arr[mid]==key){
// 			return mid;
// 		}
// 		// left portion
// 		else if(arr[mid]>=arr[0]){

// 			// left to mid ye sorted hoga, agar key inke beech mein hai, to muje left side jaana hoga
// 			if(key>=arr[left]&&key<arr[mid]){
// 				right = mid-1;
// 			}
// 			else{
// 				left = mid+1;
// 			}

// 		}
// 		else{
            
// 			// mid to right ye sorted hoga, agar wo inke beech mein hai, toh muje right side jaana hai
// 			if(key>arr[mid]&&key<=arr[right]){
// 				left = mid+1;
// 			}
// 			else{
// 				right = mid-1;
// 			}
// 		}

// 		// right portion
// 	}


// 	return -1;
// }
#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& arr, int key) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            return mid;
        }

        // Left portion is sorted
        if (arr[mid] >= arr[left]) {
            // Check if key lies in left portion
            if (key >= arr[left] && key < arr[mid]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        // Right portion is sorted
        else {
            // Check if key lies in right portion
            if (key > arr[mid] && key <= arr[right]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }
    return -1;
}

int main() {
    int n, key;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> key;

    cout << search(arr, key);
    return 0;
}
