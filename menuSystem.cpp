#include <iostream>

using namespace std;
//got stuck on the decimals and making it work mathemathically.
//at least it get the right change within a whole number.
//change = payment - (total + (cents/100)); tried to make this work but made the decimal weird and the change outcome also came out strange when they was more items.
int main()
{
	int menu;
	int code, price, pricedeno, quantity, total, cents, payment, change;
	char telephone;
	do
	{
		cout << "Jo's cafe shop" << endl;
		cout << "Menu : " << endl;
		cout << "1. Philly cheese steak ----- $6.77" << endl;
		cout << "2. Mystery burger ---------- $9.39" << endl;
		cout << "3. Cheese burger ----------- $8.14" << endl;
		cout << "4. Cake slice -------------- $2.24" << endl;
		cout << "5. Tomato soup ------------- $3.78" << endl;
		cout << "6. Grilled cheese ---------- $4.25" << endl;
		cout << "7. Bear claw --------------- $6.81" << endl;
		cout << "8. Winner chicken sandwich - $7.73" << endl;
		cout << "====================================" << endl;
		cout << "Enter your choice: ";
		cin >> code;
		switch (code)
		{
		case 1:
			cout << "Philly cheese steak" << endl;
			price = 6;
			pricedeno = 77;
			cout << "Enter how many of this food item you want: ";
			cin >> quantity;
			total = price * quantity;
			cents = (pricedeno % 100) * quantity;
			cout << "Total: $" << total <<"." << cents << endl;
			cout << "How much your paying?: $";
			cin >> payment;
			change = payment - total;
			cout << "Your change: $" << change << endl;
			cout << "Want more y/n: ";
			cin >> telephone;
			break;
		case 2:
			cout << "Mystery burger" << endl;
			price = 9;
			pricedeno = 39;
			cout << "Enter how many of this food item you want:  ";
			cin >> quantity;
			total = price * quantity;
			cents = (pricedeno % 100) * quantity;
			cout << "Total: $" << total <<"." << cents << endl;
			cout << "How much your paying?: $";
			cin >> payment;
			change = payment - total;
			cout << "Your change: $" << change << endl;
			cout << "Want more y/n: ";
			cin >> telephone;
			break;
		case 3:
			cout << "Cheese burger" << endl;
			price = 8;
			pricedeno = 14;
			cout << "Enter how many of this food item you want: ";
			cin >> quantity;
			total = price * quantity;
			cents = (pricedeno % 100) * quantity;
			cout << "Total: $" << total << "." << cents << endl;
			cout << "How much your paying?: $";
			cin >> payment;
			change = payment - total;
			cout << "Your change: $" << change << endl;
			cout << "Want more y/n: ";
			cin >> telephone;
			break;
		case 4:
			cout << "Cake slice" << endl;
			price = 2;
			pricedeno = 24;
			cout << "Enter how many of this food item you want: ";
			cin >> quantity;
			total = price * quantity;
			cents = (pricedeno % 100) * quantity;
			cout << "Total: $" << total << "." << cents << endl;
			cout << "How much your paying?: $";
			cin >> payment;
			change = payment - total;
			cout << "Your change: $" << change << endl;
			cout << "Want more y/n: ";
			cin >> telephone;
			break;
		case 5:
			cout << "Tomato soup" << endl;
			price = 3;
			pricedeno = 78;
			cout << "Enter how many of this food item you want: ";
			cin >> quantity;
			total = price * quantity;
			cents = (pricedeno % 100) * quantity;
			cout << "Total: $" << total << "." << cents << endl;
			cout << "How much your paying?: $";
			cin >> payment;
			change = payment - total;
			cout << "Your change: $" << change << endl;
			cout << "Want more y/n: ";
			cin >> telephone;
			break;
		case 6:
			cout << "Grilled cheese" << endl;
			price = 4;
			pricedeno = 25;
			cout << "Enter how many of this food item you want: ";
			cin >> quantity;
			total = price * quantity;
			cents = (pricedeno % 100) * quantity;
			cout << "Total: $" << total << "." << cents << endl;
			cout << "How much your paying?: $";
			cin >> payment;
			change = payment - total;
			cout << "Your change: $" << change << endl;
			cout << "Want more y/n: ";
			cin >> telephone;
			break;
		case 7:
			cout << "Bear claw" << endl;
			price = 6;
			pricedeno = 81;
			cout << "Enter how many of this food item you want: ";
			cin >> quantity;
			total = price * quantity;
			cents = (pricedeno % 100) * quantity;
			cout << "Total: $" << total << "." << cents << endl;
			cout << "How much your paying?: $";
			cin >> payment;
			change = payment - total;
			cout << "Your change: $" << change << endl;
			cout << "Want more y/n: ";
			cin >> telephone;
			break;
		case 8:
			cout << "Winner chiecken sandwich" << endl;
			price = 7;
			pricedeno = 73;
			cout << "Enter how many of this food item you want: ";
			cin >> quantity;
			total = price * quantity;
			cents = (pricedeno % 100) * quantity;
			cout << "Total: $" << total << "." << cents << endl;
			cout << "How much your paying?: $";
			cin >> payment;
			change = payment - total;
			cout << "Your change: $" << change << endl;
			cout << "Want more y/n: ";
			cin >> telephone;
			break;
		default:
			cout << "The input you enter doesnt work" << endl;
		}
	}
	while (telephone /= 'y');
	cout << "Thank you for visiting this rusty cafe";
	return 0;
}