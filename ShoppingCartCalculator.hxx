//This is Katherine DeMetre's Shopping Cart Calculator

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main () {
	
	struct shoppingcartType
	{
		string itemName;
    int numberItems;
		double price;
		
	};

	shoppingcartType shoppingcart[99];
	int counter = 0;
	double shoppingcarttotal;
	char moreitems;
	char correct;
	
	
	cout << "Welcome to Katherine's Shop!" << endl;
	cout << "This program will record the items you enter and their prices. It will also provide a total item count and final price.\n" << endl;
	
	cout << "How many items do you wish to buy?\n";
  cin >> shoppingcart[counter].numberItems;
  cout << "\n";

	while (moreitems != 'N' || moreitems != 'n')
	{	
		cout <<	"What is the name of your item? (No spaces, please) \n";
		cin >> shoppingcart[counter].itemName;
		cout << "And what is the price of that item in dollars and cents? (Numbers only, please) \n";
		cin >> shoppingcart[counter].price;
		cout << "You entered: ";
		cout << fixed << showpoint << setprecision(2);
		cout << shoppingcart[counter].itemName << " at $" << shoppingcart[counter].price << endl;
		cout << "Is this correct?  Please type y for Yes or n for No: \n";
		cin >> correct;
	if (correct == 'y' || correct == 'Y')
	{
	shoppingcarttotal = shoppingcarttotal + shoppingcart[counter].price;
	counter++;}
	else {
		cout << "Previous entry not saved, please continue." << endl;
	}	
		cout << "Current total is: " << shoppingcarttotal << " and item count is " << counter << ".\n" << endl;
	
	if (counter >= shoppingcart[counter].numberItems)
  {
    cout << "You've reached your item limit.\n\n";
    break;
  }
		
	
	}
	char printlist;
	int i;
  double tax = (0.075 * shoppingcarttotal);
	
	cout << "Would you like to print a list of your items? Please type y for Yes or n for No: ";
	cin >> printlist;
	if (printlist == 'y' || printlist == 'Y')
	{	for (i = 0; i <= (counter - 1); i++)
	{cout << i + 1 << ". " << shoppingcart[i].itemName << "....." << shoppingcart[i].price << endl;
		}
	}
	cout << "Your total is: " << shoppingcarttotal << " for " << counter<< " items." << endl;
  cout << "Tax: " << tax << ".\n";
  cout << "Your final bill is: " << shoppingcarttotal + tax << " for " << counter<< " items." << endl;

	cout << "Thank you for shopping at Katherine's Shop! Have a great day.\n";
		
  
    return 0;
}