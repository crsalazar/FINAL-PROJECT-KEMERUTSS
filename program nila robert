#include <iostream>
#include <string>
using namespace std;
void kobe9();
void kyrie2();
void RosheRun();
void LebronSoldier10();	
void Lebron13();
void Lebron14();
void Hyperdunk2016();
void Hyperdunk2017();
void KD8();
void KD9();
void StuOrSC();
void pairs();
void purchaseprocess();
void details();
double price, nprice, payment, change; 
char ans, a, ap, anr, agtw, anp, address[100], eadd[100], first_name[50], last_name[50], mn[50];
int sn, scidno, contactnumber, pr, gtw, ac;

struct Customer_Information
{
	char nickname[50]; //variable for the nickname of the customer
	struct
	{
		int s; 
	}shoes;
};

int main()
{
	do{
	system("cls");	
	Customer_Information ci;
	cout << "\nThis is an online Nike Shoes Store." << endl;
	cout << "\nReminder: In your first try to use this website just press enter to continue ";
	cout << "for you to input your nickname. " <<endl;
	cin.ignore();
	cout << "\nKindly enter your nickname: "; 
	cin.getline(ci.nickname,50);
	cout << ci.nickname << ", Good Day and welcome to this store! ";
	
	b:cout << "\n\nInput 1 then press Enter in able for you to choose for the shoes you want: ";
	cin >> gtw;
	if(gtw==1)
	{
		goto a;
	}
	else
	{
		cout << "You did not enter 1 so you are not able to choose your desired shoes. ";
		cout << "Do you want to try again? [Y=Yes/N=No]: ";
		cin >> agtw;
		if (agtw=='Y'||agtw=='y')
		{
			system("cls");
			goto b;
		}
		else
		{
			cout << "Thank you for visiting this website. ";
		}
	}
	a:system("cls");
	cout << "\nThese are the available Nike shoes in this store: " << endl; 
	cout << "[1] Kobe 9" << endl;
	cout << "[2] Kyrie 2" << endl;
	cout << "[3] Roshe Run" << endl;
	cout << "[4] Lebron Soldier 10" << endl;
	cout << "[5] Lebron 13" << endl;
	cout << "[6] Lebron 14" << endl;
	cout << "[7] Hyperdunk 2016" << endl;
	cout << "[8] Hyperdunk 2017" << endl;
	cout << "[9] KD 8" << endl;
	cout << "[10] KD 9" << endl;
	cout << "[11] Exit" << endl;
	cout << "\nPlease enter the number of your choice: "; // In able for the customer to choose for his/her desired shoes
	cin >> ci.shoes.s;									  // just input the number of his/her choice
	switch (ci.shoes.s)
	{
		case 1:
			{
				kobe9();
				pairs();
				StuOrSC();
				purchaseprocess();
			} break;
		case 2:
			{
				kyrie2();
				pairs();
				StuOrSC();
				purchaseprocess();
			} break;	
		case 3:
			{
				RosheRun();
				pairs();
				StuOrSC();
				purchaseprocess();
			} break;	
		case 4:
			{
				LebronSoldier10();
				pairs();
				StuOrSC();
				purchaseprocess();
			} break;	
		case 5:
			{
				Lebron13();
				pairs();
				StuOrSC();
				purchaseprocess();
			} break;
		case 6:
			{
				Lebron14();
				pairs();
				StuOrSC();
				purchaseprocess();
			} break;
		case 7:
			{
				Hyperdunk2016();
				pairs();
				StuOrSC();
				purchaseprocess();
			} break;
		case 8:
			{
				Hyperdunk2017();
				pairs();
				StuOrSC();
				purchaseprocess();
			} break;
		case 9:
			{
				KD8();
				pairs();
				StuOrSC();
				purchaseprocess();
			} break;
		case 10:
			{
				KD9();
				pairs();
				StuOrSC();
				purchaseprocess();
			} break;
		case 11:
			{
				return 0; //To exit the program
			} break;	
		default: cout << "The number of your choice is not in the choices.\n";			
	}
cout << "\nDo you want to canvass or purchase another item? [Y=Yes/N=No]: ";
cin >> anr;
}while(anr=='Y'||anr=='y'); 
if(anr=='N'||anr=='n') 

	cout << "\nThank you for visiting this online store.\n";
}

void kobe9() //Details of the shoes for Case 1
{
	price = 5500.00;
	cout << "\nThis is Kobe 9. It is the 9th signature shoes of Kobe Bryant. ";
	cout << "The price of this pair of shoes is " << price << " Php.";
}

void kyrie2() //Details of the shoes for Case 2
{
	price = 7000.00;
	cout << "\nThis is Kyrie 2. It is the 2nd signature shoes of Kyrie Irving. ";
	cout << "The price of this pair of shoes is " << price << " Php.";
}

void RosheRun() //Details of the shoes for Case 3
{
	price = 4000.00;
	cout << "\nThis is Roshe Run. This is a running shoes. ";
	cout << "The price of this pair of shoes is " << price << " Php.";
}

void LebronSoldier10() //Details of the shoes for Case 4
{
	price = 9000.00;
	cout << "\nThis is Lebron Soldier 10. It is the pair of shoes that Lebron James used in 2016 NBA Finals ";
	cout << "where he was crowned as the Finals MVP because they won that championship. ";
	cout << "\nThe price of this pair of shoes is " << price << " Php.";
}

void Lebron13() //Details of the shoes for Case 5
{
	price = 8500.00;
	cout << "\nThis is Lebron 13. It is the 13th signature shoes of Lebron James. ";
	cout << "The price of this pair of shoes is " << price << " Php.";
}

