/*  Written by: Manav Chawla

	

*/

#include<iostream>
#include<fstream>

#include<string.h>
using namespace std;

extern int pack_num, choice;

class Airlines
{
	float air_type, air_price;
	char air_class[8];
	
	public:
		
		void Airline_Type()		// Stores airline type
		{
			cin>>air_type;
		}
		
		void LowCost_Airline_Price()	// Sets the price for low cost airlines
		{
			// Only Economy class available
			strcpy(air_class,"Economy");
			
			if(pack_num == 1)
			{			
				air_price = 15000;	// Price of airline (1 seat)
			}
			
			if(pack_num == 2)
			{			
				air_price = 10000;	// Price of airline (1 seat)
			}
			
			if(pack_num == 3)
			{			
				air_price = 5000;	// Price of airline (1 seat)
			}
			
			if(pack_num == 4)
			{			
				air_price = 17500;	// Price of airline (1 seat)
			}
			
			if(pack_num == 5)
			{			
				air_price = 12500;	// Price of airline (1 seat)
			}
			
		}
		
		void Budget_Airline_Price()		// Sets the price for budget airlines	
		{
			// For Economy class 
			if(choice == 1)
			{
				strcpy(air_class,"Economy");
			
				if(pack_num == 1)
				{			
					air_price = 20000;	// Price of airline (1 seat)
				}
				
				if(pack_num == 3)
				{			
					air_price = 10000;	// Price of airline (1 seat)
				}
				
				if(pack_num == 5)
				{			
					air_price = 15000;	// Price of airline (1 seat)
				}
				
				if(pack_num == 6)
				{			
					air_price = 25000;	// Price of airline (1 seat)
				}
			}
			
			// For Business class 
			if(choice == 2)
			{
				strcpy(air_class,"Business");
			
				if(pack_num == 1)
				{			
					air_price = 30000;	// Price of airline (1 seat)
				}
				
				if(pack_num == 2)
				{			
					air_price = 20000;	// Price of airline (1 seat)
				}
				
				if(pack_num == 4)
				{			
					air_price = 40000;	// Price of airline (1 seat)
				}	
				
				if(pack_num == 5)
				{				
					air_price = 20000;	// Price of airline (1 seat)
				}
				
				if(pack_num == 6)
				{			
					air_price = 30000;	// Price of airline (1 seat)
				}
			}
		}
		
		void HighEnd_Airline_Price()	// Sets the price for high end airlines
		{
			// Only First class available
			strcpy(air_class,"First");
			
			if(pack_num == 2)
			{			
				air_price = 30000;	// Price of airline (1 seat)
			}
			
			if(pack_num == 3)
			{			
				air_price = 25000;	// Price of airline (1 seat)
			}
			
			if(pack_num == 4)
			{			
				air_price = 50000;	// Price of airline (1 seat)
			}
			
			if(pack_num == 6)
			{			
				air_price = 45000;	// Price of airline (1 seat)
			}
		}
		
		int Return_Airline_Type()	// Returns the value of airline type
		{
			return air_type;
		}
		
		int Return_Airline_Price()
		{
			return air_price;
		}
};

class Hotels
{
	float hotel_type, hotel_price;
		
	public:
		
		void Hotel_Type()		// Stores hotel type
		{
			cin>>hotel_type;
		}
			
		void Cheap_Hotel_Price()
		{
			// Only one type of room is available
				
			if(pack_num == 2)
			{			
				hotel_price = 800;	// Price of hotel (1 room)
			}
				
			if(pack_num == 3)
			{			
				hotel_price = 1000;	// Price of hotel (1 room)
			}
				
			if(pack_num == 4)
			{			
				hotel_price = 1500;	// Price of hotel (1 room)
			}
				
			if(pack_num == 6)
			{			
				hotel_price = 900;	// Price of hotel (1 room)
			}
		}
			
		void Budget_Hotel_Price()
		{
			// For smaller room
			if(choice == 1)
			{
				if(pack_num == 1)
				{			
					hotel_price = 1150;	// Price of hotel (1 room)
				}
				
				if(pack_num == 2)
				{			
					hotel_price = 1200;	// Price of hotel (1 room)
				}
				
				if(pack_num == 4)
				{			
					hotel_price = 2000;	// Price of hotel (1 room)
				}
					
				if(pack_num == 5)
				{			
					hotel_price = 1000;	// Price of hotel (1 room)
				}	
			}
				
			// For bigger room
			if(choice == 2)
			{
				if(pack_num == 1)
				{			
					hotel_price = 1750;	// Price of hotel (1 room)
				}
					
				if(pack_num == 3)
				{			
					hotel_price = 2000;	// Price of hotel (1 room)
				}
					
				if(pack_num == 4)
				{			
					hotel_price = 2500;	// Price of hotel (1 room)
				}
					
				if(pack_num == 5)
				{			
					hotel_price = 1500;	// Price of hotel (1 room)
				}
					
				if(pack_num == 6)
				{			
					hotel_price = 2500;	// Price of hotel (1 room)
				}
			}
		}
			
