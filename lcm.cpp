// Copyright (c) 2019 Izza Khalid All rights reserved.

#include <iostream>
using namespace std;

int main() {
    int num1, num2, greater;

    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;

    if (num1 > num2) {
        greater = num1;
}   else {
        greater = num2;
}

    while (1) {
        if ((greater % num1 == 0) && (greater % num2 == 0)) {
            cout << "The L.C.M is: " << greater << endl;
            break;
        }
        ++greater;
    }
    return 0;
}
