#include <iostream>
using namespace std;

int mySqrt(int x) {
    // Handle base cases
    if (x <= 1) {
        return x;
    }

    int start = 1, end = x;
    int ans = 0;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        // Exact square root found
        if (mid == x / mid) {
            return mid;
        }
        // Move right
        else if (mid < x / mid) {
            ans = mid;          // store possible answer
            start = mid + 1;
        }
        // Move left
        else {
            end = mid - 1;
        }
    }

    return ans;  // floor value of sqrt(x)
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    cout << "Square root (floor value) is: " << mySqrt(x) << endl;

    return 0;
}
