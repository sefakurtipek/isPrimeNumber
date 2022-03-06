#include <iostream>

using namespace std;

bool isPrimeNum(int num)
{
    bool isPrimeFlag = true;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            isPrimeFlag = false;
            break;
        }
    }
    if (isPrimeFlag)
        cout << num << " is prime number" << endl;
    else
        cout << num << " is not prime number" << endl;
    return isPrimeFlag;
}

int main()
{
    int num;
    cout << "Give me a number: "; 
    cin >> num;

    isPrimeNum(num);
    return 0;
}