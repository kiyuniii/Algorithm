#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int i;
    for(i=1;i<=num;i++) {
        for(int j=0;j<i;j++)
            cout << '*';
        cout << endl;
    }

    return 0;
}