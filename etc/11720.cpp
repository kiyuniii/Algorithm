#include <iostream>
using namespace std;

int main(){
    int num;
    int data;
    cin >> num >> data;

    int denom = 1;
    int sum = 0;

    for(int i=num; i=1; i--){
        for(int j=0; j<(i-2); j++)
            denom *= 10;
        int quote = data / denom;
        sum += quote;
        data -= quote;
    }

    cout << num << endl << data << endl;
    cout << sum;

    return 0;
}