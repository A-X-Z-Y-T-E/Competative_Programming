#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n - 1);
    long long x = static_cast<long long>(n) * (n + 1) / 2; // Sum of first n natural numbers

    for (int i = 0; i < n - 1; ++i) {
        cin >> arr[i];
        x -= arr[i];
    }

    cout << x << endl;
    return 0;
}
