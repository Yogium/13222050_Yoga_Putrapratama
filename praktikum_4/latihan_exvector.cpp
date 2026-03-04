#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <string>

//object
class Partikel{
    public:
        double x,y;
        double jarak_pusat;
        double jarak_acuan;
    public:
        Partikel(double pos_x, double pos_y){
            x = pos_x;
            y = pos_y;
            jarak_pusat = 0.0;
        }

        void hitungJarak(){
            //asumsi titik acuan(5,5)
           jarak_pusat = std::sqrt((x*x) + (y*y)) - std::sqrt((5*5)+(5*5));
        }
};

int main(){
    //I/O read
    std::vector<Partikel> kumpulan_partikel;
    std::ifstream fileBaca("koordinat_mentah.txt");

    std::string header1, header2;
    double temp_x, temp_y;

    if(fileBaca.is_open()){
        fileBaca >> header1 >> header2;
        while(fileBaca >> temp_x >> temp_y){
            kumpulan_partikel.push_back(Partikel(temp_x, temp_y));
        }
        fileBaca.close();
    }
    else{
        std::cout << "Gagal! Pastikan file koordinat_mentah.txt sudah Anda buat." << std::endl;
        return 1;
    }

    //B. komputasi
    for(int i=0;i<kumpulan_partikel.size();i++){
        kumpulan_partikel[i].hitungJarak();
    }
    
    //I/O write
    std::ofstream fileHasil("hasil_jarak.txt");
    if(fileHasil.is_open()){
        for(int i=0;i<kumpulan_partikel.size();i++){
            fileHasil << "Partikel " << i+1 << " | Posisi: (" << kumpulan_partikel[i].x << ", " << kumpulan_partikel[i].y << ") " << "| Jarak: " << kumpulan_partikel[i].jarak_pusat << std::endl;
        }
        fileHasil.close();
        std::cout << "=> Selesai! Buka file 'hasil_jarak.txt' untuk melihat kalkulasinya." << std::endl;
    }
    return 0;
}