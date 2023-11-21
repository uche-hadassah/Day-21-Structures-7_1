/*1) a) Define a structure data type suitable for holding the information for stock item, 
such as: stock’s name, price of the stock and the date of purchase.
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
	cout << "Enter the date of purchase" << endl;
	cout << "year:";
	do
	{
		cin >> stockInfo.dateOfPurchase.year;
		while (stockInfo.dateOfPurchase.year < 1 || stockInfo.dateOfPurchase.year>2023)
		{
			cout << "Invalid year! Please enter a valid year:";
			cin >> stockInfo.dateOfPurchase.year;
		}
	} while (stockInfo.dateOfPurchase.year < 1 || stockInfo.dateOfPurchase.year>2023);
	cin.ignore();
	cout << "month:";
	do
	{
		cin >> stockInfo.dateOfPurchase.month;
		while (stockInfo.dateOfPurchase.month < 1 || stockInfo.dateOfPurchase.month > 12)
		{
			cout << "Invalid month.Please enter a valid month: ";
			cin >> stockInfo.dateOfPurchase.month;
		}
	} while (stockInfo.dateOfPurchase.month < 1 || stockInfo.dateOfPurchase.month > 12);
	cin.ignore();
	cout << "day:";
	if (stockInfo.dateOfPurchase.year % 4 == 0 && stockInfo.dateOfPurchase.month == 2)
	{
		do
		{
			cin >> stockInfo.dateOfPurchase.day;
			while (stockInfo.dateOfPurchase.day < 1 || stockInfo.dateOfPurchase.day>29)
			{
				cout << "Invalid day.Please enter a valid day for february:";
				cin >> stockInfo.dateOfPurchase.day;
			}
		} while (stockInfo.dateOfPurchase.day < 1 || stockInfo.dateOfPurchase.day>29);
		cin.ignore();
	}
	else if (stockInfo.dateOfPurchase.year % 4 != 0 && stockInfo.dateOfPurchase.month == 2)
	{
		do
		{
			cin >> stockInfo.dateOfPurchase.day;
			while (stockInfo.dateOfPurchase.day < 1 || stockInfo.dateOfPurchase.day>28)
			{
				cout << "Invalid day.Please enter a valid day for february:";
				cin >> stockInfo.dateOfPurchase.day;
			}
		} while (stockInfo.dateOfPurchase.day < 1 || stockInfo.dateOfPurchase.day>28);
		cin.ignore();
	}
	else if(stockInfo.dateOfPurchase.month == 4|| stockInfo.dateOfPurchase.month == 6|| stockInfo.dateOfPurchase.month == 9 || stockInfo.dateOfPurchase.month == 11)
	{
		do
		{
			cin >> stockInfo.dateOfPurchase.day;
			while (stockInfo.dateOfPurchase.day < 1 || stockInfo.dateOfPurchase.day>30)
			{
				cout << "Invalid day.Please enter a valid day for this month:";
				cin >> stockInfo.dateOfPurchase.day;
			}
		} while (stockInfo.dateOfPurchase.day < 1 || stockInfo.dateOfPurchase.day>30);
		cin.ignore();
	}
	else 
	{
		do
		{
			cin >> stockInfo.dateOfPurchase.day;
			while (stockInfo.dateOfPurchase.day < 1 || stockInfo.dateOfPurchase.day>31)
			{
				cout << "Invalid day.Please enter a valid day for this month:";
				cin >> stockInfo.dateOfPurchase.day;
			}
		} while (stockInfo.dateOfPurchase.day < 1 || stockInfo.dateOfPurchase.day>31);
		cin.ignore();
	}
	cout << "STOCK INFO:";
	cout << "\nName:" << stockInfo.name;
	cout << "\nPrice:"<< stockInfo.price;
	cout << "\nDate of purchase:" << stockInfo.dateOfPurchase.day << "/" << stockInfo.dateOfPurchase.month << "/" << stockInfo.dateOfPurchase.year;
}