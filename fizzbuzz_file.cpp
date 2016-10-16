#include<iostream>
#include<fstream>
#include<math.h>
using namespace std;
int main()
{
	ifstream garao("input.txt");
	int x;
	while(garao>>x){
	if ((x % 3==0) && (x % 5==0))
	cout << "Fizz Buzz\n";
	
	else if (x % 3 == 0 )
	cout << "Fizz\n";
	 
	 else if(x % 5 == 0)
	 cout << "Buzz\n";
	 
	else
		cout << x <<endl;
	}
}
