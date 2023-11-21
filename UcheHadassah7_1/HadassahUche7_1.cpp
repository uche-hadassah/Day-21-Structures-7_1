/*Name:Uche Hadassah
This program makes use of structures to store suitable information for stock items*/
#include<iostream>
#include<cstring>
using namespace std;
//declaring the Date struct to store the date of purchase
struct Date
{
	int day;
	int month;
	int year;
};
//declaring to Stock struct to store the information of the stock
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
	} while (stockInfo.price <= 0.0);//validating user inputs for the price
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
	} while (stockInfo.dateOfPurchase.year < 1 || stockInfo.dateOfPurchase.year>2023);//Validating user input for the year
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
	} while (stockInfo.dateOfPurchase.month < 1 || stockInfo.dateOfPurchase.month > 12);//Validating user input for the month
	cin.ignore();
	cout << "day:";
	if (stockInfo.dateOfPurchase.year % 4 == 0 && stockInfo.dateOfPurchase.month == 2)//Validating user input for feb. in a leap year
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
	else if (stockInfo.dateOfPurchase.year % 4 != 0 && stockInfo.dateOfPurchase.month == 2)//Validating user input for feb.
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
	else if(stockInfo.dateOfPurchase.month == 4 || stockInfo.dateOfPurchase.month == 6
		|| stockInfo.dateOfPurchase.month == 9 || stockInfo.dateOfPurchase.month == 11)//Validating user input for months ending at day 30
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
	else //Validating user input for every other month
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
	//Output the information of the stock
	cout << "STOCK INFO:";
	cout << "\nName:" << stockInfo.name;
	cout << "\nPrice:"<< stockInfo.price;
	cout << "\nDate of purchase:" << stockInfo.dateOfPurchase.day << "/" << stockInfo.dateOfPurchase.month << "/" << stockInfo.dateOfPurchase.year;
}