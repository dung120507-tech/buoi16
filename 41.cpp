#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout << "Moi nhap chuoi: ";
    getline (cin , s);
    for (int i = 0 ; i < s.length();i++){
        cout << s[i] << endl;
    }
    return 0;
}