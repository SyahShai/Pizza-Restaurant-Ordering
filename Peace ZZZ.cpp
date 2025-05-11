#include <iostream>
#include <ctime>
using namespace std;
int main ()
{	
	menu:
	cout<<"\t-------------------------------"<<endl;
	cout<<"\t          PIZZA MENU               \t"<<endl;
	cout<<"\t-------------------------------"<<endl;
	cout<<"\t-------------------------------"<<endl;
	cout<<"\t|     [1]      |" "|     [2]     |\t"<<endl;
	cout<<"\t|   Chicken    |" "|    Beef     |\t"<<endl;
	cout<<"\t|   RM 30      |" "|    RM 40    |\t"<<endl;
	cout<<"\t|              |" "|             |\t"<<endl;
	cout<<"\t-------------------------------"<<endl;
	cout<<"\t-------------------------------"<<endl;
	cout<<"\t|     [3]      |" "|    [4]      |\t"<<endl;
	cout<<"\t|  Vegetarian  |" "|   Seafood   |\t"<<endl;
	cout<<"\t|    RM 35     |" "|   RM 45     |\t"<<endl;
	cout<<"\t|              |" "|             |\t"<<endl;
	cout<<"\t-------------------------------"<<endl;
	cout<<"\t      PIZZA SIZE CHARGE          \t"<<endl;
	cout<<"\tLarge  = Add RM20  ---> 8 slice  \t"<<endl;
	cout<<"\tMedium = Add RM15  ---> 6 slice  \t"<<endl;
	cout<<"\tSmall  = No Charge ---> 4 slice  \t"<<endl<<endl;
	cout<<"\t        *RM 10 ADD ONS*          \t"<<endl;
	cout<<"\t-------------------------------"<<endl;
	
	int type, extra, order=0, total=0;
	int quantity,size, vouchers;
	string id, choice1,choice2,choice3;
	double price,payment,paymentV;
	time_t now = time(0);
	char* dt=ctime(&now);

	
	cout<<"\n Your Name:";
	cin>> id;
	cout<<" Welcome Peace ZZZ ! , What you would like to order : \n";
	do
	{
		cout<<"\nPizza size: \n (1)Small \n (2)Medium \n (3)Large  :";
		cin>>size;
		
		cout<<"\nPizza Flavor: \n (1)Chicken \n (2)Beef \n (3)Vegetarian \n (4)Seafood :";
		cin>>type;
		
		cout<<"\nAdditional/Extras:\n (1)Pepperoni\n (2)Pineapple\n (3)Mushroom\n (4)Veggies\n (5)Meat\n (6)Cheese\n (7)None :";
		cin>>extra;
	
			switch(size)
			{
				case 1: choice1="Your order is small"; 
						total=total+0; break;
				case 2: choice1="Your order is medium";
						total=total+15; break;
				case 3: choice1="Your order is large";
						total=total+20; break;
				default: cout<<"Invalid input."; break;
			}
			switch(type)
			{
				case 1:  choice2=" Chicken Pizza"; total=total+30; break;
				case 2:  choice2=" Beef Pizza"; total=total+40; break;
				case 3:  choice2=" Vegetarian Pizza"; total=total+35; break; 
				case 4:  choice2=" Seafood Pizza"; total=total+45; break;
				default: cout<<"\nInvalid input."; break;
			}
			switch(extra)
			{
				case 1:  choice3=" with extra pepperoni.\n"; total=total+10; break; 
				case 2:  choice3=" with extra pineapple.\n"; total=total+10; break;
				case 3:  choice3=" with extra mushroom.\n"; total=total+10; break;
				case 4:  choice3=" with extra veggies.\n"; total=total+10; break;
				case 5:  choice3=" with extra meat.\n"; total=total+10; break;
				case 6:  choice3=" with extra cheese.\n"; total=total+10; break;
				case 7:  choice3=" with no extra.\n"; break;
				default: cout<<"\nInvalid input."; break;
			}
			cout<<"\n\t How many pieces do you want:";
			cin>>quantity;
			cout<<endl<<"\t Do you have vouchers? \n \t (1)NO (2)YES: ";
			cin>>vouchers;	
			if (vouchers==2)
		{
			payment= (total*quantity)-5.00;
		}
		else if (vouchers=1)
		{
			payment= (total*quantity);
		}
		cout<<endl<<"\t Would you like to change your order? \n\t (1)NO (2)YES: ";
		cin>>order;
	}
	while(order==2);
	
		cout<<"\n";
		cout<<endl<<"\n\t            PEACE ZZZ Receipt          "<<endl;
    	cout<<"\t============================================="<<endl;
    	cout<<endl<<"                "<<dt<<endl;
		cout<<"\t     Booking Name     \t:"<<id<<endl;
    	cout<<"\t     Coustomer Order  \t:"<<choice1<<endl;
    	cout<<"\t                      \t"<<choice2<<endl;
		cout<<"\t                      \t"<<choice3;
    	cout<<endl;
    	cout<<"\t     Total Payment    \t: RM"<<payment<<endl;
    	cout<<"\t >>>>>>>Thank You Enjoy Your Meal :) <<<<<<<<<\t"<<endl;

	return 0;
	}
	


	


	