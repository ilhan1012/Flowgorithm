#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    string nama;
    int hariKerja, jamLembur, upah, uangLembur, transLembur, gaji;
    
    cout << "Masukan Nama" << endl;
    cin >> nama;
    cout << "Masukan Hari Kerja" << endl;
    cin >> hariKerja;
    cout << "Masukan Jumlah Jam Lembur" << endl;
    cin >> jamLembur;
    uangLembur = jamLembur * 5000;
    upah = hariKerja * 30000;
    if (jamLembur > 10) {
        transLembur = 0.1 * uangLembur;
        cout << "Kamu dapat uang transport : Rp. " << transLembur << endl;
    } else {
        transLembur = 0;
        cout << "Kamu ga dapat uang transport" << endl;
    }
    gaji = uangLembur + upah + transLembur;
    cout << nama << " Gaji kamu adalah : Rp. " << gaji << endl;
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}

