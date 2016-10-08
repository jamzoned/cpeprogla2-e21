#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
main()
{
	ifstream badjao("input.txt");
	int x;
	int sum;
	while(badjao>>x){
		for(int i=1;i<x;i++){
			if ((i%3==0)||(i%5==0)){
				sum+=i;
			}
		}
		cout<<sum;
	}
}
