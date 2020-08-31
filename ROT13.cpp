//****************************************************************************************************************************
// Programming Project 4 - Apeksha Dahal
// A C++ program that asks the user for the name of an input file and translates the contents of that input file using ROT13. 
//This program outputs the translation into a secondary file with a “.rot13” file extension.
//It also then decrypts the translated code into original content.
//******************************************************************************************************************************



//Header files
#include <iostream>
#include <string>
#include <fstream>    //To read and write input and output files
#include <cctype>  

using namespace std;

int main ()
{
	ifstream infile; 
	ofstream outfile;
	
	string inputfile;
	
	
	cout << "Enter the name of the input file : " ; // NAME OF THE INPUT FILE = input.txt
	cin >> inputfile ;    //Takes in the name of the input file from the user
	cout << endl;
	
	
	infile.open(inputfile.c_str());   //Opens the input file that user entered
	outfile.open("outputrot13.txt");
   
    char eachChar;    //Defines the variable eachChar as character
    infile.get(eachChar);
    
    cout << "Encrypted content using ROT13 :" <<endl;
    
    while(infile)    //Loop to repeat the same condition for every character in the input file
   
    {
   	
   	 for(int i =1;i<=13;i++)  // Increments the value of each character of the input file by 13
   	 { 
   	 
   	 if(isalpha(eachChar))     // Checks if it is alphanumeric character and executes the statement below if its true
   	   {
   		    if(eachChar=='Z')
   		      eachChar='A';
   		    
   		    else if(eachChar=='z')
   		      eachChar='a';
   		    else
			  eachChar++;      //eachChar= eachChar + 1
	   }
   	 	
	 }
   	  
   	 cout << eachChar;
   	 outfile << eachChar;      // Writes the translated content into the output file
   	 infile.get(eachChar);     //Gets each character from the input file 
    }
    
    
	infile.close();     //Closes the input file
	outfile.close();    //Closes the output file
	
	
	//For decryption :
	ifstream indata;
	indata.open("outputrot13.txt");     // Opens the previous output file as input file now
	
	char everyChar;    //Defines a new variable everyChar 
    indata.get(everyChar);     //Gets every character from the file
    
    cout << endl;
    cout << "Original content(decrypted) :" <<endl;
    
    
    while(indata)     // Loop to repeat the same condition for every character of the input file 
   
    {
   	
   	 for(int i =1;i<=13;i++) // Since, there are 26 alphabets, the condition for decyrption can remain the same as previous one. 13+13
   	 { 
   	 
   	 if(isalpha(everyChar))
   	   {
   		    if(everyChar=='Z')
   		      everyChar='A';
   		    
   		    else if(everyChar=='z')
   		      everyChar='a';
   		    else
			  everyChar++;
	   }
   	 	
	 }
   	  
   	 cout << everyChar;   //Prints the original content
   	 indata.get(everyChar);   
    }
	
	indata.close(); //Closes the file
	
return 0;

}
