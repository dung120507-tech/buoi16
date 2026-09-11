#include <iostream>
using namespace std;
int main(){
    string ho, ten;
    cout << "Nhap ho: ";
    getline (cin, ho);
    cout << "Nhap ten: ";
    getline (cin, ten);
    string hoTen;
    hoTen = ho + " " + ten;
    cout << "Ho va ten la: " << hoTen;
    return 0;
}