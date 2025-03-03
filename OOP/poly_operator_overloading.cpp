#include<iostream>
using namespace std;

class Complex{
    public:
        double real, img;

        Complex(){
            this->real = 0;
            this->img = 0;
        }

        Complex(double r, double i){
            this->real = r;
            this->img = i;
        }

        Complex operator+(Complex c){
            Complex temp;
            temp.real = this->real + c.real;
            temp.img = this->img + c.img;
            return temp;
        }
        
        void operator ++(){
            this->real++;
            this->img++;
        }

        void operator ++(int){
            this->real++;
            this->img++;
        }
};

int main(){
    Complex c1(3, 4), c2(5, 6), c3(3, 7), c4;

    c4 = c1 + c2 + c3;
    cout << "Real: " << c4.real << " Img: " << c4.img << endl;

    c4++;
    cout << "Real: " << c4.real << " Img: " << c4.img << endl;

    return 0;
}