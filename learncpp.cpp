	    /********************************************************************************
	     *						 Made by Chris 										    *
	     *				    	 Started 2/11/23										*
	     *				    	  Finished TBD											*
	     *																				*					
	     *																				*
	     *			Made so people newer to c++ can learn easier			            *  
	     *											                                    *									
	     ********************************************************************************/

#include <iostream>
#include <vector>

// std::count = standard output
// <<name; - "<<" displays something. 

// "\n" = "\n" is a way to end the line being displayed and go to the next line.
// 	Ex: << "Hello" << name << '\n';


// Part 1 and 2 - basic data types and variables. And const

	// // Int = whole number
	// Ex: int age = 14;

	// // double = numbers with decimal portion
	// Ex: double price = 9.99;

	// // Char = single Charecter
	// Ex: Char grade = 'A';
	
	// Bool = True or false
	// Ex: bool student = false;

	// String = sequence of text
	// Ex: std::string name = "Chris";

	// Const = a keyword that will modify a variable, or some value so that it is read only and cant be changed.
	// Ex: 
    const double PI = 3.14;
    const int LIGHT_SPEED_MPH = 670616629;



// Part 3 - Namespace

	// A "Namespace" provides a solution for preventing name conflicts
	// in large projects. each entity needs a unique name. A namespace
	// allows for identically named entities as long as the namespaces
	// are different.

	// Ex:
		

		#include <iostream>

		namespace first{
	   	 int x = 1;
		}
	
		namespace second{
	  	  int x = 2;
		}
	
		int main() {
	
		    int x = 0;
	
		return 0;

		}

		// // std::cout << x;		OR		std::cout << first::x;
		// 					std::cout << second::x;
		
	
	
	
					// OR
		
		namespace first{
	   	 int x = 1;
		}
	
		namespace second{
	  	  int x = 2;
		}	
		
		int main() {
		    using namespace second;
		
		    std::cout << x;
			
		    return 0;
		}


// Part 4 - Typedef and type aliases 

	// Typedef = reserved keyword used to create an additional 
	// name (alias) for another data type. New identifier for 
	// an existing type helps with readability and reduces typos.
		
	// Easy Ex:
		
		#include <iostream>
		#include <vector>

		
		//typedef std::string text_t;
		//typedef int number_t
		using text_t = std::string;
		using number_t = int;


		int main(){
				
		     text_t firstName = "Chris";
		     number_t age = 14;
		     
		     std::cout << firstName << '\n';
		     std::cout << age << '\n';		
		     
		     return 0;
		
		}


// Advanced Ex:
		#include <iostream>
		#include <vector>

		
		typedef std::vector<std::pair<std::string, int>> pairlist_t;

		int main(){
				
		     pairlist_t pairlist;
		
		
		
		
		     return 0;
		}



// Part 5 - Arithmetic operators


	// Arithmetic oporators = return the result of a specific
	// 		       arithmetic operation (+ - * /)

// int remainder = students % 2; this finds the remainder of a division equastion.

// DOES NOT USE STANDARD ORDER OF OPORATIONS!
// c++ order of oporations - parenthesis, multiplication, division, addtion, subtraction.



		int main(){
		    
		    int students = 6 - 5 + 4 * 3 / 2;
		    
		    // students = students + 1;
		    // students+=1;
			// students++;
			
			// students = students - 1;
			// students-=;
			// students--;

			// students = students * 2;
			// students*=2;
			
			// students = students / 2;
			// students/=2;

		    std::cout << students;
		    
		     return 0;
		
		}



// Part 6 - Type conversion
		// Conversion of a value of one data type to another
		// Implicit = automation
		// Explicit = Precede value with new data type (int)

		int main(){
		    
			// double x = (int) 3.14;
			// char x = 100;

			int correct = 8;
			int questions = 10;
		    double score = correct/ (double) questions * 100;

			std::cout <<score << "%";
			
		     return 0;
		
		}


// Part 7 - User input
			// cout << (insertion operator)
			// cin >> (extraction operator)

		int main(){
		    
			std::string name;
			int age;

			std::cout << "Whats your first and last name?: ";
			std::getline(std::cin >> std::ws, name);

			std::cout <<"Whats your age?";
			std::cin >> age;

			std::cout <<"Hello " << name << '\n';
			std::cout <<"You are " << age << " years old.";

		     return 0;
		
		}

#include <iostream>
#include <cmath>

// Part 8 - Useful math related functions

		int main(){
		    
		double x = 3.14;
		double y = 7;
		double z;

		// z = std::max(x, y);
		// z = std::min(x, y);
		// z = pow(2, 3);
		// z = sqrt(9);
		// z = abs(-3);
		// z = round(x);
		// z = ceil(x);
		// z = floor(x);


		std::cout << z;
			
		     return 0;
		
		}

