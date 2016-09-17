#include<iostream>
#include<iomanip>
using namespace std;

struct Name{
	char lastName[30];
	char firstName[30];
	char itemName[30];
};

struct Order{
	int day;
	int month;
	int year;
	int number;
};

struct Item{
	int id;
	double price;
	Name name;
	double item;
	int quantity;
};
struct Customer{
	int contact;
	Name name;
	Order ord;
};

void newLine(){
     char s;
     do{cin.get(s);}while(s!='\n');     
}

int main(){
	Item it[3];
	Customer cust[1];
	double numero;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	for(int m=0; m<1; m++){
		
		cout<<"Enter Customer's Information " << m+1 << endl;
		cout<<"Enter First Name: ";
		gets(cust[m].name.firstName);
		cout<<"Enter Last Name: ";
		gets(cust[m].name.lastName);
		cout<<"Contact number: ";	
		cin>>cust[m].contact;
		newLine();
	
		Order ord;
		cout<<"Order Date"<<endl;
		cout<<"Day: ";
		cin>>cust[m].ord.day;
		cout<<"Month: ";
		cin>>cust[m].ord.month;
		cout<<"Year: ";
		cin>>cust[m].ord.year;
		cout<<"Enter number 3 items "<<endl;
			for(int n=0; n<3;n++){
				cout<<"ID: ";
				cin>>it[n].id;
				newLine();
				cout<<"Name: ";
				cin.getline(it[n].name.itemName,29);
				cout<<"Price: ";
				cin>>it[n].price;
				newLine();
				cout<<"Quantity: ";
				cin>>it[n].quantity;
				newLine();
				cout<<endl;
		}	
	}
	
	cout << setw(10) << "#"
	  	 << setw(15) << "Customer Name"
		 << setw(15) << "Order Date"
		 << setw(15) << "Item"
		 << setw(15) << "Price"
		 << setw(25) << "Quantity" 
		 << endl;
		 
	for (int m=0; m<1; m++){
		cout << setw(10) << m+1
			 << setw(10) << cust[m].name.lastName << cust[m].name.firstName 
			 << setw(10) << cust[m].ord.day << "/" <<cust[m].ord.month << "/" << cust[m].ord.year
			 << endl;
		for(int n=0; n<3; n++){
			cout << setw (55) << it[n].name.itemName
			 	 << setw(17) << it[n].price
			 	 << setw(20) << it[n].quantity
			  	 << endl;
			  	 numero = it[n].price*it[n].quantity;
		}
		cout << setw(60) << "Total: " << numero;
		numero=0;
	}	
}

