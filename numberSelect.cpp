#include <iostream>
using namespace std;


    int main() {
	    int number;
	    int attempts = 0;
	    while (attempts < 5) { //max attempts are 5

	    cout << "Please enter a three digit number that is even AND postive: ";
	    cin >> number;


	    if (number <=99 || number % 2 != 0){	

		    cout << "Try again!" << endl;

		    attempts++; }	//every time an attempt fails, we add one. 										                            
	
	    else {
		    int i = 0;
		    while (i <= number){
			  cout << i << " ";
			 i = i + 2;
		    }   // when an appropriate number is found, it'll print all numbers lower than it starting from zero and adding two
	
		    return 0;
	    }
	   
	    }
 } 
