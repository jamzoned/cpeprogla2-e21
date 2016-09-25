#include<iostream>
#include<math.h>
using namespace std;
char valid;
int options;
void fizzbuzz(){
	int x=1;
	cout << "Print Number 1 - 100" << endl;
	
	while (x<101)
	{
	
	if ((x % 3==0) && (x % 5==0))
	cout << "Fizz Buzz\n";
	
	else if (x % 3 == 0 )
	cout << "Fizz\n";
	 
	 else if(x % 5 == 0)
	 cout << "Buzz\n";
	 
	else
		cout << x <<endl;
		x++;
	 }
}

void hashmat(){
	int tegi[3];
	int x; // either Hashmat's or opponents army
	int y; // either Hashmat's or opponents army
	int ctr; 
	cout << "Enter troops of Hashmat vs. Enemy"<< endl;
	for (ctr=0;ctr<3;ctr++){
		cin >> x >> y;
		tegi[ctr]=abs(x-y);
	}
	
	cout << endl << tegi[0] 
		 << endl << tegi[1] 
		 << endl << tegi[2];
}

int option(int options) {

	cout<<"\nCHOOSE OPTIONS: " << endl;
	cout<<"1. Fizz Buzz" << endl
		<<"2. Hashmat" << endl
		<<"\n Enter option: ";
	cin>>options;
	cout<<endl;
	switch(options) {
		case 1:
			fizzbuzz();
			break;
		case 2:
			hashmat();
			break;
		default:
			break;
	}
	return options;
}

char again(char yesno) {
	cout<<"\n\nTRY AGAIN? (Y/N) ";
	cin>>valid;
	if (valid=='y'|| valid=='Y') {
		system("cls");
		option(options);
	}
	else if (valid=='n'||valid=='N') {
		system("pause");
	}
	else {
		exit(1);
	}
	return valid;
	cout << endl;
}

main() {
	option(options);
	again(valid);
}
