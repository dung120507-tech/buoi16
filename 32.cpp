#include <iostream>
#include <string>
using namespace std;
int main(){
    int tuoi;
    string ten;
    cin >> tuoi;
    cin.ignore();
    getline (cin, ten);
    cout << "Tuoi: " << tuoi << ", Ten: " << ten;
    return 0;
}