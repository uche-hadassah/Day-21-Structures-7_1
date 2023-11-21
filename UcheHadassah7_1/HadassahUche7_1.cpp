/*1) a) Define a structure data type suitable for holding the information for stock item, 
such as: stock�s name, price of the stock and the date of purchase.
b) Declare a stock structure variable and initialize it to the following data: 
Stock: IBM
Price Purchased:1150.50
Date purchased: 12/7/1999 
c) Modify the structure definition so that you include a Date structure inside the stock 
structure, in order to store the date of purchase (similar to the Date structure shown as 
an example on the slides). Declare a variable using this modified structure, accept the 
data from the user and display them.*/
#include<iostream>
#include<cstring>
using namespace std;
struct Date
{
	int day;
	int month;
	int year;
};
struct Stock
{
	char name[100];
	double price;
	Date dateOfPurchase;
};
int main()
{
	Stock stockInfo;
	cout << "Enter the name of the stock:";
	cin.getline(stockInfo.name, 100);
	cout << "Enter the price of the stock:";
	do
	{
		cin >> stockInfo.price;
		while (stockInfo.price <= 0.0)
		{
			cout << "Invalid price. Please enter a valid price:";
			cin >> stockInfo.price;
		}
	} while (stockInfo.price <= 0.0);
	cin.ignore();
	cout << "Enter the date of purchase" << endl << "day:";
	do
	{
		cin >> stockInfo.dateOfPurchase.day;
		while (stockInfo.dateOfPurchase.day < 1 || stockInfo.dateOfPurchase.day>31)
		{
			cout <<"Invalid day. We can't have "<< stockInfo.dateOfPurchase.day <<" day(s) in a month."<<endl<< "Please enter a valid day: ";
			cin >> stockInfo.dateOfPurchase.day;
		}
	} while (stockInfo.dateOfPurchase.day < 1 || stockInfo.dateOfPurchase.day>31);
	cin.ignore();
	cout << "month:";
	do
	{
		cin >> stockInfo.dateOfPurchase.month;
		while (stockInfo.dateOfPurchase.month < 1 || stockInfo.dateOfPurchase.month > 12)
		{
			cout << "Invalid day. We can't have " << stockInfo.dateOfPurchase.month << " months in a year." << endl << "Please enter a valid month: ";
			cin >> stockInfo.dateOfPurchase.month;
		}
	} while (stockInfo.dateOfPurchase.month < 1 || stockInfo.dateOfPurchase.month > 12);
	cin.ignore();
	cout << "year:";
	do
	{
		cin >> stockInfo.dateOfPurchase.year;
		while (stockInfo.dateOfPurchase.year < 1 || stockInfo.dateOfPurchase.year>2023)
		{
			cout << "Invalid year! Please Enter a valid year:";
			cin >> stockInfo.dateOfPurchase.year;
		}
	} while (stockInfo.dateOfPurchase.year < 1 || stockInfo.dateOfPurchase.year>2023);
	cin.ignore();
	cout << "STOCK INFO:";
	cout << "\nName:" << stockInfo.name;
	cout << "\nPrice:"<< stockInfo.price;
	cout << "\nDate of purchase:" << stockInfo.dateOfPurchase.day << "/" << stockInfo.dateOfPurchase.month << "/" << stockInfo.dateOfPurchase.year;
}