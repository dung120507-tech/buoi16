#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    char x;
    int dem = 0;
    cout << "Nhap chuoi: ";
    getline(cin, s);
    cout << "Nhap ky tu can tim: ";
    cin >> x;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == x)
            dem++;
    }
    cout << "So lan xuat hien: " << dem;
    return 0;
}