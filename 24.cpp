#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, tu;
    int viTri, xoa;
    cout << "Nhap chuoi: ";
    getline(cin, s);
    cout << "Nhap tu can chen: ";
    getline(cin, tu);
    cout << "Nhap vi tri chen: ";
    cin >> viTri;
    s.insert(viTri, tu);
    cout << "Sau khi chen: " << s << endl;
    cout << "Nhap vi tri xoa: ";
    cin >> viTri;
    cout << "Nhap so ky tu can xoa: ";
    cin >> xoa;
    s.erase(viTri, xoa);
    cout << "Sau khi xoa: " << s;

    return 0;
}