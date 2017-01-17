/*  Written by: Manav Chawla

	Objective of File - Welcome Paragraph

*/

int pack_num=0;	// Package number
char place[9];

void WelcomePage()
{
	// -----------------Heading Start-----------------
	cout<<endl;
	spacebar(29);	// Moves cursor 29 charaters to right
	cout<<"India Tourism Company \n";
	spacebar(29);	// Moves cursor 29 charaters to right
	draw('-',21);	// Draws line under the heading
	cout<<endl<<endl;
	// -----------------Heading End-------------------
	
	// -----------------File Start--------------------	
	ifstream fin;	// Created input stream
	fin.open("Welcome Info.dat", ios::in|ios::binary);	// Opening file "Welcome Info"
		
	// Error check in opening file
	if(!fin)
	{
		cout<<"Error";
		exit(0);
	}
	
	char wel_para[202];	// To store the paragraphs from file "Welcome Info"
	
	fin.getline((char*)&wel_para, sizeof (wel_para));	// Puts the paragraphs into the variable
		
	spacebar(5);	// Moves cursor 5 charaters to right
	for (int i=0; i<=201; i++)
	{
		cout<<wel_para[i];
		if(i==115)
		{
			timelen(1000000);	//Pause of 0.001 second
			cout<<endl<<endl;
			spacebar(5);	// Moves cursor 5 charaters to right
		}
		timelen(20000000);	//Pause of 0.02 second
		
		if(i==73 || i==186)
		{
			cout<<endl;
			spacebar(5);	// Moves cursor 5 charaters to right
		}	
	}
	
	cout<<endl<<endl;
	
	fin.close(); 	// File closed
	// -----------------File End----------------------
}
