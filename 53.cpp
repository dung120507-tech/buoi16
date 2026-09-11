#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string s;
    cout << "Nhap chuoi: ";
    cin >> s;
    bool hopLe = true;
    for (int i = 0; i < s.length(); i++) {
        if (!isdigit(s[i])) {
            hopLe = false;
            break;
        }
    }
    if (hopLe)
        cout << "So: " << stoi(s);
    else
        cout << "Chuoi khong hop le";

    return 0;
}