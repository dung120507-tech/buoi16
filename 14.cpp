#include <iostream>
#include<string>
using namespace std;
int main(){
    string ten, ngheNghiep;
    cout << "Nhap ten: ";
    getline (cin, ten);
    int tuoi;
    cout << "Nhap tuoi: ";
    cin >> tuoi;
    cin.ignore();
    cout << "Nhap nghe nghiep: ";
    getline (cin, ngheNghiep);
    string Cau = "Toi ten la " + ten + ", " + to_string(tuoi) + " tuoi, nghe nghiep la " + ngheNghiep;
    cout << Cau;
    return 0;
}