#include<iostream>
using namespace std;
int main()
{
	int initial_quantity;
	cout << "Enter the inital qunatity of product in stock:";
	cin >> initial_quantity;

	int threshold = 15;
	int current_stock = initial_quantity;

	while (true)
	{
		cout << "\nCurrent stock" << current_stock << endl;
		char choice;
		cout << "Enter S for sale,R for restocking and E for exit:";
		cin >> choice;

		if (choice == 's' || choice == 'S')
		{
			int sold_quantity;
			cout << "Enter the sold quantity:";
			cin >> sold_quantity;
			if (sold_quantity > current_stock)
			{
				cout << "Not enough stock available for sale" << endl;
			}

			else

				sold_quantity -= current_stock;
			cout << sold_quantity << "Units sold.Remaining stock:" << current_stock << endl;
		}


		else if (choice == 'R' || choice == 'r')
		{
			int restocked_quantity;
			cout << "Enter the restocked quantity";
			cin >> restocked_quantity;
			restocked_quantity += current_stock;
			cout << restocked_quantity << "Units restocked.Remaining stock" << current_stock << endl;
		}
		else  if (choice == 'E' || choice == 'e')
		{
			break;
		}
	}
	if (threshold < current_stock)
	{
		cout << "Warning.Stock is below threshold( << threshold ).Restock immediately!" << endl;
	}
}

{	

cout << "Exiting program.Final stock:" << current_stock << endl;



return 0;

}









