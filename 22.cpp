#include <iostream>
#include <string>
using namespace std;
int main(){
    string chuoi, key;
    cout << "Moi nhap chuoi: ";
    getline(cin, chuoi);
    cout << "Moi nhap tu khoa: ";
    getline(cin, key);
    int viTri = chuoi.find(key);
    if(viTri != string::npos){
        cout << "Vi tri cua tu khoa la: " << viTri; 
    } else{
        cout << "Khong tim thay tu khoa!";
    }
    return 0;
}