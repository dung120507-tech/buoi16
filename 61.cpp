#include <iostream>
#include <string>
using namespace std;
int main() {
    string a, b;
    cout << "Nhap chuoi 1: ";
    getline(cin, a);
    cout << "Nhap chuoi 2: ";
    getline(cin, b);
    if (a == b)
        cout << "Hai chuoi bang nhau";
    else if (a < b)
        cout << "Chuoi 1 dung truoc";
    else
        cout << "Chuoi 2 dung truoc";

    return 0;
}