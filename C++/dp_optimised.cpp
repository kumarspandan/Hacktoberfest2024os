#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;

    int prev2 = 0, prev1 = 1, curr;

    for (int i = 2; i <= n; i++) {
        curr = prev1 + prev2;  // Current Fibonacci number
        prev2 = prev1;         // Update prev2 to the previous prev1
        prev1 = curr;          // Update prev1 to the current Fibonacci
    }

    return curr;
}

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}
