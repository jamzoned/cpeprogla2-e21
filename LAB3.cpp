#include<iostream>
#include<string.h>
using namespace std;

char str1[100], str2[200], word[100];
char valid;
int length, check, result, options;

void prob1() {
	cout<<"----------- S T R I N G C O P Y ----------- \n\n";
	cin.ignore();
	cout<<"Enter a first word (str1): ";
	gets(str1);
	cout<<"Enter second word  (str2): ";
	gets(str2);
	strcpy(str1, str2);
	cout<<"New string value for str1: "<<str1;
}

void prob2() {
	cout<<"----------- S T R I N G C O N C A T E N A T I O N ----------- \n\n";
	cin.ignore();
	cout<<"Enter a first word (str1): ";
	gets(str1);
	cout<<"Enter second word  (str2): ";
	gets(str2);
	strcat(str1, str2);
	cout<<"New string value for str1: "<< str1;
}

void prob3() {
	cout<<"-----------  P A L I N D R O M E ----------- \n\n";
	cin.ignore();
	cout<<"Enter a word: ";
	gets(word);
	length=strlen(word);
	for(int i=0;i<length;i++) {
		if(word[i]!=word[length-(i+1)]) check=0;
		else check=1;
    }
    if (check==1) cout<<" "<<word<<" is a palindrome.";
    else if (check==0) cout<<" "<<word<<" is NOT a palindrome.";
}

void prob4() {
	cout<<"----------- C A P I T A L I Z A T I O N ----------- \n\n";
	cin.ignore();
	cout<<"Enter a word: ";
	gets(word);
	strlwr(word);
	word[0]-=32;
	for(int i=0;i<strlen(word);i++) {
		if(word[i]==32) word[i+1]-=32;
	}
	cout<<word;
}

void prob5(){
	cout<<"----------- S T R I N G V E R T I C A L----------- \n\n";
	cin.ignore();
	cout<<"Enter a phrase: ";
	gets(word);
	length=strlen(word);
	for(int i=length;i>=0;i--) {
		if (word[i]==32) {
			int j=i+1;
			while(word[j]!=32&&j<length) {
				cout<<word[j];
				j++;
			}
			cout<<endl;
		}
	}
	int k=0;
	while(word[k]!=32) {
		cout<<word[k];
		k++;
	}
}

int option(int options) {
	cout<<"\nCHOOSE OPTIONS: " << endl;
	cout<<"1. STRING COPY" << endl
		<<"2. STRING CONCATENATION" << endl
		<<"3. STRING PALINDROME" << endl
		<<"4. STRING CAPITALIZATION" << endl
		<<"5. STRING VERTICAL" << endl
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
		case 4:
			prob4();
			break;
		case 5:
			prob5();
			break;
		default:
			break;
	}
	return options;
}

char again(char valid) {
	cout<<"\n\nTRY AGAIN? (Y/N) ";
	cin>>valid;
	if (valid=='y'|| valid=='Y') {
		system("cls");
		option(options);
	}
	else if (valid=='n'|| valid=='N') {
		system ("Pause");
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
