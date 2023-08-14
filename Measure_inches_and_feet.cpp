#include <iostream>
#include <conio.h>
 using namespace std;

 class Distance {
     private:
         int feet_1;
         int feet_2;
         float inch_1;
         float inch_2;
     public:
         // Constructor
         Distance(int feet_1,int feet_2, float inch_1, float inch_2):feet_1(feet_1),feet_2(feet_2),inch_1(inch_1),inch_2(inch_2){}
         Distance(){feet_1 = 0; feet_2 = 0; inch_1 = 0.0; inch_2 = 0.0;}
         // Destructor
         ~Distance(){}
         // Encapsulations
         // use Getter & Setter
         void setFeet(int feet1_,int feet2_){ feet_1 = feet1_; feet_2 = feet2_;}
         void setInch(float Inch1_,float Inch2_){ inch_1 = Inch1_;  inch_2 = Inch2_;}
         // Functions Declaration
         void show();
         void add(Distance d1);
         void sub(Distance d1);
         void mul(Distance d1);
         void op(int c,Distance d1);
 };
 void Distance::show(){ cout << "Feet is: " << feet_1 << endl << "Inches is: " << inch_1 <<endl;}
 void Distance::add(Distance d1){ feet_1 = d1.feet_1 + d1.feet_2; inch_1 = d1.inch_1 + d1.inch_2;}
 void Distance::sub(Distance d1){ feet_1 = d1.feet_1 - d1.feet_2; inch_1 = d1.inch_1 - d1.inch_2;}
 void Distance::mul(Distance d1){ feet_1 = d1.feet_1 * d1.feet_2; inch_1 = d1.inch_1 * d1.inch_2;}
 void Distance::op(int c, Distance d1){
     switch(c){
         case 1: add(d1); break;
         case 2: sub(d1); break;
         case 3: mul(d1); break;
         default:           break;
     }
 }
class Measurement {
private:
    Distance d1;
    int feet1;
    int feet2;
    int choise;
    float inch1;
    float inch2;
public:
    // Constructor
    Measurement(int feet1,int feet2, float inch1,float inch2,int choise):feet1(feet1),feet2(feet2),inch1(inch1),inch2(inch2),choise(choise){}
    Measurement(){feet1 = 0; feet2 = 0; inch1 = 0.0; inch2 = 0.0; choise = 0;}
    // Destructor
    ~Measurement(){}

	void Run() {// only public one
     cout << "please enter Feet number 1: ";
     cin >> feet1;
     cout << "\nplease enter Feet number 2: ";
     cin >> feet2;
     d1.setFeet(feet1,feet2);
     cout << "\nplease enter inch number 1: ";
     cin >> inch1;
     cout << "\nplease enter inch number 2: ";
     cin >> inch2;
     d1.setInch(inch1,inch2);
     cout << "\nplease choose operation\n" << "1- (+) Addition \n2- (-) Subtraction \n3- (*) Multiplication\n";
     cin >> choise;
     d1.op(choise,d1);
     d1.show();
     cout << "Press any key to continue \n";
     getch();
     system("cls");
		Run();	// Restart again
	}
};

 int main(){
    Measurement service;
    service.Run();

    return 0;
 }
