#include <iostream>

class RekeningBank{
    private:
        double saldo;
    public:
        RekeningBank(double nilai_saldo){
            saldo = nilai_saldo;
        }
        void setor(double jumlah){
            saldo += jumlah;
            std::cout << "Saldo anda sekarang Rp." << saldo << std::endl;
        }
        void tarik(double jumlah){
            if(saldo >= jumlah){
                saldo -= jumlah;
                std::cout << "Sisa saldo anda adalah Rp. " << saldo << std::endl;
            }
            else{
                std::cout << "Penarikan gagal" << std::endl;
            }
        }
};

int main(){
    RekeningBank rekening1(0.0);
    int pilihan;
    double jumlah;
    bool loop = true;
    do{
        std::cout << "1. Setor" << std::endl << "2. Tarik" << std::endl << "3. Selesai" << std::endl;
        std::cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            std::cout << "Masukkan jumlah yang anda ingin setor" << std::endl;
            std::cin >> jumlah;
            rekening1.setor(jumlah);
            break;
        case 2: 
            std::cout << "Masukkan jumlah yang anda ingin tarik" << std::endl;
            std::cin >> jumlah;
            rekening1.tarik(jumlah);
            break;
        case 3:
            std::cout << "Terima Kasih";
            loop = false;
            break;
        default:
            loop = false;
            break;
        }
    }
    while(loop);
    return 0;
}