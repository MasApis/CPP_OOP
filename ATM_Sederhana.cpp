#include <iostream>
using namespace std;

    class ATM {
        private:
        string namaNasabah;
        string nomorRekeningNasabah;
        int uangNasabah;
        
        // constructor
        public:
        ATM (string nN, string nRN, int uN) {
            namaNasabah = nN;
            nomorRekeningNasabah = nRN;
            uangNasabah = uN;
        }
        
        // Destructor
        ~ATM() {
            cout << "\n[LOG] Data nasabah '" << namaNasabah << "' telah dihapus dari sistem." << endl;
        }
        
        // method proses
        void prosesTransaksi() {
            short pilihan;
            int jumlah;
            cout << "selamat datang di bank masapistech" << endl;
            cout << "menu:" << endl;
            
            // menu akan berulang jika user tidak memilih nomor 4
            while(true) {
                    cout << "1. informasi saldo" << endl;
                    cout << "2. tarik uang" << endl;
                    cout << "3. setor uang" << endl;
                    cout << "4. keluar" << endl;
                    cout << "pilihan : ";
                    cin >> pilihan;
                    
                if(pilihan == 1) {
                cout << "nama : " << namaNasabah << endl;
                cout << "nomor rekening : " << nomorRekeningNasabah << endl;
                cout << "saldo anda : " << uangNasabah << endl;
            } else if(pilihan == 2) {
                cout << "jumlah uang yang ingin anda tarik ? = ";
                cin >> jumlah;
                if (jumlah > uangNasabah) {
                    cout << "uang mu itu loo dikitttt cookk" << endl;
                } else if(jumlah <= uangNasabah) {
                    uangNasabah -= jumlah;
                    cout << "jumlah saldo yang anda tarik : " << jumlah << endl;
                    cout << "saldo anda sekarang = " << uangNasabah << endl;
                }
            } else if(pilihan == 3) {
                cout << "Jumlah uang yang ingin anda setor ? = ";
                cin >> jumlah;
                uangNasabah += jumlah;
                cout << "jumlah uang yang anda setor adalah = " << jumlah << endl;
                cout << "saldo anda sekarang = " << uangNasabah << endl;
            } else if(pilihan == 4) {
                cout << "terimakasih sudah menggunakan bank masapistech" << endl;
                break;
            }
            }
        }
    };

int main() {
   ATM nasabah1("masapistech", "722054676", 100000);
   nasabah1.prosesTransaksi();
}
