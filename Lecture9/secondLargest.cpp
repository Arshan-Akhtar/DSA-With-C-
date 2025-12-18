// Link: https://www.geeksforgeeks.org/problems/second-largest3735/1

// class Solution {
//   public:
//     int getSecondLargest(vector<int> &arr) {
//         // code here
//         int n = arr.size();
//         //  find the largest element
        
//         int largest = arr[0];
//         for(int i=1;i<n;i++){
//             if(arr[i]>largest){
//                 largest = arr[i];
//             }
//         }
        
//         int second_largest = -1;
        
//         for(int i=0;i<n;i++){
//             if(arr[i]==largest){
//                 continue;
//             }
//             else if(arr[i]>second_largest){
//                 second_largest = arr[i];
//             }
//         }
        
//         return second_largest;
        
//     }
// };

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();

        // find the largest element
        int largest = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] > largest) {
                largest = arr[i];
            }
        }

        int second_largest = -1;

        for (int i = 0; i < n; i++) {
            if (arr[i] == largest) {
                continue;
            }
            else if (arr[i] > second_largest) {
                second_largest = arr[i];
            }
        }

        return second_largest;
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = obj.getSecondLargest(arr);

    if (ans == -1)
        cout << "No second largest element exists!" << endl;
    else
        cout << "Second largest element: " << ans << endl;

    return 0;
}
