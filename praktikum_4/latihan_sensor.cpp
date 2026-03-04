#include <iostream>
#include <string>
#include <fstream>
#include <vector>

int main(){
    //initialization
    std::vector<double> sensor;

    sensor.push_back(100.5);
    sensor.push_back(200.0);
    sensor.push_back(150.5);

    //calculation and calibration
    for(int i=0;i<sensor.size();i++){
        sensor[i] = sensor[i]*1.1;
    }

    //save to file
    std::ofstream writeFile("hasil_kalibrasi.txt");
    
    if(writeFile.is_open()){
        for(int i=0;i<sensor.size();i++){
            writeFile << sensor[i] << std::endl;
        }
        writeFile.close();
        std::cout << "=> Selesai! Baca hasil di 'hasil_kalibrasi.txt'\n";
    }
    else{
        std::cout << "Gagal menulis pada file!\n";
        return 1;
    }
    return 0;
}