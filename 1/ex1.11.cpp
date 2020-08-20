#include <iostream>
using namespace std;

int main(){
    int v1;
    int v2;
    int start;
    int end;
    cin >> v1;
    cin >> v2;
    if (v1 > v2) {
        start = v2;
        end = v1;
    } else {
        start = v1;
        end = v2;
    }
    int cur = start;
    while (cur <= end) {
        cout << cur << endl;
        cur++;
    }
    return 0;
}
