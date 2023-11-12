#include <iostream>
using namespace std;
int main(){
	int a;
	const float gmars = 0.377;
	const float gjupiter = 2.36;
	cout<<"Agirliginizi giriniz: ";
	cin>>a;
	cout<<"Jupiter...\n";
	cout<<"Agirliginiz; "<<a*gjupiter;
	cout<<"\nMars...\n";
	cout<<"Agirliginiz: "<<a*gmars;
	return 0;

}

