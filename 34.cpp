#include <iostream>
#include <string>
using namespace std;
int main() {
    int N;
    cout << "Nhap so nguoi: ";
    cin >> N;
    for (int i = 0; i < N; i++) {
        int tuoi;
        string hoTen;

        cout << "Nhap tuoi: ";
        cin >> tuoi;
        cin.ignore();

        cout << "Nhap ho ten: ";
        getline(cin, hoTen);

        cout << "Nguoi " << i + 1 << ": " << tuoi << " tuoi - " << hoTen << endl;
    }

    return 0;
}