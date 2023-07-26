/* 
Name: Amit Nishankar
Class: S.Y-12
Batch: A
Roll No. 2223571
*/

/*
ASSIGNMENT 1.
Set A=(1,3, a, s, t, i} represent alphanumeric characters permitted to set the password of length 4. Write C/C++ program to generate all possible passwords.

*/
//Header Declarations
#include<iostream>
using namespace std;

//Password Class
class password {
	int x,y,n;
	char A[50];
	public:
		password();
		void withRepeat();
		void withoutRepeat();
};
//Constructor
password::password()
{
	cout<<"Enter no. of characters to choose from, for your password."<<endl;
	cin>>n;
	cout<<"Enter your choice of characters for the password (Without Spaces)."<<endl;
	cin>>A;
}
//With Repeatation
void password::withRepeat() {
	x = 0;
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			for(int k=0;k<n;k++) {
				for(int l=0;l<n;l++) {
					cout<<A[i]<<A[j]<<A[k]<<A[l]<<endl;
					x++;
				}
			}
		}
	}
	cout<<"Total passwords with repetition are: "<<x<<endl;
}
//Without Repeatation
void password::withoutRepeat() {
	y = 0;
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			for(int k=0;k<n;k++) {
				for(int l=0;l<n;l++) {	
					if(i!=j&&j!=k&&k!=l&&l!=i&&i!=k&&j!=l) {
						cout<<A[i]<<A[j]<<A[k]<<A[l]<<endl;
						y++;
					}
				}
			}
		}
	}
	cout<<"Total passwords generated without repetition are: "<<y<<endl;
}
//Main
int main() {
	password P;
	int ch;
	cout<<"Enter: \n1. Generate Password with Repeatation. \n2. Generate Password without Repeatation."<<endl;
	cin>>ch;
	switch(ch) {
		case 1: P.withRepeat(); break;
		case 2: P.withoutRepeat(); break;
	}
	return 0;
}