/* Written by: Manav Chawla

   Objective of File - Kashmir File
   
*/

#include<iostream>
using namespace std;

extern class Packages pack;
int choice=0;

void Kash()
{	
	spacebar(14);
	cout<<"Kashmir Packages \n";
	spacebar(14);
	draw('-',16);
	cout<<endl<<endl;
	
	// The minimum price is 10000 and per day cost is 250
	cout<<" The base price for Kashmir is Rs. 10000. The per day cost of the activities ";
	cout<<"is Rs. 250. \n"; 
	
	pack.No_of_People();	// No. of people
	
	cout<<endl<<" ";
	draw('*',25);
	
	// ----------------------------------Airline Selection Start--------------------------
	
	// Airlines Type
	pack1_air_type: // Reselection of type
	cout<<"\n\n Type of airline: \n 1) Low cost \n 2) Budget \n";
	cout<<"\n Please enter number 1 or 2 to choose the type of airline: ";
	pack.Airline_Type();	 // Stores airline type
	
	// ALl possible cases within each airline
	switch(pack.Return_Airline_Type()) 
	{
		// Low Cost Airline
		case 1: cout<<"\n In Low Cost Airline, only Economy Class is available for Rs. 15000.";
				cout<<" To choose Economy Class, enter 1 or to choose another airline type, ";
				cout<<"enter 2: ";
				pack1_air_choice1: // Reselection of choice
				cin>>choice;
				
				if (choice == 1)
				{
					pack.LowCost_Airline_Price(); // Price of airline (1 seat)
				}
				
				else if (choice == 2)
				{
					goto pack1_air_type; // Reselection of airline type
				}
				
				else 
				{
					cout<<"\n Please enter 1 or 2: ";
					goto pack1_air_choice1; // Reselection of choice
				}
				
				break;
		
		// Budget Airline		
		case 2: cout<<"\n In Budget Airline, we have Economy Class for Rs. 20000 and Business ";
				cout<<"Class for Rs. 30000. To choose Economy Class, enter 1. To choose ";
				cout<<"Business Class, enter 2 or to choose another airline type, enter 3: ";
				pack1_air_choice2: // Reselection of choice 
				cin>>choice;
				
				if (choice == 1 || choice == 2)
				{
					pack.Budget_Airline_Price();	// Price of airline (1 seat)
				}
				
				
				else if (choice == 3)
				{
					goto pack1_air_type; // Reselection of airline type
				}
			
				else 
				{
					cout<<"\n Please enter 1, 2 or 3: ";
					goto pack1_air_choice2; // Reselection of choice
				}
				
				break;
				
		default: cout<<"\n Incorrect Selection. ";
				 goto pack1_air_type; // Reselection of airline type
	}
	
	// ----------------------------------Airline Selection End----------------------------------

	
	cout<<endl<<" ";
	draw('*',25);
	
	// ----------------------------------Hotel Selection Start----------------------------------

	
	cout<<"\n\n Type of Hotel (Occupancy is 2 per room): \n 1) Budget \n 2) High end \n";
	pack1_hotel_type: // Reselection of hotel type
	cout<<"\n Please enter number 1 or 2 to choose the type of hotel: ";
	pack.Hotel_Type();	 // Stores airline type
	
	// All possible cases with hotels 
	switch(pack.Return_Hotel_Type())
	{	
		// Budget Hotel		
		case 1: cout<<"\n In Budget Hotel, we have two types of rooms. The smaller room is for ";
				cout<<"Rs. 1150 per night while the bigger room is Rs. 1750 per night. To ";
				cout<<"choose the smaller room, enter 1. To choose the bigger room, enter 2 or ";
				cout<<"to choose another hotel type, enter 3: ";
				pack1_hotel_choice2: // Reselection of choice
				cin>>choice;
				
				if (choice == 1 || choice == 2)
				{
					pack.Budget_Hotel_Price();	// Price of hotel (1 room)
				}
			
				
				else if (choice == 3)
				{
					goto pack1_hotel_type;  // Reselection of hotel type
				}
			
				else 
				{
					cout<<"\n Please enter 1, 2 or 3: ";
					goto pack1_hotel_choice2; // Reselection of choice
				}
				
				break;
		
		// High end Hotel		
		case 2: cout<<"\n In High End Hotel, we have only a big room option available for Rs. ";
				cout<<"2500 per night. To choose the big room, ";
				cout<<"enter 1 or to choose another hotel type, enter 2: ";
				pack1_hotel_choice3: // Reselection of choice
				cin>>choice;
				
				if (choice == 1)
				{
					pack.HighEnd_Hotel_Price();	// Price of hotel (1 room)
				}
				
				else if (choice == 2)
				{
					goto pack1_hotel_type; // Reselection of hotel type
				}
			
				else 
				{
					cout<<"\n Please enter 1 or 2: ";
					goto pack1_hotel_choice3; // Reselection of choice
				}
				
				break;
				
		default: cout<<"\n Incorrect Selection. ";
				 goto pack1_hotel_type; // Reselection of hotel type
	}
	
	// ----------------------------------Hotel Selection End----------------------------------

	
	pack.Duration();	// No. of Days of Stay
	
	pack.Total_Duration_Cost();	// Duration price for all poeple
	
	pack.Total_Airline_Price();	// Total price of airline for all people
	
	pack.Total_Hotel_Price();	// Total price of hotel for all people
	
	pack.Total_Cost();	// Total price for all people (Airline + Hotel + Duration)
	
}
