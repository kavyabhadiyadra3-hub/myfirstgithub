#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long sum = 0;
    for(int i=0; i<n; i++){
        sum += (long long)(n - i - 1) * i + 1; // The formula from [6]
    }
    cout << sum << endl;
    return 0;
}