void Lebron14() //Details of the shoes for Case 6
{
	price = 10500.00;
	cout << "\nThis is Lebron 14. It is the 14th and latest signature shoes of Lebron James. ";
	cout << "The price of this pair of shoes is " << price << " Php.";
}

void Hyperdunk2016() //Details of the shoes for Case 7
{
	price = 4500.00;
	cout << "\nThis is Hyperdunk 2016. It was worn by Kevin Durant. ";
	cout << "The price of this pair of shoes is " << price << " Php.";
}

void Hyperdunk2017() //Details of the shoes for Case 8
{
	price = 6000.00;
	cout << "\nThis is Hyperdunk 2017. It is the latest hyperdunk shoes of Nike. ";
	cout << "The price of this pair of shoes is " << price << " Php.";
}

void KD8() //Details of the shoes for Case 9
{
	price = 7500.00;
	cout << "\nThis is KD 8. It is the 8th signature shoes of Kevin Durant. ";
	cout << "The price of this pair of shoes is " << price << " Php.";
}

void KD9() //Details of the shoes for Case 10
{
	price = 8600.00;
	cout << "\nThis is KD 9. It is the 9th signature shoes of Kevin Durant. ";
	cout << "The price of this pair of shoes is " << price << " Php.";
}

void pairs() // Asking the quantity of pair of shoes
{
	cout << "\n\nHow many pair/s of shoes would you like to buy for this item? ";
	cin >> pr;
	price = pr*price;
	cout << "\nYou are about to purchase " << pr << " pair/s of shoes.";
	cout << "\nThe price of the item/s is " << price << " Php." << endl;
}

void StuOrSC() //Asking if the customer is Student or Senior Citizen
{
	cout << "\n\nAre you a Student? [Y=Yes/N=No]: "; 
	cin >> ans;
	if(ans=='Y'||ans=='y')
	{
		cout << "\nEnter your student number: ";
		cin >> sn;
		nprice = price - (price*0.2);
		cout << "\nYou can avail a 20% discount. The new price of the pair of shoes you want to buy is "<< nprice <<" Php.";
		
	}
	else
	{
		cout << "\n\nAre you a Senior Citizen? [Y=Yes/N=No]: ";
		cin >> a;
		if(a=='Y'||a=='y')
		{
			cout << "Enter your Senior Citizen Card Number: ";
			cin >> scidno;
			nprice = price - (price*0.2);
			cout << "\nYou can avail a 20% discount. The new price of the pair of shoes you want to buy is "<< nprice <<" Php.";
		}
		else
		{
			nprice = price;
			cout << "\n\nYou cannot get a 20% discount. Still, the amount that you need to pay for this pair of shoes is "<< nprice <<" Php.";
		}
	}
}

void purchaseprocess() //The process of purchase
{
	cout << "\n\nWould you like to buy the item/s? [Y=Yes/N=No]: ";
	cin >> ap;
	if(ap=='Y'||ap=='y')
	{
		cout <<"Do you want us to deliver your product at your home? [Y=Yes/N=No]: "; //Asking the customer if he/she wants a deivery service
		cin >> anp;
		if(anp=='Y' || anp=='y')
		{
			cout << "You will be charged 100 pesos. \n";
			nprice=nprice+100;
			cout << "You will pay "<< nprice << " Php.";
			goto h;
		}
		else
		{
			nprice=nprice;
			cout << "You will still pay "<< nprice << " Php.";
			goto h;
		}
		h:cout << "\n\nAccount Number: ";
		cin >> ac;
		cout << "\nEnter your payment: ";
		cin >> payment;
		if(payment>nprice)
		{
			change=payment-nprice;
			cout << "\nYour change is " << change << " Php.";
			cout << "\nThank you for buying this product. Just print the screenshot of the receipt of your purchase and your details.";
			cout << "\nYou may claim your shoes at the nearest Nike store from your home.\n\n";
			cout << "Nike Store Receipt:\n";
			cout << "Payment: " << payment << endl;
			cout << "Price: " << nprice << endl;
			cout << "Change: " << change << endl;
			details();
		}
		if (payment==nprice)
		{
			cout << "\nThank you for buying this product. Just print the screenshot of the receipt of your purchase and your details.";
			cout << "\nYou may claim your shoes at the nearest Nike store from your home.\n\n";
			cout << "Nike Store Receipt:\n";
			cout << "Payment: " << payment << endl;
			cout << "Price: " << nprice << endl;
			cout << "Change: " << change << endl;
			details();
		}
		if (payment<nprice)
		{
			cout << "\nYour payment is insufficient. You cannot purchase this product. ";
			cout << "Just choose another shoes that will fit to your budget.\n";
		}
	}
}

void details() //Details of the customer who bought in this store
{
	cout << "\n\nFill-up the following details:\n";
	cin.ignore();
	cout << "First Name: ";
	cin.getline(first_name,50);
	cout << "Last Name: ";
	cin.getline(last_name,50);
	cout << "Middle Initial: ";
	cin.getline(mn,50);
	cout << "Contact Number: ";
	cin >> contactnumber;
	cin.ignore();
	cout << "Address: ";
	cin.getline(address,100);
	cout << "E-mail Address: ";
	cin.getline(eadd,100);
	
	cout << "\nCUSTOMER DETAILS:\n";
	cout << "\nFull Name: " << first_name << " " << mn << " " << last_name;
	cout << "\nContact Number: " << contactnumber;
	cout << "\nAddress: " << address;
	cout << "\nE-mail Address: " << eadd << endl;
}
