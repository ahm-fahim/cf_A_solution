#include <iostream>
#include <cmath>

using namespace std;

int findPositionOfOne(int n) {
    // Find the largest power of 2 less than or equal to n
    int powerOfTwo = pow(2, floor(log2(n)));
    return powerOfTwo;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cout << findPositionOfOne(n) << endl;
    }

    return 0;
}
