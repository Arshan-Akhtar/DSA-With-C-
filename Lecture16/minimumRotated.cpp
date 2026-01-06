// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         //code here

//         //                 mid
// 		// 10, 20, 30, 40, 50 ,60, 70, 1, 2 , 3
// 		//                     left           right

// 		int n = nums.size();
          
// 		//   array is already sorted
// 		if(nums[0]<=nums[n-1]){
// 			return nums[0];
// 		}  
// 		int left = 0, right = n-1;
// 		int minElement;

// 		while(left<=right){

// 			int mid = left+(right-left)/2;

// 			//  left portion , move to right portion
// 			if(nums[mid]>=nums[0]){
//               left = mid+1;
// 			}
// 			else{
//                 right = mid-1;
// 				minElement = nums[mid];
// 			}

// 			// right portion, move to left portion by storing the mid element
// 		}


// 		return minElement;
		
//     }
// };

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();

        // If array is already sorted
        if (nums[0] <= nums[n - 1]) {
            return nums[0];
        }

        int left = 0, right = n - 1;
        int minElement = INT_MAX;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // If mid element is greater than or equal to first element,
            // minimum lies in right half
            if (nums[mid] >= nums[0]) {
                left = mid + 1;
            }
            // Otherwise, minimum lies in left half including mid
            else {
                minElement = nums[mid];
                right = mid - 1;
            }
        }
        return minElement;
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    cout << obj.findMin(nums);

    return 0;
}
