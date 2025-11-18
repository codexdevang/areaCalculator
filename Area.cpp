#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int choice;
    float area,radius,length,width,height,Base;

cout<<"1-Area of Circle"<<endl;
cout<<"2-Area of Rectangle"<<endl;
cout<<"3-Area of Square"<<endl;
cout<<"4-Area of triangle"<<endl;
cout<<"Enter your choice:";
cin>>choice;

switch(choice){
    case 1:
       cout<<"Enter the radius of the circle:: ";
      cin>>radius;
       area = 3.14 * pow(radius,2);
    break;
    case 2:
     cout<<"Enter the length of Rectangle::";
     cin>>length;
     cout<<"Enter the witdh of the rectangle::";
     cin>>width;
     area = length * width;
    break;
    case 3:
     cout<<"Enter the length of the side of square ::";
     cin>>length;
     area = pow(length,2);
    break;
    case 4:
     cout<<"Enter height of traingle ::";
     cin>>height;
     cout<<"enter base of the triangle ::";
     cin>>Base;
     area = 0.5 * height * Base;
    break;

    default: 
     // agr koi choose hi nahi kiya toh
    cout<<"\nInvalid Choice....choose from given option :) ";
    }
 cout<<"\nArea ::"<<area<<endl;


    return 0;
}