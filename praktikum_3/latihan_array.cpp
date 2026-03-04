#include <iostream>

class Sensor{
    private:
        int id;
        double nilai;

    public:
        Sensor(int id_sensor){
            id = id_sensor;
        }
        void rekam(double data){
            nilai = data;
        }
        void status(){
            std::cout << "ID: " << id << " | Nilai: " << nilai << std::endl;
        }
};

int main(){
    Sensor jaringan[3] = { Sensor(101), Sensor(102), Sensor(103)};

    // for(int i=0;i<3;i++){
    //     jaringan[i].rekam((i+1)*12.5);
    // }
    for(int i=0;i<3;i++){
        jaringan[i].status();
    }
    return 0;
}