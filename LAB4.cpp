#include<iostream>
#include<string.h>
using namespace std;

char str1[100], str2[100], word[100];
char valid, *p1, *p2;
int length, check=0, result, options;

void scopy() {
	cout<<"----------- C O P Y -----------" << endl;
	cin.ignore();
	cout<<"Enter first  string: ";
    gets(str1);
    cout<<"Enter second string: ";
    gets(str2);
	for(int i=0;i<100;i++){
    	p1=&str1[i];
    	p2=&str2[i];
    	*p1=*p2;
    	cout<<str1[i];
	}  
}

void scompare() {
	cout<<"----------- C O M P A R E -----------" << endl;
	cin.ignore();
	cout<<"Enter first string: ";
    gets(str1);
    cout<<"Enter second string: ";
    gets(str2);
	for(int i=0;i<50;i++){
    	p1=&str1[i];
    	p2=&str2[i];
    	(int) str1[i];
    	(int) str2[i];
    	if (*p1==*p2){
    		check+=0;
		}
		else if (*p2<*p1) {
			check+=1;	
		}
		else {
			check-=1;
		}
	}
	if (check==0) cout<<"Equal";
	else if (check>0) cout<<"Positive";
	else cout<<"Negative";	
}

void scat() {
	cout<<"----------- C O N C A T E N A T E -----------" << endl;
	gets(word);
	cout<<"Enter first  string: ";
    gets(str1);
    cout<<"Enter second string: ";
    gets(str2);
	for(int i=0;i<strlen(str1);i++){
    	p1=&str1[i];
    	cout<<*p1;
	}
	for(int i=0;i<strlen(str2);i++){
    	p2=&str2[i];
    	cout<<*p2;
	}
}

int slen(char*p1){
	cout<<"\nEnter a string:  ";
	cin.ignore();
    gets(str1);
	while(*p1!='\0') {
		check++;
		p1++;
	}
	cout<<"The length of the string is: "<<check;
	return check;
}

void srev() {
	int i=0;
    char*p1=word;
    char*p2=str1;
    cout<<"----------- R E V E R S E -----------" << endl;
	cin.ignore();
	cout<<"Enter string: ";
    gets(word);
    while(*p1){
    	p1++;
    	i++;
	}
	while(i>=1){
		p1--;
		*p2=*p1;
		p2++;
		--i;
	}
	cout<<"The reverse string is: "<<str1;
}

int option(int options) {

	cout<<"\nCHOOSE OPTIONS: " << endl;
	cout<<"1. Poniter COPY" << endl
		<<"2. Pointer COMPARE" << endl
		<<"3. Pointer CONCATENATION" << endl
		<<"4. Pointer LENGTH" << endl
		<<"5. Pointer REVERSE" << endl
		<<"\n Enter option: ";
	cin>>options;
	cout<<endl;
	switch(options) {
		case 1:
			scopy();
			break;
		case 2:
			scompare();
			break;
		case 3:
			scat();
			break;
		case 4:
			slen(str1);
			break;
		case 5:
			srev();
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

