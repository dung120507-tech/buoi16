#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string s;
    int chu = 0, so = 0, trang = 0;
    cout << "Nhap chuoi: ";
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i]))
            chu++;
        else if (isdigit(s[i]))
            so++;
        else if (s[i] == ' ')
            trang++;
    }
    cout << "So chu cai: " << chu << endl;
    cout << "So chu so: " << so << endl;
    cout << "So khoang trang: " << trang;
    return 0;
}