#include <iostream>
#include<string>
using namespace std;
int main(){
    string s, tuCu, tuMoi;
    cout << "Nhap chuoi: ";
    getline(cin, s);
    cout << "Nhap tu can thay: ";
    getline(cin, tuCu);
    cout << "Nhap tu thay the: ";
    getline (cin, tuMoi);
    int viTri = s.find(tuCu);
    if (viTri != string::npos){
        s.replace(viTri, tuCu.length(), tuMoi);
    }
    cout << "Chuoi moi la: " << s;
    return 0;
    }
