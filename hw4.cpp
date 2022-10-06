#include <iostream>
using namespace std;

bool isValid(int n){
	if(n > 1000)return true;
	else return false;
}


bool isPrime(int n){
	for(int i = 2; i <= n-1; i++){
		if(n%i == 0)return false;
		else return true;
	}
}

int biggestDigit(int n){

	if(n == 0) return n;
	else{
		int a = n%10;
		int b = biggestDigit(n/10);
		if (a>b) return a;
		else return b;
	}

}

int main(){
	int n, c = 0;
	cout << "Enter an integer greater than 1000: ";
	cin >> n;

	while(!isValid(n)){
		c += 1;
		if(c > 5){
			cout << "Maximum Attempts Reached! Goodbye!";
			return 0;
		}
		cout << "Invalid number!\n" << "Failed Attempts: " << c << "\ Try Again: ";
		cin >> n;
	}

	if(isPrime(n)){
		cout << "The number " << n << " is a prime number." << endl;
	}else{
		cout << "The number " << n << " is NOT a prime number." << endl;
	}

	cout << "The biggest digit in " << n << " is " << biggestDigit(n);
}
