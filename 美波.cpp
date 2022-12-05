/*
	Prototype for setprecision (input output manipulator)
	By @404Mine
*/
#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

main()
{
	
	clrscr();
	
	double pi = 3.141592653589793238;

	
	cout<<"             Formatting outputs!!!            "<<endl;
	cout<<"----------------------------------------------"<<endl;
	
	cout<<setprecision(4); // sets the decimal value to 4 decimal places
	cout<<setfill('-');    // sets the fill to be a specified character
	cout<<"Value of Pi in total width of 8: "<<setw(8)<<pi<<endl;   // setw() is to set the width of your value
	cout<<"Value of Pi in total width of 10:"<<setw(10)<<pi<<endl;  // same goes here, just put the desired value inside the parenthesis
	
	getch();
	
}
