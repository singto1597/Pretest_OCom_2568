#include <iostream>
using namespace std;

int main(){
    long long l , r;
    cin >> l >> r;
    long long result = 0;
    long long mod = 1000000007;
    for (int n = l; n <= r; n ++){
        int x = 0;
        int size = 0;
        for (int i = 1; i <= n; i++){
            x += i;
            size += x;
        }
        result += size;
        // result %= mod;
    }
    result = (result * 2568) % mod;
    cout << result << endl;
}