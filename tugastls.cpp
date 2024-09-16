#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;


int main() {
    char pilihan;
    char jawaban;
    char ulangi;
    
    do {
        int acak;
        int alphabet[26] = {
            'a', 'b', 'c', 'd', 'e', 
            'f', 'g', 'h', 'i', 'j',
            'k', 'l', 'm', 'n', 'o',
            'p', 'q', 'r', 's', 't', 
            'u', 'v', 'w', 'x', 'y', 
            'z'};
        int kesempatan = 10;
        srand(time(0));
        cout << "-SELAMAT DATANG DI GAME TEBAK HURUF-\n" << "MULAI GAME? (y/n)" << endl;
        cin >> pilihan;
        pilihan = tolower(pilihan);
        char temp;
        acak = rand() % 26;  
        temp = alphabet[acak];
        
        if(pilihan == 'y') {
            cout << "Oke, sekarang Anda harus menebak sebuah huruf dari total 26 huruf. Anda akan diberikan 10 kesempatan. Semoga beruntung ya!\n" << "=======================================================\n";
            while (kesempatan > 0) {
                cout << "Masukkan pilihan huruf Anda!\n" << "Pilihan Huruf: ";
                cin >> jawaban;
                jawaban = tolower(jawaban);
                if (jawaban == temp) {
                    cout << "Selamat! Tebakan Anda benar!" << endl;
                    break;
                } else {
                    kesempatan = kesempatan - 1;
                    cout << "Jawaban Anda Salah! Sisa kesempatan Anda menjadi: " << kesempatan << endl;
                }
            }
            
            if (kesempatan == 0) {
                cout << "Kesempatan Anda Habis, Huruf yang Benar Adalah: " << temp << "\n" << endl;
            }

        } else {
            cout << "Baik, sampai jumpa lain kali!" << endl;
            break;
        }

        cout << "Apakah Anda ingin bermain lagi? (y/n)" << endl;
        cin >> ulangi;
        ulangi = tolower(ulangi);

    } while (ulangi == 'y');

    cout << "Baik, ulangi program jika ingin bermain!" << endl;
    return 0;
}
