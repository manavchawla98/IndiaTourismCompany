/* Written by:	Manav Chawla

	Objective -	Package Selection

*/

#include<iostream>

using namespace std;

int Pack_Sel()
{
	// ---------------Package Selection---------------	
	cout<<"  1. Kashmir \n";
	cout<<"  2. Rajasthan \n";
	cout<<"  3. Kerala \n";
	cout<<"  4. Andaman \n";
	cout<<"  5. Ooty \n";
	cout<<"  6. Goa \n\n";

	cout<<" Enter the name of the place to know more: ";
	cin>>place;

	char place1[] = "kashmir", place2[] = "rajasthan", place3[] = "kerala";
	char place4[] = "andaman", place5[] = "ooty", place6[] = "goa";
	
	cout<<endl<<endl;
	
	if (strcmpi(place,place1) == 0)
	{
		pack_num = 1;
		Kash();
	}
		
	if (strcmpi(place,place2) == 0)
	{
		pack_num = 2;
		Raj();
	}
		
	if (strcmpi(place,place3) == 0)
	{
		pack_num = 3;
		Ker();
	}
		
	if (strcmpi(place,place4) == 0)
	{
		pack_num = 4;
		And();
	}	

	if (strcmpi(place,place5) == 0)
	{
		pack_num = 5;
		Ooty();
	}	
	
	if (strcmpi(place,place6) == 0)
    {
		pack_num = 6;
		Goa();
	}   
}

