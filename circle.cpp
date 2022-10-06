#include <iostream>
	using namespace std;
		int main() {
			double radius;
			cout << "Enter the radius of a circle to calculate it's area & circumference: " ;
			cin >> radius ;

			if (radius > 0)
				cout << "Calculating with a radius of: " << radius << endl;
				

			else { 
				 cout << "Not a valid number, try again later." ;
					 return 0;
		
			}

		double area = radius * radius * 3.14159265358979323846;
		double circumference = 2 * radius * 3.14159265358979323846;

		cout << "Your area is: " << area << endl;
		cout << "Your circumference is: " << circumference;

		return 0; 	
		}

