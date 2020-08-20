#include <iostream>
using namespace std;

int main(){
    int v1, v2;
    int start, end;
    cin >> v1;
    cin >> v2;
    if (v1 > v2) {
        start = v2;
        end = v1;
    } else {
        start = v1;
        end = v2;
    }
    for (int i = start; i <= end; i++)
        cout << i << endl;
    return 0;
}