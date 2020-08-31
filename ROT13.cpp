 
//ROT13 - Apeksha Dahal

#include <iostream>
#include <string>
#include <fstream>     
#include <cctype>  

using namespace std;

int main ()
{
	ifstream infile; 
	ofstream outfile;
	
	string inputfile;
	
	
	cout << "Enter the name of the input file : " ;  
	cin >> inputfile ;     
	cout << endl;
	
	
	infile.open(inputfile.c_str());    
	outfile.open("outputrot13.txt");
   
    char eachChar;     
    infile.get(eachChar);
    
    cout << "Encrypted content using ROT13 :" <<endl;
    
    while(infile)     
    {
   	
   	 for(int i =1;i<=13;i++)   
   	 { 
   	 
   	 if(isalpha(eachChar))      
   	   {
   		    if(eachChar=='Z')
   		      eachChar='A';
   		    
   		    else if(eachChar=='z')
   		      eachChar='a';
   		    else
			  eachChar++;      
	   }
   	 	
	 }
   	  
   	 cout << eachChar;
   	 outfile << eachChar;       
   	 infile.get(eachChar);      
    }
    
    
	infile.close();      
	outfile.close();     
	
	
	//For decryption(reading the content from the encrypted file and translating it into original content in another output file :
	ifstream indata;
	indata.open("outputrot13.txt");      
	
	char everyChar;     
        indata.get(everyChar);      
    
    cout << endl;
    cout << "Original content(decrypted) :" <<endl;
    
    
    while(indata)      
   
    {
   	
   	 for(int i =1;i<=13;i++)  
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
   	  
   	 cout << everyChar;   
   	 indata.get(everyChar);   
    }
	
	indata.close();  
	
return 0;

}
