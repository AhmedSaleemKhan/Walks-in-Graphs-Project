#include<iostream>
using namespace std;
class hostel
{
	const  float distance;
	public:
		hostel():distance(0.6)
		{
			cout<<" \n\t\t __________________________________"<<endl;
			cout<<" \n\t\t| THREE WAYS TO BOYS HOSTEL         |"<<endl;
			cout<<" \t\t|1. FROM GIRLS HOSTEL SIDE          |"<<endl;
			cout<<" \t\t|2. FROM BRIDGE NEAR FOTBALL GROUND |"<<endl; 
			cout<<" \t\t|3. FROM CAFETARIA/STC SIDE         |"<<endl;
			cout<<" \n\t\t __________________________________"<<endl;
			cout<<" \n\n\t\tTHE SHORTEST DISTANCE TO HOSTEL IS FROM 2 :: "<<endl;
			cout<<" \n\t\tCOVERS THE DISTANCE OF  "<<distance<<" km "<<endl;
			cout<<" \n\t\t __________________________________"<<endl;
		}
	
};
class islamabad
{
	const float distance;
	public:
		islamabad():distance(81.2)
		{
			cout<<" \n\t\t _____________________________________"<<endl;
			cout<<" \n\t\t|THIER SEVERAL WAYS TO GO TO ISLAMBAD |"<<endl;
			cout<<" \t\t|1. FROM G.T ROAD VIA TEXLA SIDE      |"<<endl;
			cout<<" \t\t|2. FROM HAZARA MOTORWAY /M-15        |"<<endl;
			cout<<" \n\t\t _____________________________________"<<endl;
			cout<<" \n\n\t\tTHE SHORTEST DISTANCE IS FROM MOTORWAY IS 2 ::  "<<endl;
			cout<<" \n\t\tCOVERS THE DISTANCE OF  "<<distance<<" km "<<endl;
			cout<<" \n\t\t __________________________________"<<endl;	
		}	
};
class lahore{
	const float distance;
	public:
		lahore():distance(429.8)
		{
			cout<<" \n\t\t __________________________________"<<endl;
			cout<<" \n\t\t|MANY WAYS FOR GOING LAHORE        |"<<endl;
			cout<<" \t\t|1.  (429.8 km) via  Motorway/M-2  |"<<endl;
			cout<<" \t\t|2. VIA G.T ROAD WITH 459 km  DIST |"<<endl;
			cout<<" \n\t\t __________________________________"<<endl;
			cout<<" \n\n\t \tTHE SHORTEST DISTANCE IS FROM MOTORWAY IS 1 ::  "<<endl;
			cout<<" \n\t\tCOVERS THE DISTANCE OF "<<distance<<endl;
			cout<<" \n\t\t __________________________________"<<endl;
		}
};
class abt{
	const float distance;
	public:
		abt():distance(52.2)
		{
			cout<<" \n\t\t _________________________________________"<<endl;
			cout<<" \n\t\t|SEVERAL WAYS FOR GOING TO ABBOTABAD      |"<<endl;
			cout<<" \t\t|1. 1 hr 1 min (52.2 km)  Hazara Motorway | "<<endl;
			cout<<" \t\t|2. 1 hr 55 min (61.9 km) via GT Rd-Jabbri| "<<endl;
			cout<<" \n\t\t _________________________________________"<<endl;
			cout<<" \n\n\t\tTHE SHORTEST DISTANCE TO ABBOTABAD IS 1 ::  "<<endl;
			cout<<" \n\t\tCOVER THE DISTANCE OF ::  "<<distance <<endl;
			cout<<" \n\t\t __________________________________"<<endl;
		}
};
class ghazi{
	const float distance;
	public:
		ghazi():distance(45.6)
		{
			cout<<" \n\t\t _______________________________________"<<endl;
			cout<<" \n\t\t|DIFFRENT PATHS FOR GOING TO GIK UNI    |"<<endl;
			cout<<" \t\t|1. VIA MOTORWAY WITH DISTANCE OF 56 Km |"<<endl;
			cout<<" \t\t|2. VIA SIRIKOT WITH DISTANCE OF 45.6 km|"<<endl;
			cout<<" \n\t\t _______________________________________"<<endl;
			cout<<" \n\n\t\tTHE SHORTEST DISTANCE IS FROM SIRIKOT ROAD IS 2 ::  "<<endl;
			cout<<" \n\t\tCOVERS THE DISTANCE OF "<<distance<<endl;
			cout<<" \n\t\t __________________________________"<<endl;
		}
};
void create()
{
	hostel h1;
}
void create1()
{
	islamabad i1;
}
void create2()
{
	lahore l1;
}
void create3()
{
	ghazi g1;
}
void create4()
{
	abt a1;
}
int main()
{
	int choice;
	cout<<"\n\n\t\t\t <<<<<<<<<<<<<<<< WELCOME TO WALKS IN GRAPHS PROGRAM >>>>>>>>>>>>>>>>>>>>> "<<endl;
	cout<<" \n\n\t\t  :: THIS PROGRAM WILL ILLUSTRATE THE SHORTEST DISTANCE FOR YOUR SELECTED DETINATION :: ";
	
	
	 while(true)
	 {
	 	
	 	cout<<"\n\n\t\t\t      <<<<<<<<<<<<<<<<<DESTINATIONS>>>>>>>>>>>>>>>>>>> "<<endl;
	    cout<<"\n\t\t\t\t\t    __________________"<<endl;
		cout<<"\t\t\t\t\t    | 1. BOYS HOSTEL |"<<endl;
		cout<<"\t\t\t\t\t    | 2. ISLAMABAD   |"<<endl;
		cout<<"\t\t\t\t\t    | 3. LAHORE      |"<<endl;
		cout<<"\t\t\t\t\t    | 4. ABBOTABAD   |"<<endl;
		cout<<"\t\t\t\t\t    | 5. GIK UNI     |"<<endl;
		cout<<"\t\t\t\t\t    __________________"<<endl;
	
	    cout<<"\n\t\t ENTER YOUR CHOICE and 0 to exit "<<endl;
    	cout<<"\t\t";	cin>>choice;
	
//	 	if(choice!=0)
//	 		continue;
	 	if(choice==0)
	 		break;		
		 switch(choice)
	    {
		 	case 1:
	 			create();
	 			break;
	 		case 2:
		 		create1();
		 		break;
			case 3:
				create2();
				break;
			case 4:
				create4();
				break;
			case 5:
				create3();
				break;
			default:
				cout<<" \n\n\t\t\t ::INVALID INPUT :: "<<endl; 
	     }
	 
	 }
	 cout<<"\n\n\t\t\t<<<<<<<<<<<<<<<<<<<< THANK YOU FOR USING THIS SOFTWARE >>>>>>>>>>>>>>>>>>>>>>>>>>>> "<<endl;
}