/*
Precious Idehen
 06-mar-19
 cs203 - Computer Programming I
 
 program: this program calculates the sum, difference or 
 		  product of two random numbers, by asking the user 
 		  to choose an option from a list of menu. If the 
 		  user enters an option not on the menu, it prints
 		  an error message and then go back to the menu 
 		  options. After the user has picked an option let say 
 		  option 1 which is addition it displays two random 
 		  numbers to be added and then it ask the user to enter 
 		  an answer. If the input entered  by the user tallys 
 		  with the answer calculated by the program, it prints
 		  out a congratulation message else it is wrong it prints 
 		  out incorrect answer and the correct answer to the problem.
          
          
 Dictionary: variable name used;
             num1;
             num2;
             answer;
             input;
             option;
             
             
			 
 Design: *****Raptor flow chat*****.







*/









#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>

using namespace std;
int main() {
	
	int num1, num2, answer, input, option;  //declaration of variables
	
	
	do {
		srand(time(0));
		num1 = rand()%(50 - 10 + 1) + 10;
		num2 = rand()%(50 - 10 + 1) + 10;
		
		cout<<"*****menu*****"<<endl;
		cout<<"1. Addition"<<endl;
		cout<<"2. Subtraction"<<endl;
		cout<<"3. Multiplication"<<endl;
		cout<<"4. Quit"<<endl;
		
		cout<<"Enter an option on the menu base on the index value: ";
		cin>>option;
		
		//choices base on the menu
		if(option >= 1 and option <= 4) {
			
		
			if(option == 1) {
				
			
				cout<<"\nEnter the sum of the following numbers:"<<endl;
				cout<<"  " << num1 << endl;
				cout<<"+ " << num2 << endl;
				cout<<"  __\n  ";
				cin>>input;
				answer = num1 + num2;
				
				//comparing users input and answer
				if(input == answer) {
					cout<<"congratulations!!! "<<input<<" is the correct answer"<<endl;
					cout<<"\n";
				
				}
				else {
					cout<<"incorrect answer!!!"<<endl;
					cout<<"the correct answer is: "<<answer<<endl;
					cout<<"\n";
				}
				
			}
			else if(option == 2) {
				cout<<"\nEnter the difference of the following numbers:"<<endl;
				cout<<"  " << num1 << endl;
				cout<<"- " << num2 << endl;
				cout<<"  __\n  ";
				answer = num1 - num2;
				cin>>input;
				
				//comparing users input and answer
				if(input == answer) {
					cout<<"congratulations!!! "<<input<<" is the correct answer"<<endl;
					cout<<"\n";
				
				}
				else {
					cout<<"incorrect answer!!!"<<endl;
					cout<<"the correct answer is: "<<answer<<endl;
					cout<<"\n";
				}
				
			
			}
			else if(option == 3) {
			
				cout<<"\nEnter the product of the following numbers:"<<endl;
				cout<<"  " << num1 << endl;
				cout<<"* " << num2 << endl;
				cout<<"  __\n  ";
				answer = num1 * num2;
				cin>>input;
				
				//comparing users input and answer
				if(input == answer) {
					cout<<"congratulations!!! "<<input<<" is the correct answer"<<endl;
					cout<<"\n";
				
				}
				else {
					cout<<"incorrect answer!!!"<<endl;
					cout<<"the correct answer is: "<<answer<<endl;
					cout<<"\n";
				}
				
			}
			else if(option == 4) {
				
				cout<<"\nExisting! Goodbye..."<<endl;
			}
		
		}
		if(option < 1 or option > 4) // input validation
			cout <<"\nError 404! Invalid option!!.\n"<<endl;
	} while(option != 4);	//sentinel value	
		
	return 0;
}
/*
***********Test case 1***********
*****menu*****
1. Addition
2. Subtraction
3. Multiplication
4. Quit
Enter an option on the menu base on the index value: 1

Enter the sum of the following numbers:
  20
+ 16
  __
  36
congratulations!!! 36 is the correct answer

*****menu*****
1. Addition
2. Subtraction
3. Multiplication
4. Quit
Enter an option on the menu base on the index value: 4

Existing! Goodbye...

--------------------------------
Process exited after 36.38 seconds with return value 0
Press any key to continue . . .

***********test case 2***********
*****menu*****
1. Addition
2. Subtraction
3. Multiplication
4. Quit
Enter an option on the menu base on the index value: 1

Enter the sum of the following numbers:
  19
+ 26
  __
  34
incorrect answer!!!
the correct answer is: 45

*****menu*****
1. Addition
2. Subtraction
3. Multiplication
4. Quit
Enter an option on the menu base on the index value: 4

Existing! Goodbye...

--------------------------------
Process exited after 54.91 seconds with return value 0
Press any key to continue . . .

***********test case 3***********
*****menu*****
1. Addition
2. Subtraction
3. Multiplication
4. Quit
Enter an option on the menu base on the index value: 2

Enter the difference of the following numbers:
  10
- 31
  __
  -21
congratulations!!! -21 is the correct answer

*****menu*****
1. Addition
2. Subtraction
3. Multiplication
4. Quit
Enter an option on the menu base on the index value: 2

Enter the difference of the following numbers:
  15
- 44
  __
  32
incorrect answer!!!
the correct answer is: -29

*****menu*****
1. Addition
2. Subtraction
3. Multiplication
4. Quit
Enter an option on the menu base on the index value: 4

Existing! Goodbye...

--------------------------------
Process exited after 42.7 seconds with return value 0
Press any key to continue . . .

***********test case 4***********
*****menu*****
1. Addition
2. Subtraction
3. Multiplication
4. Quit
Enter an option on the menu base on the index value: 3

Enter the product of the following numbers:
  48
* 49
  __
  123
incorrect answer!!!
the correct answer is: 2352

*****menu*****
1. Addition
2. Subtraction
3. Multiplication
4. Quit
Enter an option on the menu base on the index value: 3

Enter the product of the following numbers:
  33
* 33
  __
  1089
congratulations!!! 1089 is the correct answer

*****menu*****
1. Addition
2. Subtraction
3. Multiplication
4. Quit
Enter an option on the menu base on the index value: -3

Error 404! Invalid option!!.

*****menu*****
1. Addition
2. Subtraction
3. Multiplication
4. Quit
Enter an option on the menu base on the index value: 4

Existing! Goodbye...

--------------------------------
Process exited after 60.35 seconds with return value 0
Press any key to continue . . .

***********test case 5***********
*****menu*****
1. Addition
2. Subtraction
3. Multiplication
4. Quit
Enter an option on the menu base on the index value: 5

Error 404! Invalid option!!.

*****menu*****
1. Addition
2. Subtraction
3. Multiplication
4. Quit
Enter an option on the menu base on the index value: 4

Existing! Goodbye...

--------------------------------
Process exited after 27.26 seconds with return value 0
Press any key to continue . . .

***********test case 6***********
*****menu*****
1. Addition
2. Subtraction
3. Multiplication
4. Quit
Enter an option on the menu base on the index value: 1

Enter the sum of the following numbers:
  31
+ 35
  __
  66
congratulations!!! 66 is the correct answer

*****menu*****
1. Addition
2. Subtraction
3. Multiplication
4. Quit
Enter an option on the menu base on the index value: 2

Enter the difference of the following numbers:
  39
- 46
  __
  -5
incorrect answer!!!
the correct answer is: -7

*****menu*****
1. Addition
2. Subtraction
3. Multiplication
4. Quit
Enter an option on the menu base on the index value: 3

Enter the product of the following numbers:
  10
* 21
  __
  210
congratulations!!! 210 is the correct answer

*****menu*****
1. Addition
2. Subtraction
3. Multiplication
4. Quit
Enter an option on the menu base on the index value: 4

Existing! Goodbye...

--------------------------------
Process exited after 79.02 seconds with return value 0
Press any key to continue . . .




*/
