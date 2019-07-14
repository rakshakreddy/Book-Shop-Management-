#include<iostream>
#include<conio.h>		
#include<string>
using namespace std;
class BMS
{
	public:
	BMS()
	{
		cout<<"WELCOME TO IK MANOHAR AND CO";
		cout<<"SUBBU AND IRT PRNTINGS";
	}
	~BMS()
	{
		
	}
};
main()
{
	BMS irt;
	int x,y,z,a,b,c,d,e,f,g;
	string novels,education,business,stories;
	cout<<"enter the category";
	cout<<"1.novels"<<endl<<"2.education"<<endl<<"3.business"<<endl<<"4.stories";
	cin>>x;
	switch(x)
	{
		case 1:
			{
				cout<<"novels available are:";
				cout<<endl<<"1.3_mistakes"<<endl<<"2. 2 States-The story of my marriage"<<endl<<"3.Harry potter"<<endl<<"4.Lord Of The Rings";
				cout<<endl<<"enter the the name";
				cin>>y;
				switch(y)
				{
					case 1:
					cout<<endl<<"author of 3_MISTAKES is I.K MANOHAR VARMA"<<ends<<"price is 500"<<ends<<"published by MEERUT CORPORATION";
					break;
					case 2:
					cout<<endl<<"author of 2 STATES is SUBBA RAMI REDDY"<<ends<<"price is 400"<<ends<<"published by DELHI CORPORATION";
					break;
					case 3:
					cout<<endl<<"author of HARRY POTTER is RAVI TEJA"<<ends<<"price is 450"<<ends<<"published by MUMBAI CORPORATION";
					break;
					case 4:
					cout<<endl<<"author of LORD OF RINGS is SANJEEV REDDY"<<ends<<"price is 300"<<ends<<"published by HYDERABAD CORPORATION";
				}
			}
			case 2:
				{
					cout<<endl<<"available education books are:";
					cout<<endl<<"1.TELUGU"<<endl<<"2.SANSKRIT"<<endl<<"3.HINDI"<<endl<<"4.ENGLISH"<<endl<<"5.MATHEMATICS"<<endl<<"6.SCIENCES"<<endl<<"7.SOCIAL STUDIES";
					cout<<"enter the subject name";
					cin>>z;
					switch(z)
					{
						case 1:
						cout<<endl<<"author name is SHERU"<<ends<<"price is 150"<<ends<<"published by TELUGU ACADEMY";
						break;
						case 2:
						cout<<endl<<"author name is BHASKARA CHARYA"<<ends<<"price is 200"<<ends<<"published by TELUGU ACADEMY";
						break;
						case 3:
						cout<<endl<<"author name is TULASI"<<ends<<"price is 130"<<ends<<"published by TELUGU ACADEMY";
						break;
						case 4:
						cout<<endl<<"author name SHYAM KISHNA"<<ends<<"price is 300"<<ends<<"published by DELHI CORPORATION";
						break;
						case 5:
						cin>>a;
						switch(a)
						{
						case 1:
							{
							
						cout<<endl<<"select the category";
						cout<<"1.Differential equation"<<ends<<"2.Integeration"<<ends<<"3.vectors"<<ends<<"4.Algebra";
						break;
					}
					
				
						cin>>b;
						switch(b)
						{
						
						case 1:
						cout<<endl<<"author name is KANAKA RAJU"<<ends<<"price is 800"<<ends<<"published buy DELHI CORPORATION";
						break;
						case 2:
						cout<<endl<<"author name is KANAKA RAJU"<<ends<<"price is 750"<<ends<<"published by DELHI CORPORATION";
						break;
						case 3:
						cout<<endl<<"author name is KANAKA RAJU"<<ends<<"price is 850"<<ends<<"published by DELHI CORPORATIO";
						break;
						case 4:
						cout<<endl<<"author name is KANAKA RAJU"<<ends<<"price is 1000"<<ends<<"published by DELHI CORPOIRATION";
                        break;					
					}
				}
				case 6:
						{
						
					cout<<endl<<"enter the category";
					cout<<endl<<"1.PHYSICS"<<ends<<"2.CHEMISTRY"<<ends<<"3.BIOLOGY";
				}
					cin>>c;
					switch(c)
					{
					
					case 1:
					cout<<endl<<"enter the sub category of physics";
					cout<<endl<<"1.APPLIED PHYSICS-1"<<ends<<"2.APPLIED PHYSICS-2"<<ends<<"3.QUANTUM PHYSICS";
					cin>>d;
				}
					break;
					switch(d)
	{
					case 1:
					cout<<endl<<"author name is RITHI KANTH"<<ends<<"price is 600"<<ends<<"published by LOVELY PUBLICATIONS";
					break;
					case 2:
					cout<<endl<<"author name is RITHI KANTH"<<ends<<"price is 700"<<ends<<"published by LOVELY PUBLICATIONS";
					break;
					case 3:
					cout<<endl<<"author name is RITHI KANTH"<<ends<<"price is 550"<<ends<<"published by LOVELY PUBLICATIONS";	
	                break;
	}
	            case 2:
	               {
				 cout<<endl<<"author name is MANOHAR LAL"<<ends<<"price is 500"<<ends<<"published by LOVELY PUBLICATIONS";
	                break;
					case 3:
	                cout<<endl<<"author name is ROBINKA KHAJURIA"<<ends<<"price is 300"<<ends<<"published by LOVELY PUBLICATIONS";
	                break;
	    			}
				
	            case 7:
	            	{
	            		{
						
	            	cout<<endl<<"enter the category";
					cout<<endl<<"1.Geo and Civ"<<ends<<"2.His and Eco";
				}
					cin>>e;
					switch(e)
					{
						case 1:
						cout<<endl<<"author name is R K NARAYAN"<<ends<<"price is 450"<<ends<<"published by HYDERABAD CORTARATION";
						break;
						case 2:
						cout<<endl<<"author name is R K NARAYAN"<<ends<<"price is 400"<<ends<<"published by HYDERABAD CORPARATION";	
						break;
						}							
				}
				case 3:
				{
					
				cout<<endl<<"available business books are:";
				cout<<endl<<"1.Dreams with your eyes open"<<ends<<"2.Gender bias"<<ends<<"3.How to be Billioner";
			}
				cin>>f;
				switch(f)
				{
				case 1:
				cout<<endl<<"author name is RONNIE SCREWALA"<<ends<<"price is 470"<<ends<<"published by NOIDA PUBLISHERS";
				break;
				case 2:
				cout<<endl<<"author name is SUDHA MURTHY"<<ends<<"price is 320"<<ends<<"published by MUMBAI CORPARATION";
				break;
				case 3:
				cout<<endl<<"author name is MUKESH AMBANI"<<ends<<"price is 399"<<ends<<"published by ITC LIMITED";	
			}
			    case 4:
				{
				cout<<endl<<"available story books are:";
				cout<<endl<<"1.Love at first sight"<<ends<<"2.Crazy Teen agers"<<ends<<"3.Jodha-Akbar";
			    }
			    cin>>g;
			    switch(f)
			    {
			    case 1:
				cout<<endl<<"author name is	DEEPIKA"<<ends<<"price is 599"<<ends<<"published by KSHATRIYA GROUP";
				break;
				case 2:
				cout<<endl<<"author name is GAYATRI"<<ends<<"price is 449"<<ends<<"published by KSHATRIYA GROUP";
				break;
				case 3:
				cout<<endl<<"author name is SHERU"<<ends<<"price is 649"<<ends<<"published by KSHATRIYA GROUP";
				break;	
			    }
           }
			   getch();
}
}}
