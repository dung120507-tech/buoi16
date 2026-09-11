#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string s;
    bool doiXung = true;
    cout << "Nhap chuoi: ";
    getline(cin, s);
    for (int i = 0; i < s.length() / 2; i++) {
        if (tolower(s[i]) != tolower(s[s.length() - 1 - i])) {
            doiXung = false;
            break;
        }
    }

    if (doiXung)
        cout << "La chuoi doi xung";
    else
        cout << "Khong phai chuoi doi xung";

    return 0;
}