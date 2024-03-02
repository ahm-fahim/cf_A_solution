#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find lexicographically smallest string and count of paths
pair<string, long long> findLexicographicallySmallest(int n, const string& s1, const string& s2) {
    // Initialize DP arrays
    vector<vector<long long> > paths(2, vector<long long>(n, 0));
    vector<vector<string> > smallestString(2, vector<string>(n, ""));

    // Base cases
    paths[0][0] = 1;
    paths[1][0] = 0;
    smallestString[0][0] = "0";
    smallestString[1][0] = "1";

    // Fill DP arrays
    for (int j = 1; j < n; ++j) {
        // If s1[j] == '0', we can only come from above
        if (s1[j] == '0') {
            paths[0][j] = paths[0][j - 1];
            smallestString[0][j] = smallestString[0][j - 1] + "0";
        } else {
            paths[0][j] = paths[1][j - 1];
            smallestString[0][j] = smallestString[1][j - 1] + "0";
        }

        // If s2[j] == '0', we can only come from left
        if (s2[j] == '0') {
            paths[1][j] = paths[1][j - 1];
            smallestString[1][j] = smallestString[1][j - 1] + "1";
        } else {
            paths[1][j] = paths[0][j - 1];
            smallestString[1][j] = smallestString[0][j - 1] + "1";
        }
    }

    // Return the lexicographically smallest string and the count of paths
    if (smallestString[0][n - 1] < smallestString[1][n - 1]) {
        return {smallestString[0][n - 1], paths[0][n - 1]};
    } else if (smallestString[0][n - 1] > smallestString[1][n - 1]) {
        return {smallestString[1][n - 1], paths[1][n - 1]};
    } else {
        return {smallestString[0][n - 1], paths[0][n - 1] + paths[1][n - 1]};
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        auto result = findLexicographicallySmallest(n, s1, s2);
        cout << result.first << endl;
        cout << result.second << endl;
    }

    return 0;
}
