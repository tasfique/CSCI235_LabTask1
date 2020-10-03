//Name- Tasfique Enam
//Student ID-J16020825/5886429
//LabTask1 Q2


#include <iostream>
using namespace std;

void read(double &price, int &quantity, double &discount) { //read function

	do{
		cout<<"Enter the amount sold"<< endl;
		cin>>price;
		if(price <=0) {
			cout<<"You have entered wrong value enter price again"<< endl;
			cin>>price;
		}

		cout<<"Enter the quantity price"<< endl;
		cin>>quantity;
		if(quantity <=0) {
			cout<<"You have entered wrong value enter Quantity again"<< endl;
			cin>>quantity;
		}

		cout<<"Enter the discount rate"<< endl;
		cin>>discount;
		if(discount <=0) {
			cout<<"You have entered wrong value enter Discount Rate again"<< endl;
			cin>>discount;
		}

	} while(price <=0 || quantity <=0 || discount <= 0 || discount >= 100);

}

double calculation(double price, int quantity, double discount) { //calculation function
	return (price*quantity) - (price*quantity*discount*0.01);
}

double display(double price, int quantity, double discount_amount, double total) { //display function
	cout<< "\nPrice " << price << endl;
	cout << "Quantity " << quantity << endl;
	cout << "Discount Amount "<< discount_amount << endl;
	cout << "\nTotal Price "<< total << "\n" << endl;
}

int main() { //main function
	double price;
	int quantity;
	double discount;
	double total;
	double TotalPurchasePrice = 0;
	string input;

	do{
		read(price, quantity, discount);

		total = calculation(price, quantity, discount);

		double discount_amount = price*quantity*discount*0.01;
		TotalPurchasePrice = TotalPurchasePrice +total;
		display(price, quantity, discount_amount, total);
		cout << "Continue with another Item? Enter Y to continue or any Letter to exit. \n: ";
		cin >> input;

	} while (input == "Y" || input == "y");

	cout << "\nTotal Purchase Price : " << TotalPurchasePrice << endl;

	return 0;
}



