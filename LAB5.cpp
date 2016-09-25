#include<iostream>
#include<iomanip>
using namespace std;
char valid;
int options;
void newLine(){
    char s;
    do{cin.get(s);}while(s!='\n');     
}

void prob1(){
	
struct Name{
	char lastName[30];
	char firstName[30];
	char itemName[30];
	char fullName[30];
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

int main();{
	Item it[5];
	Customer cust[3];
	double numero=0;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	for(int m=0; m<2; m++){
		cout<<"Enter Customer's Information " << m+1 << endl;
		cout<<"Enter First Name: ";
		gets(cust[m].name.firstName);
		newLine();
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
		 << setw(16) << "Item"
		 << setw(17) << "Price"
		 << setw(22) << "Quantity" 
		 << endl;
		 
	for(int m=0; m<2; m++){
		cout << setw(10) << m+1
			 << setw(10) << cust[m].name.lastName << cust[m].name.firstName 
			 << setw(10) << cust[m].ord.day << "/" <<cust[m].ord.month << "/" << cust[m].ord.year
			 << endl;
		for(int n=0; n<3; n++){
			cout << setw (55) << it[n].name.itemName
			 	 << setw(17) << it[n].price
			 	 << setw(20) << it[n].quantity
			  	 << endl;
			  	 numero+=(it[n].price*it[n].quantity);
		}
		cout << setw(85) << "Total: " << numero;
		numero=0;
		cout<<endl;	
	}		
}
}

void prob2(){
	struct Student{
	int id;
	char name[30];
};

struct Quiz{
	float quiz;
	float average;
};

int main;{
	Student stud[1];
	Quiz qu[3];
	float total=0;
	int check;
    cout << "Enter student records: \n";
    for(int i=0; i<1; i++){
    	cout << "ID: ";
		cin >> stud[i].id;
    	newLine();
    	cout << "Name: ";
    	cin.getline(stud[i].name,29);
    	for(int j=0; j<3; j++){
            cout << "Quiz "<< j+1 << ": ";
            cin >> qu[j].quiz;
            newLine();
        }
	}
	
	cout<<"\n\nStudent record: ";
	for(int i=0; i<1; i++){
    	cout << "\nID: " << stud[i].id;
    	cout << "\nName: ";
    	puts(stud[i].name);
    	for(int j=0; j<3; j++){
			total+=qu[j].quiz;
        }
        cout << "Grade: "<< (total/3) << endl;		
		if((total/3)<75){
			cout<<"Remarks: Failed!\n";
		}
		else{
			cout<<"Remarks: Passed!\n";
		}
		cout<<endl;
		total=0;
	}
}
}

void prob3(){
	struct Student{
	int id;
	char fullName[30];
};

struct Quiz{
	float quiz;
};

int main;{
	Student stud[3];
	Quiz qu[3];
	float total=0;
		
	cout.setf(ios::showpoint);
	cout.setf(ios::fixed);
	cout.precision(2);
	
    cout << "Enter student records: \n";
    for(int i=0; i<3; i++){
		cout<<"Student "<<i+1;
    	cout << "\nID: ";
		cin >> stud[i].id;
    	newLine();
    	cout << "Name: ";
    	cin.getline(stud[i].fullName,29);
    	for(int j=0; j<3; j++){
            cout << "Quiz "<< j+1 << ": ";
            cin >> qu[j].quiz;
        }
        cout<<endl;
	}
	
	cout << setw(10) << "No."
	  	 << setw(15) << "Student No."
		 << setw(15) << "Name"
		 << setw(15) << "Grade"
		 << setw(16) << "Remark"
		 << endl;
	
	for(int i=0; i<3; i++){
		cout << setw(10) << i+1;
    	cout << setw(15) << stud[i].id;
    	cout << setw(15)<< stud[i].fullName;
    	for(int j=0; j<3; j++){
			total+=(qu[j].quiz);
		}
		cout <<setw(16)<<(total/3); 
		if((total/3)<75){
			cout<<setw(17)<<"Failed!\n";
		}
		else{
			cout<<setw(17)<<"Passed!\n";
		}
		cout<<endl;
		total=0;
	}	
}
}

int option(int options){
	cout<<"\nCHOOSE OPTIONS: " << endl;
	cout<<"1. Prob 1" << endl
		<<"2. Prob 2" << endl
		<<"3. Prob 3" << endl
		<<"\n Enter option: ";
	cin>>options;
	cout<<endl;
	switch(options) {
		case 1:
			prob1();
			break;
		case 2:
			prob2();
			break;
		case 3:
			prob3();
			break;
		default:
			break;
	}
	return options;
}

char again(char yesno){
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
