#include <iostream>
using namespace std;
int main() {
    int n,maxx = 0, curr = 0;;
    cin >> n;
    int  a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i-1]) {
            curr += a[i] - a[i-1];
            maxx = max(maxx, curr);
        } else {
            curr = 0;
        }
    }

    cout << maxx << endl;
    return 0;
}

//6
//100 300 500 200 400 450
//5
//100 200 300 400 600
//4
//0 100 0 101
