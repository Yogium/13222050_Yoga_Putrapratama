#include <iostream>
#include <string>

class Mobil{
    public:
    std::string merk;
    std::string warna;
    int tahun;

    //perilaku
    void nyalakanMesin() {
        std::cout << "Mesin mobil " << merk << " (" << warna << ") menyala!" << std::endl;
    }
};

int main() {
    Mobil mobil1;
    mobil1.merk = "Toyota";
    mobil1.warna = "merah";
    mobil1.tahun = 2022;

    Mobil mobil2;
    mobil2.merk = "Honda";
    mobil2.warna = "hitam";
    mobil2.tahun = 2020;

    Mobil mobil3;
    mobil3.merk = "Mazda";
    mobil3.warna = "silver";
    mobil3.tahun = 1983;

    mobil1.nyalakanMesin();
    mobil2.nyalakanMesin();
    mobil3.nyalakanMesin();

    return 0;
}