#include <bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    int n = nums.size();
    int start = 0, end = n - 1;

    // First occurrence
    int index1 = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target) {
            index1 = mid;
            end = mid - 1;   // move left
        } else if (nums[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    // Last occurrence
    int index2 = -1;
    start = 0;
    end = n - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target) {
            index2 = mid;
            start = mid + 1;   // move right
        } else if (nums[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return {index1, index2};
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    vector<int> result = searchRange(nums, target);

    cout << "First and Last Occurrence: ";
    cout << result[0] << " " << result[1] << endl;

    return 0;
}
