// Author: Nisc
// Lab 1:  Provide menu-driven option loop that calculates: restaurant bill; BMI; or quits the loop.
#include <iostream>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main()
{
	cout <<" Which one would you like to do?";
 	cout << " Enter A if you would like compute the amount of resturant bill";
 	cout << "Enter B if you would like to calculate BMI";
 	char option= ' ';
 	cin >> option;
 		if (option== 'a')
		 {
 				double food_cost, tips_percentage, total, TAXRATE, total_bill, tips; 
				double results;
	
	 			TAXRATE = 0.0825;
	 			cout<<"== Resturant Bill Calculator =="<<endl;
	
				cout <<"Enter the Cost of the food: $";
				cin >> food_cost;
				cout << "The cost of the food is: $" << food_cost, setprecision(3);
				cout << "\n";
//---------------------------------------------------------------------------------------------------------
				//calculate the food_cost + tips
				total = food_cost + (food_cost*0.0825);
				cout << "The total food cost with tax is :$" << total, setprecision(3);
				cout << "\n";
//--------------------------------------------------------------------------------------------------------	
				cout << "Enter the % you want to tip: ";
				cin >> tips_percentage;
				tips = (tips_percentage / food_cost) * 100;
				total_bill = tips + total; //the tip is food cost + tax
				cout << "Your total bill is: $" << total_bill, setprecision(3);
		 }
		else if (option=='b')
		{
				double feet;
				double inches;
				double height;
				double weight;
				double bmi;

				cout<<"== BMI Calculator =="<<endl;
				cout<<"Step 1: Enter height"<<endl;

				cout<<"Feet:"<<endl;
				cin>>feet;

				cout<<"Inches:"<<endl;
				cin>>inches;

				cout<<"step 2: Enter weight"<<endl;
				cout<<"Pounds:"<<endl;
				cin>>weight;

				height = (feet * 12) + inches;
				bmi= (weight*703) / (height * height);

				cout<<"BMI: "<<bmi<<endl;
		}
	else if (option =='q'){
	return 0;
}
	else;
 	cout << "Invalid" ;}
