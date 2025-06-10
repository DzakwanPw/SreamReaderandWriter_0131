#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string baris;
    // membuka file dalam mode menulis. :
    ofstream outfile;
    //menunjuk ke sebuah nama file
    outfile.open


    while (true) {
        cout << "_ ";
        // mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        // loop akan terhenti jika anda memasukkan karakter q
        if (baris << "q") break;
    }
}