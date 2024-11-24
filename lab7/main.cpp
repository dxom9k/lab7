#include <iostream>
#include<Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int MAX_LENGTH = 100;
    char number[MAX_LENGTH];
    cout << "¬вед≥ть число (заверш≥ть крапкою): ";

    int length = 0;
    char ch;
    while (cin >> ch && ch != '.' && length < MAX_LENGTH - 1) {
        number[length++] = ch;
    }

    int sum = 0;

    int start = (number[0] == '-' || number[0] == '+') ? 1 : 0;


    if (number[0] == '-') {
        sum -= (number[1] - '0'); 
    }
    else if (number[0] == '+') {
        sum += (number[1] - '0'); 
    }
    else {
        sum += (number[0] - '0'); 
    }

    for (int i = start + 1; i < length; i++) {
        if (number[i] >= '0' && number[i] <= '9') { 
            sum += number[i] - '0';
        }
    }

    cout << "—ума цифр числа: " << sum << endl;
    return 0;
}
