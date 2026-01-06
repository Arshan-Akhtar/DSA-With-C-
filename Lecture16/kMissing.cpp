// int findKthPositive(vector<int>& arr, int k) {
//     // Your code here

// 	int missingNumber = k;

// 	for(int i=0;i<arr.size();i++){

// 		if(arr[i]>missingNumber){
// 			return missingNumber;
// 		}
// 		else{
// 			missingNumber++;
// 		}
// 	}


// 	return missingNumber;
// }
#include <bits/stdc++.h>
using namespace std;

int findKthPositive(vector<int>& arr, int k) {
    int missingNumber = k;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > missingNumber) {
            return missingNumber;
        } else {
            missingNumber++;
        }
    }
    return missingNumber;
}

int main() {
    int n, k;
    cin >> n;              // size of array
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];     // array elements
    }

    cin >> k;              // kth missing number

    cout << findKthPositive(arr, k);
    return 0;
}
