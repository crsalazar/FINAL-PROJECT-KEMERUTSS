#include<iostream>
#include<string>
#include<iomanip>
#include <cstdlib>
#include<conio.h>
using namespace std;
//Menu
//Pastries
const double choco = 76.00;
const double coffee = 76.00;
const double red = 76.00;
const double blueberry = 165.00;
const double banofee = 170.00;
const double sansrival = 155.00;
const double alamode = 200.00;
//Beverage
const double espresso = 55.00;
const double capuccino = 99.00;
const double latte = 99.00;
const double mocha = 104.00;
const double caramel = 99.00;
const double vanilla =  99.00;
const double sberry = 89.00;
const double chocoM = 89.00;
const double tax = .12;
char nex;
struct Customer_Details{
	char first[50];
	char last[50];
	char address[100];
	char contactNumber[50];	
};
struct Item{
		char id[2];
	};		
void info();
void menu();
void pastries();
void beverage();

Customer_Details cd;
Item mnu[100];
char i;
int many,x;
double A, cash, total;	
int main(){
	system ("Color fd");
	cout << " ********************************************";
	cout << " \n            The 7th Heaven Cafe" << endl << endl;
	cout << " ********************************************";
	cout << "\n        Press 'Enter' key to continue";
	cin.get(nex);
	info();
	menu();
}
void info(){
	system ("cls");
	system ("Color f5");
	cout << " ********************************************";
	cout << " \n		The 7th Heaven Cafe" << endl << endl;
	cout << " ********************************************";
	cout << "\nGood day customer!" << endl;
	cout << "Kindly enter the following information." << endl << endl;
	cout << "Name: " << endl;
	cout << "Last Name: ";
	cin.getline(cd.last,50);
	cout << "First Name: ";
	cin.getline(cd.first,50);
	cout << "Address: ";
	cin.getline(cd.address,100);
	cout << "Contact No.: ";
	cin.getline(cd.contactNumber,50);
	cout << " ********************************************";
	cout << "\n       Press 'Enter' key to continue";
	cin.get(nex);
}
void menu(){
	char A,B,N,Y;
	system ("cls");
	system ("Color f5");
	cout << " ********************************************";
	cout << " \n         The 7th Heaven Cafe" << endl << endl;
	cout << " ********************************************";
	cout << "\nHello " << cd.first << "!" << endl;
	cout << "Here is our menu." << endl << endl;
	cout << setw(20) << "Menu " 
	<< setw(30) << "Price" << endl << endl;
	cout << setw(20) << "A. Pastries " << endl; 
	cout << setw(36) << "1. Choco Cupcake w/ Nutella " 
	<< setw(12) << "Php" << choco << endl; 
	cout << setw(30) << "2. Coffee Cake Muffin " 
	<< setw(18) << "Php" << coffee << endl; 
	cout << setw(30) << "3. Red Velvet Cupcake " 
	<< setw(18) << "Php" << red << endl; 
	cout << setw(32) << "4. Blueberry Cheesecake " 
	<< setw(16) << "Php" << blueberry << endl; 
	cout << setw(30) << "5. Little Banofee Pie " 
	<< setw(18) << "Php" << banofee << endl; 
	cout << setw(29) << "6. Classic Sansrival " 
	<< setw(19) << "Php" << sansrival << endl; 	
	cout << setw(36) << "7. Choco Lava Cake ala Mode " 
	<< setw(12) << "Php" << alamode << endl; 
	cout << setw(21) << "B. Beverages " << endl; 	
	cout << setw(21) << "1. Capuccino " 
	<< setw(27) << "Php" << capuccino << endl; 
	cout << setw(23) << "2. Mocha Latte " 
	<< setw(25) << "Php" << mocha << endl; 
	cout << setw(20) << "3. Espresso " 
	<< setw(28) << "Php" << espresso << endl; 
	cout << setw(26) << "4. Caramel Frappe " 
	<< setw(22) << "Php" << caramel << endl; 
	cout << setw(26) << "5. Vanilla Frappe " 
	<< setw(22) << "Php" << vanilla << endl; 
	cout << setw(32) << "6. Strawberry Milkshake " 
	<< setw(16) << "Php" << sberry << endl; 	
	cout << setw(31) << "7. Chocolate Milkshake " 
	<< setw(17) << "Php" << chocoM << endl << endl; 
	cout << "Your order pls? [A/B]: ";
	cin >> mnu[i].id[x];			
	if (mnu[i].id[x] == 'A'){
		pastries();
	}
	else if (mnu[i].id[x] == 'B'){
		beverage();
	}
	
}
void pastries(){
	char M;
	int many;	
	system ("cls");
	system ("Color f5");
	cout << " The 7th Heaven Cafe" << endl << endl;
	cout << setw(20) << "A. Pastries " << endl; 
	cout << setw(36) << "1. Choco Cupcake w/ Nutella " 
	<< setw(12) << "Php" << choco << endl; 
	cout << setw(30) << "2. Coffee Cake Muffin " 
	<< setw(18) << "Php" << coffee << endl; 
	cout << setw(30) << "3. Red Velvet Cupcake " 
	<< setw(18) << "Php" << red << endl; 
	cout << setw(32) << "4. Blueberry Cheesecake " 
	<< setw(16) << "Php" << blueberry << endl; 
	cout << setw(30) << "5. Little Banofee Pie " 
	<< setw(18) << "Php" << banofee << endl; 
	cout << setw(29) << "6. Classic Sansrival " 
	<< setw(19) << "Php" << sansrival << endl; 	
	cout << setw(36) << "7. Choco Lava Cake ala Mode " 
	<< setw(12) << "Php" << alamode << endl; 
	cout << "\n\n";
	cout << "Please choose from the following:   ";
	cin >> x;
	switch(x)
	{
		case 1:
			cout<<"\nChoco Cupcake w/ Nutella"<<endl;
            cout<<"Price: Php"<<choco<<endl;
            cout<<"How many? ";
            cin>>many;
            A = choco*many;
            cout<< "Item price is Php" << A
            << "\nTax is Php" << tax * A << endl;
            total = (tax * A) + A;
            cout << "Total price  is Php" << total;
          	cout << "\n\nPress 'Enter' key to continue";
			cin.get(nex);
			getch();
			system ("cls");
			system ("Color f5");
			cout << " The 7th Heaven Cafe" << endl << endl;
			cout << "Customer's Name: " << cd.first << " " << cd.last
			<< "\nAddress: " << cd.address << "\nContactNo.: " << cd.contactNumber;
			cout << "\nItem is: Choco Cupcake w/ Nutella";
			cout<< "\nItem price is Php" << A
    		<< "\nTax is Php" << tax * A << endl;
    		total = (tax * A) + A;
    		cout << "\nTotal price  is Php" << total;
    		cout << "\nEnter amount of cash: Php";
    		cin >> cash;
    		cout << "\nChange is Php" << cash-total;
			getch();
			break;
		case 2:
			cout<<"\nCoffee Cake Muffin"<<endl;
            cout<<"Price: Php"<<coffee<<endl;
            cout<<"How many? ";
            cin>>many;
            A = coffee*many;
             cout<< "Item price is Php" << A
            << "\nTax is Php" << tax * A << endl;
            total = (tax * A) + A;
            cout << "Total price  is Php" << total;
          	cout << "\n\nPress 'Enter' key to continue";
			cin.get(nex);
			getch();
			system ("cls");
			system ("Color f5");
			cout << " The 7th Heaven Cafe" << endl << endl;
			cout << "Customer's Name: " << cd.first << " " << cd.last
			<< "\nAddress: " << cd.address << "\nContactNo.: " << cd.contactNumber;
			cout << "\nItem is: Coffee Cake Muffin";
			cout<< "\nItem price is Php" << A
    		<< "\nTax is Php" << tax * A << endl;
    		total = (tax * A) + A;
    		cout << "\nTotal price  is Php" << total;
    		cout << "\nEnter amount of cash: Php";
    		cin >> cash;
    		cout << "\nChange is Php" << cash-total;
			break;
		case 3:
			cout<<"\nRed Velvet Cupcake"<<endl;
            cout<<"Price: Php"<<red<<endl;
            cout<<"How many? ";
            cin>>many;
          	A = red*many;
             cout<< "Item price is Php" << A
            << "\nTax is Php" << tax * A << endl;
            total = (tax * A) + A;
            cout << "Total price  is Php" << total;
          	cout << "\n\nPress 'Enter' key to continue";
			cin.get(nex);
			getch();
			system ("cls");
			system ("Color f5");
			cout << " The 7th Heaven Cafe" << endl << endl;
			cout << "Customer's Name: " << cd.first << " " << cd.last
			<< "\nAddress: " << cd.address << "\nContactNo.: " << cd.contactNumber;
			cout << "\nItem is: Red Velvet Cupcake";
			cout<< "\nItem price is Php" << A
    		<< "\nTax is Php" << tax * A << endl;
    		total = (tax * A) + A;
    		cout << "\nTotal price  is Php" << total;
    		cout << "\nEnter amount of cash: Php";
    		cin >> cash;
    		cout << "\nChange is Php" << cash-total;
			break;
		case 4:
			cout<<"\nBlueberry Cheesecake"<<endl;
            cout<<"Price: Php"<<blueberry<<endl;
            cout<<"How many? ";
            cin>>many;
          	A = blueberry*many;
             cout<< "Item price is Php" << A
            << "\nTax is Php" << tax * A << endl;
            total = (tax * A) + A;
            cout << "Total price  is Php" << total;
          	cout << "\n\nPress 'Enter' key to continue";
			cin.get(nex);
			getch();
			system ("cls");
			system ("Color f5");
			cout << " The 7th Heaven Cafe" << endl << endl;
			cout << "Customer's Name: " << cd.first << " " << cd.last
			<< "\nAddress: " << cd.address << "\nContactNo.: " << cd.contactNumber;
			cout << "\nItem is: Blueberry Cheesecake";
			cout<< "\nItem price is Php" << A
    		<< "\nTax is Php" << tax * A << endl;
    		total = (tax * A) + A;
    		cout << "\nTotal price  is Php" << total;
    		cout << "\nEnter amount of cash: Php";
    		cin >> cash;
    		cout << "\nChange is Php" << cash-total;
			break;
		case 5:
			cout<<"\nLittle Banofee Pie"<<endl;
            cout<<"Price: Php"<<banofee<<endl;
            cout<<"How many? ";
            cin>>many;
          	A = banofee*many;
            cout<< "Item price is Php" << A
            << "\nTax is Php" << tax * A << endl;
            total = (tax * A) + A;
            cout << "Total price  is Php" << total;
          	cout << "\n\nPress 'Enter' key to continue";
			cin.get(nex);
			getch();
			system ("cls");
			system ("Color f5");
			cout << " The 7th Heaven Cafe" << endl << endl;
			cout << "Customer's Name: " << cd.first << " " << cd.last
			<< "\nAddress: " << cd.address << "\nContactNo.: " << cd.contactNumber;
			cout << "\nItem is: Little Banofee Pie";
			cout<< "\nItem price is Php" << A
    		<< "\nTax is Php" << tax * A << endl;
    		total = (tax * A) + A;
    		cout << "\nTotal price  is Php" << total;
    		cout << "\nEnter amount of cash: Php";
    		cin >> cash;
    		cout << "\nChange is Php" << cash-total;
			break;							
        case 6:
			cout<<"\nClassic Sansrival"<<endl;
            cout<<"Price: Php"<<sansrival<<endl;
            cout<<"How many? ";
            cin>>many;
            A = sansrival*many;
             cout<< "Item price is Php" << A
            << "\nTax is Php" << tax * A << endl;
            total = (tax * A) + A;
            cout << "Total price  is Php" << total;
          	cout << "\n\nPress 'Enter' key to continue";
			cin.get(nex);
			getch();
			system ("cls");
			system ("Color f5");
			cout << " The 7th Heaven Cafe" << endl << endl;
			cout << "Customer's Name: " << cd.first << " " << cd.last
			<< "\nAddress: " << cd.address << "\nContactNo.: " << cd.contactNumber;
			cout << "\nItem is: Classic Sansrival";
			cout<< "\nItem price is Php" << A
    		<< "\nTax is Php" << tax * A << endl;
    		total = (tax * A) + A;
    		cout << "\nTotal price  is Php" << total;
    		cout << "\nEnter amount of cash: Php";
    		cin >> cash;
    		cout << "\nChange is Php" << cash-total;
			break;
		 case 7:
			cout<<"\nChoco Lava Cake ala Mode"<<endl;
            cout<<"Price: Php"<<alamode<<endl;
            cout<<"How many? ";
            cin>>many;
            A = alamode*many;
             cout<< "Item price is Php" << A
            << "\nTax is Php" << tax * A << endl;
            total = (tax * A) + A;
            cout << "Total price  is Php" << total;
          	cout << "\n\nPress 'Enter' key to continue";
			cin.get(nex);
			getch();
			system ("cls");
			system ("Color f5");
			cout << " The 7th Heaven Cafe" << endl << endl;
			cout << "Customer's Name: " << cd.first << " " << cd.last
			<< "\nAddress: " << cd.address << "\nContactNo.: " << cd.contactNumber;
			cout << "\nItem is: Choco Lava Cake ala Mode";
			cout<< "\nItem price is Php" << A
    		<< "\nTax is Php" << tax * A << endl;
    		total = (tax * A) + A;
    		cout << "\nTotal price  is Php" << total;
    		cout << "\nEnter amount of cash: Php";
    		cin >> cash;
    		cout << "\nChange is Php" << cash-total;
			break;				    
	}
	
}
void beverage(){
	system ("cls");
	system ("Color f5");
	cout << " The 7th Heaven Cafe" << endl << endl;
	cout << setw(21) << "B. Beverages " << endl; 	
	cout << setw(21) << "1. Capuccino " 
	<< setw(27) << "Php" << capuccino << endl; 
	cout << setw(23) << "2. Mocha Latte " 
	<< setw(25) << "Php" << mocha << endl; 
	cout << setw(20) << "3. Espresso " 
	<< setw(28) << "Php" << espresso << endl; 
	cout << setw(26) << "4. Caramel Frappe " 
	<< setw(22) << "Php" << caramel << endl; 
	cout << setw(26) << "5. Vanilla Frappe " 
	<< setw(22) << "Php" << vanilla << endl; 
	cout << setw(32) << "6. Strawberry Milkshake " 
	<< setw(16) << "Php" << sberry << endl; 	
	cout << setw(31) << "7. Chocolate Milkshake " 
	<< setw(17) << "Php" << chocoM << endl << endl; 
	cout << "\n\n";
	cout << "Please choose from the following:  ";
	cin >> x;
	switch(x)
	{
		case 1:
			cout<<"\nCapuccino"<<endl;
            cout<<"Price: Php"<<capuccino<<endl;
            cout<<"How many? ";
            cin>>many;
			A = capuccino*many;
             cout<< "Item price is Php" << A
            << "\nTax is Php" << tax * A << endl;
            total = (tax * A) + A;
            cout << "Total price  is Php" << total;
          	cout << "\n\nPress 'Enter' key to continue";
			cin.get(nex);
			getch();
			system ("cls");
			system ("Color f5");
			cout << " The 7th Heaven Cafe" << endl << endl;
			cout << "Customer's Name: " << cd.first << " " << cd.last
			<< "\nAddress: " << cd.address << "\nContactNo.: " << cd.contactNumber;
			cout << "\nItem is: Capuccino";
			cout<< "\nItem price is Php" << A
    		<< "\nTax is Php" << tax * A << endl;
    		total = (tax * A) + A;
    		cout << "\nTotal price  is Php" << total;
    		cout << "\nEnter amount of cash: Php";
    		cin >> cash;
    		cout << "\nChange is Php" << cash-total;
			break;
		case 2:
			cout<<"\nMocha Latte"<<endl;
            cout<<"Price: Php"<<mocha<<endl;
            cout<<"How many? ";
            cin>>many;
            A = mocha*many;
            cout<< "Item price is Php" << A
            << "\nTax is Php" << tax * A << endl;
            total = (tax * A) + A;
            cout << "Total price  is Php" << total;
          	cout << "\n\nPress 'Enter' key to continue";
			cin.get(nex);
			getch();
			system ("cls");
			system ("Color f5");
			cout << " The 7th Heaven Cafe" << endl << endl;
			cout << "Customer's Name: " << cd.first << " " << cd.last
			<< "\nAddress: " << cd.address << "\nContactNo.: " << cd.contactNumber;
			cout << "\nItem is: Mocha Latte";
			cout<< "\nItem price is Php" << A
    		<< "\nTax is Php" << tax * A << endl;
    		total = (tax * A) + A;
    		cout << "\nTotal price  is Php" << total;
    		cout << "\nEnter amount of cash: Php";
    		cin >> cash;
    		cout << "\nChange is Php" << cash-total;
			break;
		case 3:
			cout<<"\nEspresso"<<endl;
            cout<<"Price: Php"<<espresso<<endl;
            cout<<"How many? ";
            cin>>many;
            A = espresso*many;
            cout<< "Item price is Php" << A
            << "\nTax is Php" << tax * A << endl;
            total = (tax * A) + A;
            cout << "Total price  is Php" << total;
          	cout << "\n\nPress 'Enter' key to continue";
			cin.get(nex);
			getch();
			system ("cls");
			system ("Color f5");
			cout << " The 7th Heaven Cafe" << endl << endl;
			cout << "Customer's Name: " << cd.first << " " << cd.last
			<< "\nAddress: " << cd.address << "\nContactNo.: " << cd.contactNumber;
			cout << "\nItem is: Espresso";
			cout<< "\nItem price is Php" << A
    		<< "\nTax is Php" << tax * A << endl;
    		total = (tax * A) + A;
    		cout << "\nTotal price  is Php" << total;
    		cout << "\nEnter amount of cash: Php";
    		cin >> cash;
    		cout << "\nChange is Php" << cash-total;
			break;		
		case 4:
			cout<<"\nCaramel Frappe"<<endl;
            cout<<"Price: Php"<<caramel<<endl;
            cout<<"How many? ";
            cin>>many;
            A = caramel*many;
            cout<< "Item price is Php" << A
            << "\nTax is Php" << tax * A << endl;
            total = (tax * A) + A;
            cout << "Total price  is Php" << total;
          	cout << "\n\nPress 'Enter' key to continue";
			cin.get(nex);
			getch();
			system ("cls");
			system ("Color f5");
			cout << " The 7th Heaven Cafe" << endl << endl;
			cout << "Customer's Name: " << cd.first << " " << cd.last
			<< "\nAddress: " << cd.address << "\nContactNo.: " << cd.contactNumber;
			cout << "\nItem is: Caramel Frappe";
			cout<< "\nItem price is Php" << A
    		<< "\nTax is Php" << tax * A << endl;
    		total = (tax * A) + A;
    		cout << "\nTotal price  is Php" << total;
    		cout << "\nEnter amount of cash: Php";
    		cin >> cash;
    		cout << "\nChange is Php" << cash-total;
			break;	
		case 5:
			cout<<"\nVanilla Frappe"<<endl;
            cout<<"Price: Php"<<vanilla<<endl;
            cout<<"How many? ";
            cin>>many;
            A = vanilla*many;
           	cout<< "Item price is Php" << A
            << "\nTax is Php" << tax * A << endl;
            total = (tax * A) + A;
            cout << "Total price  is Php" << total;
          	cout << "\n\nPress 'Enter' key to continue";
			cin.get(nex);
			getch();
			system ("cls");
			system ("Color f5");
			cout << " The 7th Heaven Cafe" << endl << endl;
			cout << "Customer's Name: " << cd.first << " " << cd.last
			<< "\nAddress: " << cd.address << "\nContactNo.: " << cd.contactNumber;
			cout << "\nItem is: Vanilla Frappe";
			cout<< "\nItem price is Php" << A
    		<< "\nTax is Php" << tax * A << endl;
    		total = (tax * A) + A;
    		cout << "\nTotal price  is Php" << total;
    		cout << "\nEnter amount of cash: Php";
    		cin >> cash;
    		cout << "\nChange is Php" << cash-total;
			break;
		case 6:
			cout<<"\nStrawberry Milkshake"<<endl;
            cout<<"Price: Php"<<sberry<<endl;
            cout<<"How many? ";
            cin>>many;
            A = sberry*many;
           	cout<< "Item price is Php" << A
            << "\nTax is Php" << tax * A << endl;
            total = (tax * A) + A;
            cout << "Total price  is Php" << total;
          	cout << "\n\nPress 'Enter' key to continue";
			cin.get(nex);
			getch();
			system ("cls");
			system ("Color f5");
			cout << " The 7th Heaven Cafe" << endl << endl;
			cout << "Customer's Name: " << cd.first << " " << cd.last
			<< "\nAddress: " << cd.address << "\nContactNo.: " << cd.contactNumber;
			cout << "\nItem is: Strawberry Milkshake";
			cout<< "\nItem price is Php" << A
    		<< "\nTax is Php" << tax * A << endl;
    		total = (tax * A) + A;
    		cout << "\nTotal price  is Php" << total;
    		cout << "\nEnter amount of cash: Php";
    		cin >> cash;
    		cout << "\nChange is Php" << cash-total;
			break;
		case 7:
			cout<<"\nChocolate Milkshake"<<endl;
            cout<<"Price: Php"<<chocoM<<endl;
            cout<<"How many? ";
            cin>>many;
            A = chocoM*many;
            cout<< "Item price is Php" << A
            << "\nTax is Php" << tax * A << endl;
            total = (tax * A) + A;
            cout << "Total price  is Php" << total;
          	cout << "\n\nPress 'Enter' key to continue";
			cin.get(nex);
			getch();
			system ("cls");
			system ("Color f5");
			cout << " The 7th Heaven Cafe" << endl << endl;
			cout << "Customer's Name: " << cd.first << " " << cd.last
			<< "\nAddress: " << cd.address << "\nContactNo.: " << cd.contactNumber;
			cout << "\nItem is: Chocolate Milkshake";
			cout<< "\nItem price is Php" << A
    		<< "\nTax is Php" << tax * A << endl;
    		total = (tax * A) + A;
    		cout << "\nTotal price  is Php" << total;
    		cout << "\nEnter amount of cash: Php";
    		cin >> cash;
    		cout << "\nChange is Php" << cash-total;
			break;						
							
	}
}

