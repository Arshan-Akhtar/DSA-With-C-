// Link: https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1

// User function Template for C++

// class Solution {
//   public:
//     void rotate(vector<int> &arr) {
//         // code here
//         int n = arr.size();
        
//         // store the last number in temp variable
//         int temp = arr[n-1];
        
//         // n-2 to 0, shift them one position to right
        
//         for(int i=n-2;i>=0;i--){
//             arr[i+1] = arr[i];
//         }
        
//         // oindex wale pe temp wale ko daal do
        
//         arr[0] = temp;
//     }
// };

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int> &arr) {

        int n = arr.size();
        
        // store the last number in temp variable
        int temp = arr[n - 1];
        
        // shift right
        for (int i = n - 2; i >= 0; i--) {
            arr[i + 1] = arr[i];
        }
        
        arr[0] = temp;
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

    obj.rotate(arr);

    cout << "Array after 1 rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
