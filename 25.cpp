#include<iostream>
#include <string>
using namespace std;
int main(){
    string email;
    cout << "Moi nhap mail cua ban: ";
    getline (cin, email);
    int viTri = email.find('@');
    string tenDangNhap = email.substr(0,viTri);
    string domain = email.substr(viTri + 1);
    cout << "Ten dang nhap: " << tenDangNhap << endl;
    cout << "Domain: " << domain;
    return 0;
}