#include <iostream>

class Titik2D{
    private:
        double x,y;
    public:
        Titik2D(double nilai_x, double nilai_y){
            x = nilai_x;
            y = nilai_y;
        }
        void cetak(){
            std::cout << "X: " << x << " | Y: " << y << std::endl;
        }
};

int main(){
    Titik2D titikA(10.5, 20.2);
    titikA.cetak();

    return 0;
}