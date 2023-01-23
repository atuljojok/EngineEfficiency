using namespace std;
#include <iostream>
#include "Engine.h"
#include "Diesel.h"
#include "Petrol.h"

#include "InternalCombEngine.h"
#include"ExternalCombEng.h"
#include"SteamEng.h"

int main() {
	int option;
	float no1;
	float no2;
	InternalCombEngine ice;
	Diesel dl;
	Petrol pl;
	ExternalCombEng ecg;
	SteamEng stg;



	cout << "Choose Option";
	cout << "\n1. Diesel Engine \n2.Internal Combustion Engine \n3. Petrol Engine" << endl;
	cout << "4. External Combustion Engine \n5.  Steam Engine  " << endl;
	cin >> option;

	cout<<" Enter Output";
	cin >>  no1;
	cout << " Enter Input";
	cin >> no2;

	if ( option == 1) {
		cout << dl.GetEfficiency(no1,no2)<<"%";
	}
	else if (option == 2) {
		cout << ice.GetEfficiency(no1, no2)<<"%";
	}
	else if (option == 3) {
		cout << pl.GetEfficiency(no1, no2) << "%";
	}
	else if (option == 4) {
		cout << ecg.GetEfficiency(no1, no2) << "%";
	}
	else if (option == 5) {
		
		cout << stg.GetEfficiency(no1, no2) << "%";
	}

	else {
		cout << "Enter Valid Option";
	}
	

	return 0;
}