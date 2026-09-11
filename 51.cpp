#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cout << "Nhap chuoi so: ";
    cin >> s;
    int n = stoi(s);
    cout << "Ket qua: " << n + 10;
    return 0;
}