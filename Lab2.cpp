#include<iostream>
#include<cmath>
#include<time.h>
#include<cstdlib>
#include<conio.h>
using namespace std;

double problem1(double num1){
	
	return round(num1); //mathematical term for rounding off	
	
}

void echos(){
	cout << endl << "-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-" << endl;
}

void random(){
	
	int uniques [10];
	int MAX = 20;
	int Min = 1;
	int num1; 
	bool check = true; 
	
	srand(time(NULL)); 
	cout << "Unique Numbers: ";	
	
	for (int i=0;i<10;i++){
    	
	do{
    	num1=rand()%MAX+Min;
    	check = true;
   		 for (int j=0;j<i;j++)
   		     if (num1 == uniques[j]) {
           	 check = false; 
             break; 
        }
    } while (!check); 
	uniques[i]=num1;
	cout << num1 << " ";
	}
}

int factorial(int num){	
	if (num!=1)
		return num*factorial(num-1);
	else{
		return 1;
	}	
}

int main(){
	double num1;
	// Problem1
	//double result;
	cout << "Enter num to be rounded off: ";
	cin >> num1;
	//result = problem1(num);
	//cout << "Rounded off value is:" << result;
	cout << "Rounded off value is: " << problem1(num1);
	
	echos();
	
	//problem2
	cout << endl; 
	random();
	cout << endl;
	
	echos();
	
	//call-by-value
	int num;
	cout << endl;
	cout << "Enter num: ";
	cin >> num;
	cout << "The factorial of " << num << " is: " << factorial(num);
	
	return 0;
}
