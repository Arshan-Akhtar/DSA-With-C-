
// // Link: https://www.geeksforgeeks.org/problems/rotate-array-clockwise/1

// class Solution {
//   public:
//     void rotateclockwise(vector<int>& arr, int k) {
//         // code here
//          while(k){

//         int n = arr.size();
        
//         // store the last number in temp variable
//         int temp = arr[n-1];
        
//         // n-2 to 0, shift them one position to right
        
//         for(int i=n-2;i>=0;i--){
//             arr[i+1] = arr[i];
//         }
        
//         // oindex wale pe temp wale ko daal do
        
//         arr[0] = temp;
//         k--;
//         }

//     }
// };


// // next solution

// class Solution {
//   public:
//     void rotateclockwise(vector<int>& arr, int k) {
//         // code here
//         int n = arr.size();
//         vector<int>nums(n);
//         // created new array
        
        
//         // now iterate over the arr (array)
//         for(int i=0;i<n;i++){
//             nums[(i+k)%n] = arr[i];
//         }
        
        
//         // copy new array into older array
        
//         for(int i=0;i<n;i++){
//             arr[i] = nums[i];
//         }
        
        
        
//     }
// };
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotateclockwise(vector<int>& arr, int k) {
        while (k--) {
            int n = arr.size();
            int temp = arr[n - 1];

            for (int i = n - 2; i >= 0; i--) {
                arr[i + 1] = arr[i];
            }
            arr[0] = temp;
        }
    }
};

int main() {
    Solution obj;

    int n, k;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter k (number of rotations): ";
    cin >> k;

    obj.rotateclockwise(arr, k);

    cout << "Array after rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
