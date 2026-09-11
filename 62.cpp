#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    string a[100];
    cout << "Nhap so ten: ";
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        cout << "Nhap ten " << i + 1 << ": ";
        getline(cin, a[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                swap(a[i], a[j]);
            }
        }
    }
    cout << "Danh sach sau khi sap xep:\n";
    for (int i = 0; i < n; i++)
        cout << a[i] << endl;

    return 0;
}