#include <iostream>
#include <cmath>

// Part 9 - Hypotenuse calculator practice program

		int main(){
		    
		double a;
		double b;
		double c;


		std::cout << "Enter side A:";
		std::cin >> a;

		std::cout <<"Enter size B";
		std::cin >> b;

		a = pow(a, 2);
		b = pow(b, 2);
		c = sqrt(a + b);

		std::cout << "side C: " << c;

		     return 0;
		
		}

#include <iostream>


// Part 10 - if statements
		// If statements do something if a condition is true.
		// if not, then they dont do it.


		int main(){
			
			int age;

			std::cout <<"Enter your age: ";
			std::cin >> age;

			if(age >= 18 ){
				std::cout << "Welcome to the site!";
			}

			if(age < 18 ){
				std::cout << "You Must be 18+ to enter!";
			}

		     return 0;
		
		}


// Part 11 - Switches
		// A "switch" is an alternative to using many "else if" statements
		// compare one value againt matching cases.

#include <iostream>

		int main()
		{
			
		int month;
		std::cout << "Enter the month (1-12): ";
		std::cin >> month;
// Ex: 1
		switch(month){
			case 1:
				;std::cout << "It is janurary";
				break;
			case 2:
				std::cout << "It is feburary";
				break;
			case 3:
				std::cout << "It is march";
				break;
			case 4:
				std::cout << "It is april";
				break;
			case 5:
				std::cout << "It is may";
				break;
			case 6:
				std::cout << "It is june";
				break;
			case 7:
				std::cout << "It is july";
				break;
			case 8:
				std::cout << "It is august";
				break;
			case 9:
				std::cout << "It is september";
				break;
			case 10:
				std::cout << "It is october";
				break;
			case 11:
				std::cout << "It is november";
				break;
			case 12:
				std::cout << "It is december";
				break;
		
			default:
				std::cout <<"Please enter in only numbers (1-12)";
			
			}

		     return 0;
		
		}


// Ex:2

#include <iostream>

		int main()
		{

		char grade;

		std::cout << "What letter grade?: ";
		std::cin >> grade;

		switch(grade){
			case 'A':
				std::cout <<"You did great!";
			break;

			case 'B':
				std::cout << "you did good";
				break;

			case 'C':
				std::cout << "you did alright";
				break;

			case 'D':
				std::cout << "you could do better";
				break;

			case 'E':
				std::cout << "How did you fail?";
				break;

			default:
			std::cout <<"Please enter a letter grade from (A - E)";

		}

		     return 0;
		
		}


// Part 12 - console calculator



#include <iostream>

	int main()
	{

		char op;
		double num1;
		double num2;
		double result;


		std::cout << "********************** CALCULATOR **********************\n";

		std::cout << "Enter either (+ - * /):";
		std::cin >> op;
		
		std::cout << "Enter #1: ";
		std::cin >> num1;
		
		std::cout << "Enter #2: ";
		std::cin >> num2;

		switch (op){
			case '+':
				result = num1 + num2;
				std::cout << "result: " << result << '\n';
				break;

			case '-':
				result = num1 - num2;
				std::cout << "result: " << result << '\n';
				break;
				
			case '*':
				result = num1 * num2;
				std::cout << "result: " << result << '\n';
				break;

			case '/':
				result = num1 / num2;
				std::cout << "result: " << result << '\n';
				break;
			default:
				std::cout <<"That wasn't a valid operator. \n ";
				break;
		}

		std::cout << "********************************************************";

		     return 0;
		
		}


// Part 13 - Ternary operator
		// A "tenary operator" ?: is a replacement to an if/else 
		// statement condition ? expression1 : experssion2

#include <iostream>


	int main()
	{
		// int grade = 75;

		//  grade >= 60 ? std::cout << "you pass!" : std::cout << "you fail!";

		// int number = 9;
		// number % 2 == 1 ? std::cout << "ODD" : std::cout << "EVEN";


// value can be true or false
		bool hungry = true;

		// hungry ? std::cout << "Your are hungry" : std::cout << "You are full" ;

		std::cout << hungry ? "You are hungry" : "You are full";

		     return 0;
		
		}


// Part 14 - Logical Operators
// 		&& = check if two condition are true
// 		|| = check if at least one of two conditions is true
// 		!  = reverses the logical state of its operand

#include <iostream>

	int main()
	{
		int temp;

		std::cout <<"Enter the temperature: ";
		std::cin >> temp;

		if(temp > 0 && temp < 30 )


		     return 0;
		
		}



