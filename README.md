# ROT-13-Encryption
##
## Project Summary:
A C++ program that asks the user for the name of an input file and translates the contents of that input file using ROT13.

**ROT13 ("rotate by 13 places", ROT-13)** is a simple letter substitution cipher that replaces a letter with the 13th letter after it, in the alphabet.

## Downloading and installing C++ :
Download Visual C++ 2017 community : A free Windows C++ compiler by Microsoft.

Download DEV C++ 5.11

Click on Source Forge to go to a list of download sites and pick one. The file will be something like devcpp4.9.9.2_setup.exe.

When the download is complete, click on the "open" button to start the installation process. A screen will pop up to select the language and agree to the license terms. 

Follow the instructions, accept the suggested location for installation(unless you want to change), and finish the installation.

## Running the program :
 
**Step 1:** Configure Dev-C++. We need to modify one of the default settings to allow us to use the debugger with our programs.
##
**Step 2:** Create a new project. A "project" can be considered as a container that is used to store all the elements that are required to compile a program.
## 
**Step 3:** Create/add source file(s).
## 
**Step 4:** Compile.
## 
**Step 5:** Execute. You can now run your program. 
## 
**Step 6:** Debug.
##
(YouTube tutorials will be a great help if you encounter some problems while installing and configuring DEV C++).

## ROT13 Program description 
The program first prompts the user to enter the name of the file whose contents they are willing to replace using ROT13. It then opens the file and reads the content 
of the file.  By using a nested loop, it  goes through every character in the file, checks if the character is alphabet and if it is, it replaces it with the 13th letter 
after the alphabet. After replacing each and every character and letting the numbers(if any) be as it is, it writes the output/encrypted content into an output file. 
The user can name the output file as their wish.

![picture](ROT13.png)


By using the same logic, the encrypted content can be changed back to the original content and saved to another output file.
##

## Use of each header files, library, objects, and loops in the program :
**#include** is a preprocessor directive that tells the preprocessor to include header files in the program. < > indicate the start and end of the file name to be included.
##
**#include iostream-**        iostream is a header file that contains functions for input/output operations.
##
**#include string-**            To use the string data type, string header file is needed.
##
**#include fstream -**    fstream is required for file(input/output) processing in C++
##
**#include cctype -**      cctype header file declares a set of functions to classify (and transform) individual                                                         characters.
 ##
**using namespace std;**    std is a C++ namespace for many pieces of functionality that are provided in standard C++ libraries
##
**ofstream :** Stream class to write on files.
 
**ifstream :** Stream class to read from files.
##
**cin** is an object of the input stream and is used to take input from input streams like files, console, etc.
**cout** is an object of the output stream that is used to show output. 
 Basically, cin is an input statement while cout is an output statement.

##


    
      while(infile)     
               {
   	  for(int i =1;i<=13;i++)   
   	 { 
   	  if(isalpha(eachChar))        
   	   {
   		    if(eachChar=='Z')
   		         eachChar='A';
   		    
   		    else if(eachChar=='z')
   		         eachChar='a' ;
   		    else
			  eachChar++;       	
	 }
   	 outfile << eachChar;       
   	 infile.get(eachChar);      
    }
    	infile.close();      //Closes the input file
	outfile.close();         // Closes the output file
     return 0;
         }
##

The while loop **above** is used to read each and every character from the file. Then, there is a for loop to increase the counter every time. It  goes through every character in the file, checks if the character is alphabet and if it is, it replaces it with the 13th letter after the alphabet.

##

## THANK YOU !

##
