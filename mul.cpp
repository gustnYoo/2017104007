#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 9; i++) {  // 8À» 9·Î º¯°æ ÇÏ¸é µÊ
        for (int j = 1; j <= 9; j++) {
            cout << i << "*" << j << " = " << i * j << " ";
        }
        cout << endl;
    }
    return 0;
}
