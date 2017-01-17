/* Written by: Manav Chawla

   Objective of File - Kerala File
   
*/

#include<iostream>
using namespace std;

extern class Packages pack;

void Ker()
{	
	spacebar(14);
	cout<<"Kerala Packages \n";
	spacebar(14);
	draw('-',15);
	cout<<endl<<endl;
	
	// The minimum price is 12500 and per day cost is 150
	cout<<" The base price for Kerala is Rs. 12500. The per day cost of the activities ";
	cout<<"is Rs. 150. \n"; 
	
	pack.No_of_People();	// No. of people
	
	cout<<endl<<" ";
	draw('*',25);
	
	// ----------------------------------Airline Selection Start-------------------------
	
	// Airlines Type
	pack3_air_type: // Reselection of type
	cout<<"\n\n Type of airline: \n 1) Low cost \n 2) Budget \n 3) High end \n";
	cout<<"\n Please enter number 1-3 to choose the type of airline: ";
	pack.Airline_Type();	 // Stores airline type
	
	// ALl possible cases within each airline
	switch(pack.Return_Airline_Type()) 
	{
		// Low Cost Airline
		case 1: cout<<"\n In Low Cost Airline, only Economy Class is available for Rs. ";
				cout<<"5000. To choose Economy Class, enter 1 or to choose another ";
				cout<<"airline type, enter 2: ";
				pack3_air_choice1: // Reselection of choice
				cin>>choice;
				
				if (choice == 1)
				{
					pack.LowCost_Airline_Price(); // Price of airline (1 seat)
				}
				
				else if (choice == 2)
				{
					goto pack3_air_type; // Reselection of airline type
				}
				
				else 
				{
					cout<<"\n Please enter 1 or 2: ";
					goto pack3_air_choice1; // Reselection of choice
				}
				
				break;
		
		// Budget Airline		
		case 2: cout<<"\n In Budget Airline, only Economy Class is available for Rs. 10000. ";
				cout<<"To choose Economy Class, enter 1 or to choose another airline ";
				cout<<"type, enter 2: ";
				pack3_air_choice2: // Reselection of choice 
				cin>>choice;
				
				if (choice == 1)
				{
					pack.Budget_Airline_Price();	// Price of airline (1 seat)
				}
				
				else if (choice == 2)
				{
					goto pack3_air_type; // Reselection of airline type
				}
			
				else 
				{
					cout<<"\n Please enter 1 or 2: ";
					goto pack3_air_choice2; // Reselection of choice
				}
				
				break;
		
		// High end Airline		
		case 3: cout<<"\n In High End Airline, only First Class is available for Rs. 25000. ";
				cout<<"To choose Business Class, enter 1 or to choose another airline ";
				cout<<"type, enter 2: ";
				pack3_air_choice3: // Reselection of choice
				cin>>choice;
				
				if (choice == 1)
				{
					pack.HighEnd_Airline_Price(); // Price of airline (1 seat)
				}
				
				else if (choice == 2)
				{
					goto pack3_air_type; // Reselection of airline type
				}
			
				else 
				{
					cout<<"\n Please enter 1 or 2: ";
					goto pack3_air_choice3; // Reselection of choice
				}
				
				break;
				
		default: cout<<"\n Incorrect Selection. ";
				 goto pack3_air_type; // Reselection of airline type
	}
	
	// ----------------------------------Airline Selection End-------------------------------

	
	cout<<endl<<" ";
	draw('*',25);
	
	// ----------------------------------Hotel Selection Start-------------------------------

	
	cout<<"\n\n Type of Hotel (Occupancy is 2 per room): \n 1) Cheap \n 2) Budget \n 3) High end \n";
	pack3_hotel_type: // Reselection of hotel type
	cout<<"\n Please enter number 1-3 to choose the type of hotel: ";
	pack.Hotel_Type();	 // Stores airline type
	
	// All possible cases with hotels 
	switch(pack.Return_Hotel_Type())
	{	
		// Cheap Hotel
		case 1: cout<<"\n In Cheap Hotel, there is only one type of room available for Rs. ";
				cout<<"1000 per night. To choose the room, enter 1 or to choose another ";
				cout<<"hotel type, enter 2: ";
				pack3_hotel_choice1: // Reselection of choice
				cin>>choice;
				
				if (choice == 1)
				{
					pack.Cheap_Hotel_Price();  // Price of hotel (1 room)
				}
				
				else if (choice == 2)
				{
					goto pack3_hotel_type; // Reselection of hotel type
				}
				
				else 
				{
					cout<<"\n Please enter 1 or 2: ";
					goto pack3_hotel_choice1; // Reselection of choice
				}
		
				break;
		
		// Budget Hotel		
		case 2: cout<<"\n In Budget Hotel, we have one big room available for Rs. 2000 ";
				cout<<"per night. To choose the big room, enter 1 or to choose another ";
				cout<<"hotel type, enter 2: ";
				pack3_hotel_choice2: // Reselection of choice
				cin>>choice;
				
				if (choice == 1)
				{
					pack.Budget_Hotel_Price();	// Price of hotel (1 room)
				}
				
				
				else if (choice == 2)
				{
					goto pack3_hotel_type;  // Reselection of hotel type
				}
			
				else 
				{
					cout<<"\n Please enter 1 or 2: ";
					goto pack3_hotel_choice2; // Reselection of choice
				}
				
				break;
		
		// High end Hotel		
		case 3: cout<<"\n In High End Hotel, we have only one big room option available for ";
				cout<<"Rs. 2500 per night. To choose the big room, enter 1 or to choose ";
				cout<<"another hotel type, enter 2: ";
				pack3_hotel_choice3: // Reselection of choice
				cin>>choice;
				
				if (choice == 1)
				{
					pack.HighEnd_Hotel_Price();	// Price of hotel (1 room)
				}
				
				else if (choice == 2)
				{
					goto pack3_hotel_type; // Reselection of hotel type
				}
			
				else 
				{
					cout<<"\n Please enter 1 or 2: ";
					goto pack3_hotel_choice3; // Reselection of choice
				}
				
				break;
				
		default: cout<<"\n Incorrect Selection. ";
				 goto pack3_hotel_type; // Reselection of hotel type
	}
	
	// ----------------------------------Hotel Selection End--------------------------------

	
	pack.Duration();	// No. of Days of Stay
	
	pack.Total_Duration_Cost();	// Duration price for all poeple
	
	pack.Total_Airline_Price();	// Total price of airline for all people
	
	pack.Total_Hotel_Price();	// Total price of hotel for all people
	
	pack.Total_Cost();	// Total price for all people (Airline + Hotel + Duration)
	
}
