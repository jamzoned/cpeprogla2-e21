#include<iostream>
#include<fstream>
#include<math.h>
using namespace std;
int main(){
	ifstream badjao("sample.txt");
	int x;
	int y;
	int tegi;
	while(badjao>>x>>y){
		tegi=abs(x-y);
		cout<<"survivors: "<<tegi<<endl;
	}
}
