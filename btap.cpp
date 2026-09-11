#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string hoTen = "   nguyen   van a  ";
    stringstream ss(hoTen);
    string tu, ketQua = " ";
    
    while (ss >> tu) {
        tu[0] = toupper(tu[0]);
        for (int i = 1; i < tu.length(); i++){ 
        tu[i] = tolower(tu[i]);}

        if (ketQua != "") ketQua += " ";
        ketQua += tu;
    

}
cout << ketQua;
return 0;
}