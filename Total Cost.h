/* Written by:	Manav Chawla

	Objective -	Gives the total cost of the trip

*/

#include<iostream>

using namespace std;

int Cost()
{
	char email[25];
	
	cout<<"\n Please Enter your email id: ";
	cin>>email;
	
	cout<<" "<<place<<"\t\t Package "<<pack_num<<endl<<endl;
	
	// Prints total number of adults
	cout<<" Total number of adults - "<<pack.Return_No_of_Adults()<<endl<<endl;	
	
	// Prints total number of children
	cout<<" Total number of children - "<<pack.Return_No_of_Children()<<endl<<endl;	
	
	cout<<" Duration of stay - "<<pack.Return_No_of_Days()<<" days"<<endl;
	cout<<" Total Hotel Price - Rs."<<pack.Return_Total_Hotel_Price()<<endl;
	cout<<" Total Airline Price - Rs."<<pack.Return_Total_Airline_Price()<<endl;
	cout<<" Total Trip Price - Rs. "<<pack.Return_Total_Cost()<<endl<<endl;
	
	cout<<" An Email has been sent to "<<email<<endl<<" Please follow the instructions ";
	cout<<"in the mail to pay for you trip. \n";
	cout<<" Thank You for choosing India Tourism Company.";
}

