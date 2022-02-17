#include <iostream>
using namespace std;

int main(){
    int start = -100;
    int end = 100;
    int sum = 0;
    for (int i = start; i <= end; i++) {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}
