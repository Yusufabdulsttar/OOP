/*
 * File:   Shape_Calculator.cpp
 * Author: Yusuf Abdulsttar
 *
 * Created on August 17, 2023, 1:30 PM
 */

#include "Shape.h"

void Get_Area(Shape* shape){
    //this function know nothing about specific shape
    //this is a Generic function
        cout<<"********************************";
        cout<<"\n The Area = "<<shape->Area()<<"\n";   //Run time determined
        cout<<"********************************";
}

void Get_Perimeter(Shape* shape){
    //this function know nothing about specific shape
    //this is a Generic function
        cout<<"********************************";
        cout<<"\n The Perimeter = "<<shape->Perimeter()<<"\n"; //Run time determined
        cout<<"********************************";
}

void Get_Circumference(Shape* shape){
    //this function know nothing about specific shape
    //this is a Generic function
        cout<<"********************************";
        cout<<"\n The Circumference = "<<shape->circumference()<<"\n"; //Run time determined
        cout<<"********************************";
}

void Run(){
    int choice_1 =0;
    int parameter1 = 0, parameter2 = 0,parameter3 = 0;
    cout<<"**************************************";
    cout<<"\n\n\t Shape Calculator \n\n";
    cout<<"**************************************";
    cout<<"\n\n\t Main Screen\n\n";
    cout<<"**************************************";
    cout<<"\n Enter your choice: \n"<<endl;
        cout<<" 1.Rectangle \n"<<endl;
        cout<<" 2.Triangle \n"<<endl;
        cout<<" 3.Circle \n"<<endl;
        cin>>choice_1;

        if (choice_1 == RECTANGLE) {
            system("cls");
            cout<<"\n Enter the Length of the Rectangle : \n"<<endl;
            cin>>parameter1;
            cout<<"\n Enter the width of the Rectangle : \n"<<endl;
            cin>>parameter2;

            Rectangle Rec_Obj(parameter1,parameter2);

            while(choice_1 != Exit) {
            cout<<"\n Enter your choice: \n"<<endl;
            cout<<" 1.Area of Rectangle \n"<<endl;
            cout<<" 2.Perimeter of Rectangle \n"<<endl;
            cout<<" 3.Return to the main menu  \n"<<endl;
            cin>>choice_1;
                system("cls");
                if (choice_1 == AREA){
                        Get_Area(&Rec_Obj); 
                }
                else if (choice_1 == PERIMETER){
                        Get_Perimeter(&Rec_Obj);
                }
                else if (choice_1 == Exit){ /* Exit the loop */}
                else{
                    cout<<"********************************";
                    cout <<"\n Please Enter Correct Choice\n";
                    cout<<"********************************";
                }
            }
        }
        else if(choice_1 == TRIANGLE) {
            system("cls");
            cout<<"\n Enter the first_side of the Triangle : \n"<<endl;
            cin>>parameter1;
            cout<<"\n Enter the second_side of the Triangle : \n"<<endl;
            cin>>parameter2;
            cout<<"\n Enter the third_side of the Triangle : \n"<<endl;
            cin>>parameter3;

            Triangle TRI_Obj(parameter1,parameter2,parameter3);

            while(choice_1 != Exit) {
                cout<<"\n Enter your choice: \n"<<endl;
                cout<<" 1.Area of Triangle \n"<<endl;
                cout<<" 2.Perimeter of Triangle \n"<<endl;
                cout<<" 3.Return to the main menu  \n"<<endl;
                cin>>choice_1;
                system("cls");

                if (choice_1 == AREA){
                        Get_Area(&TRI_Obj);
                }
                else if (choice_1 == PERIMETER){
                        Get_Perimeter(&TRI_Obj);
                    }
                else if (choice_1 == Exit){ /* Exit the loop */}
                else{
                    cout<<"********************************";
                    cout <<"\n Please Enter Correct Choice\n";
                    cout<<"********************************";
                }
            }
        }
        else if (choice_1 == CIRCLE){
            choice_1 =0;
            system("cls");
            cout<<"\n Enter the radius of the Circle : \n"<<endl;
            cin>>parameter1;

            Circle Cir_Obj(parameter1);

            while(choice_1 != Exit) {
                cout<<"\n Enter your choice: \n"<<endl;
                cout<<" 1.Area of Circle \n"<<endl;
                cout<<" 2.circumference of Circle \n"<<endl;
                cout<<" 3.Return to the main menu  \n"<<endl;
                cin>>choice_1;
                system("cls");

                if (choice_1 == AREA){
                        Get_Area(&Cir_Obj);
                }
                else if (choice_1 == CIRCUMFERENCE){
                        Get_Circumference(&Cir_Obj);
                }
                else if (choice_1 == Exit){ /* Exit the loop */}
                else{
                    cout<<"********************************";
                    cout <<"\n Please Enter Correct Choice\n";
                    cout<<"********************************";
                }
            }
        }
        else {
                system("cls");
                cout<<"********************************";
                cout <<"\n Please Enter Correct Choice\n";
                cout<<"********************************\n";
        }
}

int main() {
    while (1){ Run(); }
    return 0;
}




