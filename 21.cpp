#include <iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout << "Nhap chuoi: ";
    getline(cin, s);
    if (s.length() >= 5){
        string dau =s.substr(0, 5);
        string cuoi = s.substr(s.length() - 5, 5);
        cout << "5 ky tu dau: " << dau << endl;
        cout << "5 ky tu cuoi: " << cuoi;
    }
    else{
        cout << "Khong hop le!";
    }
    return 0;
}