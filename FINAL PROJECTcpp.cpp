#include<iostream>
#include<cstring>
#include<fstream>
#include<iomanip>
using namespace std;

struct store{
	public:
		
	int choose;
	char choose_again[2];
	char confirm[2];
	int cash;
	
	
};

void kobe_11();
void hyperdunk();
void nike_zoom();
void view_order();
void update();

int main()
{
	system("cls");
	ofstream fout;
	fout.open("C:\\Users\\Christine\\Documents\\FILE HANDLING\\order.txt");
	store shoes;
	cout<<" ********** FIT TO SHOES ********** "<<endl;
	cout<<"Store that apt to fit your shoes :)"<<endl<<endl;
	cout<<"Choose: "<<endl;
	cout<<"NIKE SHOES:"<<setw(50)<<"ADIDAS SHOES:"<<endl;
	cout<<"[1] Kobe 11 - Php 8095 "<<setw(50)<<"[6] D Rose 7 - Php 7995 "<<endl;
	cout<<"[2] Hyperdunk 2016 FK - Php 9895 "<<setw(45)<<"[7] D Lillard 2.0 - Php 6995 "<<endl;
	cout<<"[3] Nike Zoom KD 9 - Php 7645 "<<setw(60)<<"[8] Crazylight Boost Low 2016 - Php 7995 "<<endl;
	cout<<"[4] Kyrie 2 - Php 6295 "<<setw(52)<<"[9] Stan Smith - Php 4895 "<<endl;
	cout<<"[5] Lebron Soldier 10 - Php 6745 "<<setw(43)<<"[10] Ultra boost - Php 8295 "<<endl;
	cout<<"Order: ";
	cin>>shoes.choose;
	switch(shoes.choose)
	{
		case 1:
			{
			
					kobe_11();
					break;
			}
		
		case 2:
			hyperdunk();
			break;
		
			
	}
	
	
	//view_order();
	
	
	//fout<<shoes.choose;

	//cout<<"Do you want to order again? [Y/N]";
	//cin<<shoes.choose_again;
	
	
	
}

void kobe_11()
{
	store shoes;
	int price;
	price=8095;
	cout<<"Order Again?[Y/N]";
	cin>>shoes.choose_again;
	if(strcmp(shoes.choose_again,"Y")==0||strcmp(shoes.choose_again,"y")==0)
	{
		FILE *fp;
		fp=fopen("C:\\Users\\Christine\\Documents\\FILE HANDLING\\order.txt","a");
		fputs("Kobe 11 - Php 8095",fp);
		fclose(fp);
		main();
	}else(strcmp(shoes.choose_again,"N")==0||strcmp(shoes.choose_again,"n")==0);
	{
		FILE *fp;
		fp=fopen("C:\\Users\\Christine\\Documents\\FILE HANDLING\\order.txt","a");
		fputs("Kobe 11 - Php 8095",fp);
		fclose(fp);
		view_order();
	}
	cout<<"\nPlease confirm [Y/N]: ";
	cin>>(shoes.confirm);
	if(strcmp(shoes.confirm,"y")==0||strcmp(shoes.confirm,"Y")==0)
	{
		cash:cout<<"Your cash: ";
		cin>>shoes.cash;
		if((shoes.cash)==price)
		{
			cout<<"Printing receipt";
		
			
		}else if((shoes.cash)>price)
		{
			cout<<"Printing receipt";
		
			//may graphics then magsusubratct siya
		}
		else
		{
			cout<<"Invalid input of cash"<<endl;
		
			goto cash;
		}
	}else
		main();
	
}
void hyperdunk()
{

	store shoes;
	int price;
	price=9895;
	cout<<"Order Again?[Y/N]";
	cin>>shoes.choose_again;
	if(strcmp(shoes.choose_again,"Y")==0||strcmp(shoes.choose_again,"y")==0)
	{	
		FILE *fp;
		fp=fopen("C:\\Users\\Christine\\Documents\\FILE HANDLING\\order.txt","a");
		fputs("Hyperdunk 2016 FK - Php 9895",fp);
		fclose(fp);
		main();
	}else
	{
		FILE *fp;
		fp=fopen("C:\\Users\\Christine\\Documents\\FILE HANDLING\\order.txt","a");
		fputs("Hyperdunk 2016 FK - Php 9895",fp);
		fclose(fp);
		view_order();
	}
	cout<<"\nPlease confirm [Y/N]: ";
	cin>>(shoes.confirm);
	if(strcmp(shoes.confirm,"y")==0||strcmp(shoes.confirm,"Y")==0)
	{
		cash:cout<<"Your cash: ";
		cin>>shoes.cash;
		if(shoes.cash==price)
		{
			cout<<"Printing receipt";
		
		}else if(shoes.cash>price)
		{
			
			cout<<"Printing receipt";//may graphics then magsusubratct siya
		}
		else
		{
			cout<<"Invalid input of cash"<<endl;
			goto cash;
		}
	}else
	{
		main();
	}
		
}

void view_order() //to view order using file handling i transfer order to the text and i output here the order
{
	char buff[1000];
	store shoes;
	FILE *fp;
	fp=fopen("C:\\Users\\Christine\\Documents\\FILE HANDLING\\order.txt","r");
	while(fgets(buff,1000,fp)!=NULL)
	cout<<buff;
	fclose(fp);
	
}
void update()
{
	
}