		void HighEnd_Hotel_Price()
		{
			// Only one type of room is available
			if(pack_num == 1)
			{			
				hotel_price = 2500;	// Price of hotel (1 room)
			}
			
			if(pack_num == 2)
			{			
				hotel_price = 1800;	// Price of hotel (1 room)
			}
				
			if(pack_num == 3)
			{			
				hotel_price = 2500;	// Price of hotel (1 room)
			}
				
			if(pack_num == 5)
			{			
				hotel_price = 2000;	// Price of hotel (1 room)
			}
				
			if(pack_num == 6)
			{			
				hotel_price = 3500;	// Price of hotel (1 room)
			}
		}
			
		int Return_Hotel_Type()	// Returns the value of hotel type
		{
			return hotel_type;
		}
		
		int Return_Hotel_Price()
		{
			return hotel_price;
		}
};

class Packages: public Airlines, public Hotels
{
	int adult, child, dur;
    int people, div;
	float total, dur_price, ta_price, th_price;
	
	public:
		
		void No_of_People()	// Stores the value
		{
			cout<<"\n No. of Adults (12 years old and above): ";
			cin>>adult;

			cout<<"\n No. of Children (5-12 years old): ";
			cin>>child;
			
			people = child + adult; // Total no of people 	
		}
		
		void Duration()
		{
			cout<<"\n No. of Days of your Stay: ";
			cin>>dur;  // No. of days of duration
		}
	
	//-------------------Start of functions to calculate Total Cost-----------------------
		
		// Total price of airline for all people
		void Total_Airline_Price()
		{
			ta_price = (Return_Airline_Price()) * Return_No_of_People(); 
		}
		
		void Total_Hotel_Price()
		{
			div = (Return_No_of_People() ) % 2;
			
			//If even no of people are there
			if ( div == 0)
			{
				div = (Return_No_of_People() )/ 2;
				// Total price of hotel for all people
				th_price = div * (Return_Hotel_Price()) * (Return_No_of_Days()); 
			}
				
			//If odd no of people are there
			else
			{
				div = ((Return_No_of_People() )/ 2) + 1;
				// Total price of hotel for all people
				th_price = div * (Return_Hotel_Price()) * (Return_No_of_Days()); 
			}
		}
		
		void Total_Duration_Cost()	
		{
			if(pack_num == 1)
			{
				dur_price = ((dur * 250) + 10000) * people; // Duration price for all poeple 
			}
			
			if(pack_num == 2)
			{
				dur_price = ((dur * 300) + 15000) * people; // Duration price for all poeple 
			}
			
			if(pack_num == 3)
			{
				dur_price = ((dur * 150) + 12500) * people; // Duration price for all poeple 
			}
			
			if(pack_num == 4)
			{
				dur_price = ((dur * 400) + 20000) * people; // Duration price for all poeple 
			}
			
			if(pack_num == 5)
			{
				dur_price = ((dur * 200) + 8000) * people; // Duration price for all poeple 
			}
			
			if(pack_num == 6)
			{
				dur_price = ((dur * 400) + 14000) * people; // Duration price for all poeple 
			}
		}
		
		// Total price for all people (Airline + Hotel + Duration)
		void Total_Cost()
		{
			total = ta_price + th_price + dur_price; 
		}
		
	//-----------------End of functions to calculate Total Cost--------------------------
	
	//-----------------Start of functions to Return Values-------------------------------

		
		int Return_No_of_Adults()
		{
			return adult;
		}
		
		int Return_No_of_Children()
		{
			return child;
		}
		
		int Return_No_of_People()
		{
			return people;
		}
		
		int Return_No_of_Days()
		{
			return dur;
		}
		
		int Return_Total_Airline_Price()
		{
			return ta_price;
		}
		
		int Return_Total_Hotel_Price()
		{
			return th_price;
		}
		
		int Return_Total_Duration_Cost()
		{
			return dur_price;
		}
		
		int Return_Total_Cost()
		{
			return total;
		}		
	//------------------End of functions to Return Values-----------------------------

}pack;
