
#include <iostream>
#include <conio.h>
// Cmath for the computation
#include <cmath>
// Value of 'Pi'
#define Pi 3.14159265


using namespace std;


int main()
{
    
	// Variables of the measurement 
	double sideA,sideB,sideC,perimeter,area,heron,apothem,circumcenter;
	
	// Variables of the angles
	double angleA,angleB,angleC;
	//constant variable
	const double pi=3.14159265;
	double angle_in_deg = acos((sideA*sideA+sideB*sideB-sideC*sideC)/2*sideA*sideB) * 180/pi;
	
	// Cout and user-input for the measurement of the sides of the triangle 
	cout<<"TRIANGLE CALCULATOR:\n";
	cout<<"\n";
	cout<<"Input the measurement of each side of the triangle:\n";
	cout<<"(NOTE: The longest measurement should be 'Side C' and automatically considered the hypotenuse)"<<endl;
	cout<<"\n";
	cout<<"Side A: ";
	cin>>sideA;
	cout<<"\n";
	cout<<"Side B: ";
	cin>>sideB;
	cout<<"\n";
	cout<<"Side C: ";
	cin>>sideC;
	cout<<endl;
	
	cout<<"SIDES:"<<endl;
	
	// Calculation for the 'Perimeter'
	perimeter = sideA + sideB + sideC; 
	
	// Calculation for the 'Area'
	// Using 'Heron's Formula'
	heron = (sideA+sideB+sideC)/2;
	area = sqrt(heron*(heron-sideA)*(heron-sideB)*(heron-sideC));

	// Shows the measurement of sides and the perimeter
	cout<<"Side A = "<<sideA;
	cout<<endl;
	cout<<"Side B = "<<sideB;
	cout<<endl;
	cout<<"Side C = "<<sideC;
	cout<<endl;
	cout<<" \n";
	cout<<"PERIMETER:"<<endl;
	cout<<"The Perimeter of the triangle is: " << perimeter << endl;
	cout<<" \n";
	
	cout<<endl;

	// Made us of the law of cos to compute for the angle
	angleA=acos(((sideB*sideB)+(sideC*sideC)-(sideA*sideA))/(2*sideB*sideC))*180/Pi; 
	angleB=acos(((sideA*sideA)+(sideC*sideC)-(sideB*sideB))/(2*sideA*sideC))*180/Pi;
	angleC=acos(((sideA*sideA)+(sideB*sideB)-(sideC*sideC))/(2*sideA*sideB))*180/Pi;

	// Indicates the angle of the triangle wether 'Right, Acute, or Isosceles'
	if(sideA + sideB > sideC && sideB + sideC > sideA && sideC +sideA > sideB)
	
{
    cout<<"TYPE OF ANGLE:"<<endl;
    if(sideA * sideA + sideB * sideB == sideC * sideC)
	  cout<<"This is a Right Triangle";
    else if(sideA * sideA + sideB * sideB > sideC * sideC)
      cout<<"This is an Acute Triangle";
    else if(sideA * sideA + sideB * sideB < sideC * sideC)
      cout<<"This is an Obtuse Triangle";
  	else if(sideC < sideA && sideB > sideC)
  	  cout<<"INVALID! Not a triangle\n";
}

	cout<<endl<<endl;
	cout<<"TYPE OF TRIANGLE:";
	cout<<endl;

	// Indicates the type of triangle wether 'Equilateral, Scalene, or Isosceles 
	if(sideA == sideB && sideB == sideC && sideC == sideA)
	cout<<"This is an Equilateral Triangle";
	
	else if(sideA != sideB && sideB != sideC && sideC != sideA)
	cout<<"This is a Scalene Triangle";
	
	else if((sideA != sideB && sideB == sideC) || (sideA != sideC && sideB == sideA) || (sideB != sideC && sideA == sideC) || (sideB != sideC && sideB == sideA))
	cout<<"This is an Isosceles Triangle";
	
	else if((sideB != sideC && sideA == sideC) || (sideB != sideC && sideB == sideA))
	cout<<"This is an Isosceles Triangle";
	
	cout<<endl;


	// Calculation for the 'Apothem'
	apothem=angleC/2*tan(180/3);
	
	//Calculation for the Circumcenter
    circumcenter = (sideC*sideB*sideA)/sqrt((sideC+sideB+sideA)*(sideA+sideB-sideC)*(sideA+sideC-sideB)*(sideC+sideA-sideB)); 
	
	// Shows the Area 
	cout<<"AREA:";
	cout<<"\n";		
	cout<<"The Area is: "<<area<<endl;
	
	cout<<endl;
	
	// Shows the 'Angles of each side'  
	cout<<"\n";
	cout<<"ANGLES:"; 
	cout<<"\n";
	cout<<"Angle A is: "<<angleA<<endl; 
	cout<<"Angle B is: "<<angleB<<endl; 
	cout<<"Angle C is: "<<angleC<<endl;
	
	cout<< endl;
	
	// Shows the Apothem 
	cout<<"APOTHEM:";
	cout<<"\n";
	cout<<"The Apothem is: "<<apothem<<endl;
	
	cout << endl;
	
	//Shows the Circumcenter
    cout << "CIRCUMCENTER: ";
    cout << "\n";
	cout << "The circumcenter is: "<<circumcenter;

	
	




	return 0;
}




