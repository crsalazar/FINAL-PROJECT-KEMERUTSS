#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int total(0);
int balance;
int cash;
class details{
	public:
	void title();
	void choose(int price,int quantity);
	int payment(int pricem,int quantity);
	void kobe();
	
};
struct cashier{
	int pin[4];
	struct{
		int order;
		int order_again;
		int payment;
	}shoes;
};


void details::title(){
	cout<<" ********** FIT TO SHOES ********** "<<endl;
	cout<<"Store that apt to fit your shoes :)"<<endl<<endl;
	cout<<"Choose: "<<endl;
	cout<<"NIKE SHOES:"<<setw(50)<<"ADIDAS SHOES:"<<endl;
	cout<<"[1] Kobe 11 - Php 8095 "<<setw(50)<<"[6] D Rose 7 - Php 7995 "<<endl;
	cout<<"[2] Hyperdunk 2016 FK - Php 9895 "<<setw(45)<<"[7] D Lillard 2.0 - Php 6995 "<<endl;
	cout<<"[3] Nike Zoom KD 9 - Php 7645 "<<setw(60)<<"[8] Crazylight Boost Low 2016 - Php 7995 "<<endl;
	cout<<"[4] Kyrie 2 - Php 6295 "<<setw(52)<<"[9] Stan Smith - Php 4895 "<<endl;
	cout<<"[5] Lebron Soldier 10 - Php 6745 "<<setw(44)<<"[10] Ultra boost - Php 8295 "<<endl;
}
int main()
{
	system("cls");
	details menu1;
	menu1.title();
	cashier Shoes;
	cout<<"Order: ";
	cin>>Shoes.shoes.order;
	switch(Shoes.shoes.order)
	{
		case 1:
			{
				int price=8095;
				int quantity(0);
				cout<<"You have chosen: Kobe 11"<<endl;
				cout<<"Quantity: ";
				cin>>quantity;
				total+=(price*quantity);
				menu1.choose(price,quantity);
				//file handling sa receipt
				fstream fout("C:\\Users\\crsalazar\\Desktop\\cpe\\total_receipt.txt");
				cout<<"Total: "<<total;
				cash:cout<<"\nCash: ";
				cin>>cash;
			
				if(cash<total)
				{
					cout<<"Invalid Input of cash"<<endl;
					goto cash;
				}
				if((cash>total)||(cash=total))
				{
					balance=cash-total;
					cout<<"Balance:"<<balance<<endl;
					system("pause>0");
					total=0;
					main();
				}	
				
			}
		case 2:
			{
				int price=9895;
				int quantity(0);
				cout<<"You have chosen: Hyperdunk 2016 FK"<<endl;
				cout<<"Quantity: ";
				cin>>quantity;
				total+=(price*quantity);
				menu1.choose(price,quantity);
				//file handling sa receipt
				fstream fout("C:\\Users\\crsalazar\\Desktop\\cpe\\total_receipt.txt");
				cout<<"Total: "<<total;
				cash:cout<<"\nCash: ";
				cin>>cash;
			
				if(cash<total)
				{
					cout<<"Invalid Input of cash"<<endl;
					goto cash;
				}
				if((cash>total)||(cash=total))
				{
					balance=cash-total;
					cout<<"Balance:"<<balance<<endl;
					system("pause>0");
					total=0;
					main();
				}	
				
			}
		case 3:
			{
				int price=7645;
				int quantity(0);
				cout<<"You have chosen: Nike Zoom KD 9"<<endl;
				cout<<"Quantity: ";
				cin>>quantity;
				total+=(price*quantity);
				menu1.choose(price,quantity);
				//file handling sa receipt
				fstream fout("C:\\Users\\crsalazar\\Desktop\\cpe\\total_receipt.txt");
				cout<<"Total: "<<total;
				cash:cout<<"\nCash: ";
				cin>>cash;
			
				if(cash<total)
				{
					cout<<"Invalid Input of cash"<<endl;
					goto cash;
				}
				if((cash>total)||(cash=total))
				{
					balance=cash-total;
					cout<<"Balance:"<<balance<<endl;
					system("pause>0");
					total=0;
					main();
				}	
				
			}
		case 4:
			{
				int price=6295;
				int quantity(0);
				cout<<"You have chosen: Kyrie 2"<<endl;
				cout<<"Quantity: ";
				cin>>quantity;
				total+=(price*quantity);
				menu1.choose(price,quantity);
				//file handling sa receipt
				fstream fout("C:\\Users\\crsalazar\\Desktop\\cpe\\total_receipt.txt");
				fout
				cout<<"Total: "<<total;
				cash:cout<<"\nCash: ";
				cin>>cash;
			
				if(cash<total)
				{
					cout<<"Invalid Input of cash"<<endl;
					goto cash;
				}
				if((cash>total)||(cash=total))
				{
					balance=cash-total;
					cout<<"Balance:"<<balance<<endl;
					system("pause>0");
					total=0;
					main();
				}	
				
			}
		case 5:
			{
				int price=6745;
				int quantity(0);
				cout<<"You have chosen: Lebron Soldier 10"<<endl;
				cout<<"Quantity: ";
				cin>>quantity;
				total+=(price*quantity);
				menu1.choose(price,quantity);
				//file handling sa receipt
				fstream fout("C:\\Users\\crsalazar\\Desktop\\cpe\\total_receipt.txt");
				cout<<"Total: "<<total;
				cash:cout<<"\nCash: ";
				cin>>cash;
			
				if(cash<total)
				{
					cout<<"Invalid Input of cash"<<endl;
					goto cash;
				}
				if((cash>total)||(cash=total))
				{
					balance=cash-total;
					cout<<"Balance:"<<balance<<endl;
					system("pause>0");
					total=0;
					main();
				}	
				
		case 6:
			{
				int price=7995;
				int quantity(0);
				cout<<"You have chosen: D Rose 7"<<endl;
				cout<<"Quantity: ";
				cin>>quantity;
				total+=(price*quantity);
				menu1.choose(price,quantity);
				//file handling sa receipt
				fstream fout("C:\\Users\\crsalazar\\Desktop\\cpe\\total_receipt.txt");
				cout<<"Total: "<<total;
				cash:cout<<"\nCash: ";
				cin>>cash;
			
				if(cash<total)
				{
					cout<<"Invalid Input of cash"<<endl;
					goto cash;
				}
				if((cash>total)||(cash=total))
				{
					balance=cash-total;
					cout<<"Balance:"<<balance<<endl;
					system("pause>0");
					total=0;
					main();
				}	
				
			}
		case 7:
			{
				int price=6995;
				int quantity(0);
				cout<<"You have chosen: D Lillard 2.0"<<endl;
				cout<<"Quantity: ";
				cin>>quantity;
				total+=(price*quantity);
				menu1.choose(price,quantity);
				//file handling sa receipt
				fstream fout("C:\\Users\\crsalazar\\Desktop\\cpe\\total_receipt.txt");
				cout<<"Total: "<<total;
				cash:cout<<"\nCash: ";
				cin>>cash;
			
				if(cash<total)
				{
					cout<<"Invalid Input of cash"<<endl;
					goto cash;
				}
				if((cash>total)||(cash=total))
				{
					balance=cash-total;
					cout<<"Balance:"<<balance<<endl;
					system("pause>0");
					total=0;
					main();
				}	
				
			}
		case 8:
			{
				int price=7995;
				int quantity(0);
				cout<<"You have chosen: Crazylight Boost Low 2016"<<endl;
				cout<<"Quantity: ";
				cin>>quantity;
				total+=(price*quantity);
				menu1.choose(price,quantity);
				//file handling sa receipt
				fstream fout("C:\\Users\\crsalazar\\Desktop\\cpe\\total_receipt.txt");
				cout<<"Total: "<<total;
				cash:cout<<"\nCash: ";
				cin>>cash;
			
				if(cash<total)
				{
					cout<<"Invalid Input of cash"<<endl;
					goto cash;
				}
				if((cash>total)||(cash=total))
				{
					balance=cash-total;
					cout<<"Balance:"<<balance<<endl;
					system("pause>0");
					total=0;
					main();
				}	
				
			}
		case 9: 
			{
				int price=4895;
				int quantity(0);
				cout<<"You have chosen: Stan Smith"<<endl;
				cout<<"Quantity: ";
				cin>>quantity;
				total+=(price*quantity);
				menu1.choose(price,quantity);
				//file handling sa receipt
				fstream fout("C:\\Users\\crsalazar\\Desktop\\cpe\\total_receipt.txt");
				cout<<"Total: "<<total;
				cash:cout<<"\nCash: ";
				cin>>cash;
			
				if(cash<total)
				{
					cout<<"Invalid Input of cash"<<endl;
					goto cash;
				}
				if((cash>total)||(cash=total))
				{
					balance=cash-total;
					cout<<"Balance:"<<balance<<endl;
					system("pause>0");
					total=0;
					main();
				}	
				
			}
		case 10:
			{
				int price=8295;
				int quantity(0);
				cout<<"You have chosen: Ultra boost"<<endl;
				cout<<"Quantity: ";
				cin>>quantity;
				total+=(price*quantity);
				menu1.choose(price,quantity);
				//file handling sa receipt
				fstream fout("C:\\Users\\crsalazar\\Desktop\\cpe\\total_receipt.txt");
				cout<<"Total: "<<total;
				cash:cout<<"\nCash: ";
				cin>>cash;
			
				if(cash<total)
				{
					cout<<"Invalid Input of cash"<<endl;
					goto cash;
				}
				if((cash>total)||(cash=total))
				{
					balance=cash-total;
					cout<<"Balance:"<<balance<<endl;
					system("pause>0");
					total=0;
					main();
				}	
				
			}
		default:
			{
				cout << "INVALID INPUT" << endl;
				main();
			}
	}
	

}
void details::choose(int price,int quantity)
{

	cashier Shoes;
	details menu1;
	cout<<"Do the customer want to buy again?"<<endl;
	cout<<"Press [1]    Buy Again"<<endl;
	cout<<"Press [2]    Proceed to Payment"<<endl;
	cin>>Shoes.shoes.order_again;
	if(Shoes.shoes.order_again==1)
	{
		main();
	}//else
		//menu1.payment(price,quantity);
		
		
}
/*int details::payment(int price,int quantity)
{
		cout<<"Total: "<<total;
		cash:cout<<"\nCash: ";
		cin>>cash;
		if(cash>total)
		{
			balance=cash-total;
			cout<<"Balance:"<<balance;
		}else if(cash=total)
		{
			balance=cash-total;
			cout<<"Balance:"<<balance;
		}else
		{
			cout<<"Invalid Input of cash";
			goto cash;
		}
		//system("pause>0");
		//main();
}*/
