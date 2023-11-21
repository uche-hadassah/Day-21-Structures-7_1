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
	char name[30];
	double price;
	Date dateOfPurchase;
};
int main()
{
	Stock stockInfo;
	cout << "Enter the name of the stock:";
	cin.getline(stockInfo.name, 30);
	cout << "Enter the price of the stock:";
	cin >> stockInfo.price;
	cin.ignore();
	cout << "Enter the date of purchase" << endl;
	cout << "day:";
	cin >> stockInfo.dateOfPurchase.day;
	cout << "month:";
	cin >> stockInfo.dateOfPurchase.month;
	cout << "year:";
	cin >> stockInfo.dateOfPurchase.year;
	cin.ignore();
	cout << "STOCK INFO:";
	cout << "\nName:" << stockInfo.name;
	cout << "\nPrice:"<< stockInfo.price;
	cout << "\nDate of purchase:" << stockInfo.dateOfPurchase.day << "/" << stockInfo.dateOfPurchase.month << "/" << stockInfo.dateOfPurchase.year;
}