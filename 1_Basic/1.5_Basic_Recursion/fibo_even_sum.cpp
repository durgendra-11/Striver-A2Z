#include <iostream>
using namespace std;

int fib(int n ) {

    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;
    int sum=0;
    cout << "Sum of even terms: ";
    for (int i = 0; i < n; i++) {
        if(fib(i)%2==0){
            sum+=fib(i);
        }
    }
    cout << sum<<endl;

    return 0;
}
