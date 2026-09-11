#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cout << "Nhap so: ";
    cin >> n;
    string s = to_string(n);
    cout << "Ban vua nhap so " + s;
return 0;
}