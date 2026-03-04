#include <iostream>
#include <vector>

class TugasKalkulasi{
    private:
        int id_tugas;
        double nilai_A, nilai_B, hasil;
    public:
        TugasKalkulasi(int id, double a, double b){
            id_tugas = id;
            nilai_A = a;
            nilai_B = b;
            hasil = 0.0;
        }

        void kerjakan(){
            hasil = nilai_A + nilai_B;
        }

        void tampilkanHasil(){
            std::cout << "Tugas" << id_tugas << " | " << nilai_A << " + " << nilai_B << " = " << hasil << std::endl;
        }
};

int main(){
    std::vector<TugasKalkulasi> antrean;
    
    // antrean.push_back(TugasKalkulasi(1, 10.5, 5.0));
    // antrean.push_back(TugasKalkulasi(1, 20.5, 7.5));
    // antrean.push_back(TugasKalkulasi(1, 50.5, 10.1));

    for(int i=0;i<100;i++){
        antrean.push_back(TugasKalkulasi(i, i*2.5, i*1.5));
    }

    for(int i=0; i<antrean.size(); i++){
        antrean[i].kerjakan();
        antrean[i].tampilkanHasil();
    }
    return 0;
}

