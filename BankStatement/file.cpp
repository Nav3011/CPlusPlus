#include <iostream>
#include <iomanip>
#include <fstream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
double calculate_interest(double rate, double balance, double charges) {
	double interest = (balance * rate * 1) / 12.0;
	double amount = balance + interest;
	return amount;
}

int main() {
	string card, f_name, l_name;
	double rate, balance, charges;
	ifstream inFile("balances.txt");
	ofstream outFile("newbalance.txt");
	if(inFile.is_open())
	{
		double final_balance;
		while(inFile>>card>>f_name>>l_name>>rate>>balance>>charges)
		{
			final_balance = calculate_interest(rate, balance, charges);
			double new_charges=0.0;
			if(outFile.is_open()) {
				outFile<<card<<" "<<f_name<<" "<<l_name<<" "<<rate<<" "<<final_balance<<" "<<new_charges<<endl;
			}
		}
		outFile.close();
	}
	inFile.close();
}