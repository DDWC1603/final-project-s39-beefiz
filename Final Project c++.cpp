//Name Aidil Suffian Bin Abu Bakar
//Name Muhammad Hafiz Afiq Bin Khalid
// FINAL PROJECT C++ (SOALAN 1 )
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

using namespace std;

void help();
void calculate(int& x,int& y);

void calculate(int& x,int& y)
{
	int price,money_in,balance;
						price=x*y;	
	 				    cout<<"Total Price : "<<price<<endl<<endl;
	 				     
	 				    cout<<"Please Enter Your Money :RM ";
					    cin>> money_in;
												 
						balance = money_in - price;
						 
						 if (money_in>=price)
						 {
						 	cout<< "Your Balance : "<<balance<<endl<<endl;
					      	cout<< "Thank You Please Come Again !!!"<<endl;
							  	
						 }
						while(money_in<price)
	 				    {
	 				     	cout<<"Try again"<<endl;
	 				     	
						 	cout<<"Please Enter Your Money :RM ";
					      cin>> money_in;
												 
						  balance = money_in - price;
						 
						 if (money_in>=price)
						 {
						 	cout<< "Your Balance :RM "<<balance<<endl<<endl;
					      	cout<< "Thank You Please Come Again !!!"<<endl;
							  	
						 }	
						}
}
class wtpe
{
public:
	void buatapa_1 ()
{
	int bahasa,lesen,option,helping,TODO,gunweight,pricetag,q_gun,c_gun,price,money_in,balance,nyah;
	
	system("CLS");
	cout<< "Owh This Is Your First Time... What Do You Want to Do?"<<endl<<endl;
			   cout<< "1. Start a war ?" <<endl<<endl;
			   cout<< "2. Defence Your Country?"<<endl<<endl;
			   cout<< "3. Feeling Like Heavy ?"<<endl<<endl;
			   cout<< "4. Feeling like Sneaky ?"<<endl<<endl;
			   
			   cin>> TODO;
			   
			   if (TODO == 1)
			   {
			   	cout<< "Owh You want to start a war.haha nice"<<endl;
			   	
				   cout<< "1. Berat atau 2. Ringan"<<endl;
				   cin>> gunweight;
				   
				   if (gunweight == 1)
				   { // UNTUK GUN BERAT
				   	 
				      cout<< "So you Want Heavy One. Good For Your Body "<<endl;
					  cout<< "1. expansive atau 2.cheep"<<endl;
				   	  cin>> pricetag;
				   	  
				   	  if (pricetag == 1)
				   	  
				   	  { // UNTUK GUN BERAT & MAHAI
				   	  	
				   	  	cout<< "So you want to buy expansive gun eh"<<endl;
				   	  	
				   	  	system ("pause");                                     // Benda yg pause system
			
		             	system ("CLS");
				   	  	
				   	    cout<<" Here For Heavy & Expansive : "<<endl<<endl;
                        cout<<" SHOTGUN : \n1.LEONE YG1263 AUTO SHOTGUN (RM3000) "<<endl;       
                        cout<<" \n RIFLES  : \n2.CLARION 5.56(RM2250) \n3.WDHMIDT SCOUT(RM2750)  \n4.M4A1(RM3100)  \n5.BULLPUP(RM3500)  \n6.KRIEG 550 COMMANDO(RM4200) \n7.MAGNUM SNIPER RIFLE(RM4750) "<<endl;
                        cout<<"\n MACHINE GUN :\n8.M249(RM5750)"<<endl; 
						
						cout<< "\nChoose What Gun Do You Want : "<<endl;
						cin>> c_gun;
						
						cout<< "How Many Do You Want It ? "<<endl<<endl;
					    cin>> q_gun;
						
						if (c_gun == 1)
					    {
					      c_gun = 3000;
					      calculate(c_gun,q_gun);
						  
						}
						
						else if (c_gun == 2)
						{
							c_gun = 2250;
						    calculate(c_gun,q_gun);
						}
						          
		   		   	    else if (c_gun == 3)
						{
							c_gun = 2750;
						  	calculate(c_gun,q_gun);
						}
		   		   	    
				   	  	else if (c_gun == 4)
						{
							c_gun = 3100;
						  	calculate(c_gun,q_gun);
						}
						
						else if (c_gun == 5)
						{
							c_gun = 3500;
						  	calculate(c_gun,q_gun);	
						}
						
						else if (c_gun == 6)
						{
							c_gun = 4200;
						  	calculate(c_gun,q_gun);	
						}
						
						else if (c_gun == 7)
						{
							c_gun = 4750;
						  	calculate(c_gun,q_gun);
						}
						
						else if (c_gun == 8)
						{
							c_gun = 5750;
						  	calculate(c_gun,q_gun);
						}
				      
					  }
				      
				   	  else if (pricetag == 2 )
				   	  
				   	  { // UNTUK GUN BERAT & MURAH
				   	  	
				   	  	cout<<"Cheep Also Good maaa aiya don't worry"<<endl;
				   	  	
				   	  	system ("pause");
				   	  	
				   	  	system ("CLS");
				   	  	
				   	  	cout<<" Here For Heavy & Cheep : "<<endl<<endl;
				   	  	cout<< " SHOTGUNS : \n1.LEONE 12 GAUGE SUPER(RM1700)"<<endl<<endl;
	                    cout<< " RIFLES : \n2.IDF DEFENDER(RM2000) \n3.CV-47(RM2500) \n4.KRIEG 552(RM3500) \n5.MAGNUM SNIPER RIFLE(RM4750) \n6.D3/AU-1(RM5000)"<<endl;
                 
				   	  	cout<< "\nChoose What Gun Do You Want : "<<endl;
						cin>> c_gun;
						
						cout<< "How Many Do You Want It ? "<<endl<<endl;
					    cin>> q_gun;
						
						if (c_gun == 1)
					    {
					      c_gun = 1700;
						  calculate(c_gun,q_gun);
						}
						
						else if (c_gun == 2)
						
						{
							c_gun = 2000;
						  	calculate(c_gun,q_gun);
						}
						          
		   		   	    else if (c_gun == 3)
						{
							c_gun = 2500;
						  	calculate(c_gun,q_gun);
						}
		   		   	    
				   	  	else if (c_gun == 4)
						{
							c_gun = 3500;
						  	calculate(c_gun,q_gun);
						}
						
						else if (c_gun == 5)
						{
							c_gun = 4750;
						  	calculate(c_gun,q_gun);
						}
						
						else if (c_gun == 6)
						{
							c_gun = 5000;
						  	calculate(c_gun,q_gun);	
						}
					}
				   	
				   }
				   
				   else if (gunweight == 2)
				   	{
					   
				   	cout<< "So you Want Lightweght One Good Good. Easy To run Away  "<<endl;
					  cout<< "1. expansive atau 2.cheep"<<endl;
				   	  cin>> pricetag;
				   	  
				   	  if (pricetag == 1)
				   	  
				   	  { // UNTUK GUN RINGAN & MAHAI
				   	  	
				   	  	cout<< "So you want to buy expansive gun eh"<<endl;
				   	  	
				   	  	system ("pause");                                     // Benda yg pause system
			
		             	system ("CLS");
				   	  	
				   	    cout<<" Here For Lightweight & Expansive : "<<endl<<endl;
                        cout<<" PISTOL: \n1.DESERT EAGLE(RM650) \n2.40 DUAL ELITES(RM800) "<<endl;       
                        cout<<" \nSMG : \n3.KM UMP45(RM1700) \n4.ES C90(RM2350) "<<endl;
                                   
		   		   	    
				   	  	cout<< "Choose What Gun Do You Want : "<<endl;
						cin>> c_gun;
						
						cout<< "How Many Do You Want It ? "<<endl<<endl;
					    cin>> q_gun;
						
						if (c_gun == 1)
					    
					    {
					      	c_gun = 650;
						 	calculate(c_gun,q_gun);
						}
						
						else if (c_gun == 2)
						
						{
							c_gun = 800;
						  	calculate(c_gun,q_gun);
						}
						          
		   		   	    else if (c_gun == 3)
						
						{
							c_gun =1700;
						  	calculate(c_gun,q_gun);
						}
		   		   	    
				   	  	else if (c_gun == 4)
						
						{
							c_gun = 2350;
						  	calculate(c_gun,q_gun);
						}
						
				      }
				   	  
				   	  
				   	  else if (pricetag == 2 )
				   	  
				   	  { // UNTUK GUN RINGAN & MURAH
				   	  	
				   	  	cout<<"Cheep Also Good maaa aiya don't worry"<<endl;
				   	  	
				   	  	system ("pause");
				   	  	
				   	  	system ("CLS");
				   	  	
				   	  	cout<<" Here For LightWeight & cheep : "<<endl<<endl;
				   	  	cout<< "PISTOL: \n1.9x19MM SIDEARM(RM400) \n2.KM .45 TACTICAL(RM500) \n3.228 COMPACT(RM600) "<<endl<<endl;
	                    cout<< "SMG :  \n4.INGRAM MAC-10(RM1400) \n5.KM SUB-MACHINE GUN(RM1500) "<<endl;
	                    
	             
	            		cout<< "\nChoose What Gun Do You Want : "<<endl;
						cin>> c_gun;
						
						cout<< "How Many Do You Want It ? "<<endl<<endl;
					    cin>> q_gun;
						
						if (c_gun == 1)
					    {
					      c_gun = 400;
						  calculate(c_gun,q_gun);
						}
						
						else if (c_gun == 2)
						{
							c_gun = 500;
						  	calculate(c_gun,q_gun);
						}
						          
		   		   	    else if (c_gun == 3)
						{
							c_gun = 600;
						  	calculate(c_gun,q_gun);
						}
		   		   	    
				   	  	else if (c_gun == 4)
						{
							c_gun = 1400;
						  
						}
						
						else if (c_gun == 5)
						{
							c_gun = 1500;
						  	calculate(c_gun,q_gun);	
						}
						
						 }
				   	
			}
				   
			   	
			   }
			   
			   else if (TODO == 2)
			   
			   {
			   	cout<< "Defence Your Country That Good . Respect From Us "<<endl;
			   	cout<< "What Do You Want ? \n1.Weapon \n2.EQUIPMENT ";
			   	cin>> nyah;
			   	
			   	if (nyah == 1)
			   	{
			   	    system ("CLS");
			   		cout<< "Here The List Of Weapon That We recommend"<<endl<<endl;
			   	    
			   	    cout<<" PISTOL: \n1. DESERT EAGLE(RM650) \n2.40 DUAL ELITES(RM800) "<<endl<<endl;
			   	    cout<<" SHOTGUN : \n3.LEONE YG1263 AUTO SHOTGUN (RM3000) "<<endl<<endl;       
                    cout<<" RIFLES:  \n4.CLARION 5.56(RM2250) \n5.WDHMIDT SCOUT(RM2750)  \n6.M4A1(RM3100)  \n7.BULLPUP(RM3500)  \n8.KRIEG 550 COMMANDO(RM4200) \n9.MAGNUM SNIPER RIFLE(RM4750) "<<endl;
                    
                    cout<< "\nChoose What Gun Do You Want : "<<endl;
					cin>> c_gun;
						
					cout<< "How Many Do You Want It ? "<<endl<<endl;
				    cin>> q_gun;
						
					
					    if (c_gun == 1)
					    {
					    	c_gun = 650;
					      calculate(c_gun,q_gun);
						}
						
						else if (c_gun == 2)
						{
							c_gun = 800;
					      calculate(c_gun,q_gun);
						}
					    
						else if (c_gun == 3)
					    {
					      c_gun = 3000;
					      calculate(c_gun,q_gun);
						  
						}
						
						else if (c_gun == 4)
						{
							c_gun = 2250;
						    calculate(c_gun,q_gun);
						}
						          
		   		   	    else if (c_gun == 5)
						{
							c_gun = 2750;
						  	calculate(c_gun,q_gun);
						}
		   		   	    
				   	  	else if (c_gun == 6)
						{
							c_gun = 3100;
						  	calculate(c_gun,q_gun);
						}
						
						else if (c_gun == 7)
						{
							c_gun = 3500;
						  	calculate(c_gun,q_gun);	
						}
						
						else if (c_gun == 8)
						{
							c_gun = 4200;
						  	calculate(c_gun,q_gun);	
						}
						
						else if (c_gun == 9)
						{
							c_gun = 4750;
						  	calculate(c_gun,q_gun);
						}
				
			   	    
				}
				
				else if (nyah == 2)
				{
				    cout<< "Here The List Of EQUIPMENT  That We recommend"<<endl;
			   	    system ("pause");
			   	    system ("CLS");	
			   	    
			   	    cout<<"1.KEVLAR(RM650) \n\n2.KEVLAR + HELMET(RM1000) \n\n3.FLASHBANG(RM200) \n\n4.HE GRENADE(RM300) \n\n5.SMOKE GRENADE(RM300) \n\n6.DEFUSAL KIT(RM200) \n\n7.NIGHTVISION \n\n8.TACTICAL SHIELD(RM2200) "<<endl;
			   	    
			   	    cout<< "\nChoose What Gun Do You Want : "<<endl;
					cin>> c_gun;
						
					cout<< "How Many Do You Want It ? "<<endl<<endl;
				    cin>> q_gun;
						
					
					    if (c_gun == 1)
					    {
					    	c_gun = 650;
					      calculate(c_gun,q_gun);
						}
						
						else if (c_gun == 2)
						{
							c_gun = 1000;
					      calculate(c_gun,q_gun);
						}
					    
						else if (c_gun == 3)
					    {
					      c_gun = 200;
					      calculate(c_gun,q_gun);
						  
						}
						
						else if (c_gun == 4)
						{
							c_gun = 300;
						    calculate(c_gun,q_gun);
						}
						          
		   		   	    else if (c_gun == 5)
						{
							c_gun = 300;
						  	calculate(c_gun,q_gun);
						}
		   		   	    
				   	  	else if (c_gun == 6)
						{
							c_gun = 200;
						  	calculate(c_gun,q_gun);
						}
						
						else if (c_gun == 7)
						{
							c_gun = 1250;
						  	calculate(c_gun,q_gun);	
						}
						
						else if (c_gun == 8)
						{
							c_gun = 2200;
						  	calculate(c_gun,q_gun);	
						}
			   	    
				}   	
			   	
			   }
			   
			   else if (TODO == 3)
			   {
			   	cout<< "Feeling Heavy Eh"<<endl;
			   	
			   	system ("pause");                                     // Benda yg pause system
			
		        system ("CLS");
			   	
			   	cout<<" MACHINE GUN  \n1.M249(RM5750)"<<endl; 
			   	
			   	cout<< "\nChoose What Gun Do You Want : "<<endl;
					cin>> c_gun;
						
					cout<< "How Many Do You Want It ? "<<endl<<endl;
				    cin>> q_gun;
						
					
					    if (c_gun == 1)
					    {
					    	c_gun = 5750;
					      calculate(c_gun,q_gun);
						}
						
					
			   }
			   
			   else if (TODO == 4)
			   
			   {
			   	cout<< "Feeling Sneaky Like a Ghost eh i See"<<endl;
			   	
			   	system ("pause");                                     // Benda yg pause system
			
		        system ("CLS");
			
				   cout<< "1.WDHMIDT SCOUT(RM2750) \n2.KRIEG 550 COMMANDO(RM4200) \n3.MAGNUM SNIPER RIFLE(RM4750) \n4.D3/AU-1(RM5000)"<<endl;
				   
				   cout<< "\nChoose What Gun Do You Want : "<<endl;
					cin>> c_gun;
						
					cout<< "How Many Do You Want It ? "<<endl<<endl;
				    cin>> q_gun;
						
					
					    if (c_gun == 1)
					    {
					    	c_gun = 2750;
					      calculate(c_gun,q_gun);
						}
						
						else if (c_gun == 2)
					    {
					    	c_gun = 4200;
					      calculate(c_gun,q_gun);
						}
						
						else if (c_gun == 3)
						{
							c_gun = 4750;
					      calculate(c_gun,q_gun);
						}
						
						else if (c_gun == 4)
					    {
					    	c_gun = 5000;
					      calculate(c_gun,q_gun);
						}
			   	
			   }
  
				
			}

void buatapa_2 ()
{                       system("CLS");
                        int pilih,c_gun,q_gun;
                        char pick;
					while(true)
					{
						
						
						cout<<" What Do You Want? \n\n1.PISTOL \n2.SHOTGUNS \n3.SMG \n4.RIFLES \n5.SNIPER \n6.MACHINE GUN";
                        cin>> pilih;
                        
						if (pilih == 1)
						{system("CLS");
							cout<<"PISTOL : "<<endl<<endl;
	                        cout<< "1.9x19MM SIDEARM(RM400) \n2.KM .45 TACTICAL(RM500) \n3.228 COMPACT(RM600) \n4.DESERT EAGLE(RM650) \n5.40 DUAL ELITES(RM800) "<<endl<<endl;
	                        
	                        cout<<"Confirm? y/n"<<endl;
	                        cin>>pick;
	                        if(pick=='y')
	                        {
	                        cout<< "\nChoose What Gun Do You Want : "<<endl;
							cin>> c_gun;
						     
							cout<< "How Many Do You Want It ? "<<endl<<endl;
				    		cin>> q_gun;
						
					
					    if (c_gun == 1)
					    {
					    	c_gun = 400;
					      calculate(c_gun,q_gun);break;
						}
						
						else if (c_gun == 2)
						{
							c_gun = 500;
					      calculate(c_gun,q_gun);break;
						}
						
					    
						else if (c_gun == 3)
					    {
					      c_gun = 600;
					      calculate(c_gun,q_gun);break;
						  
						}
						
						else if (c_gun == 4)
						{
							c_gun = 650;
						    calculate(c_gun,q_gun);break;
						}
						          
		   		   	    else if (c_gun == 5)
						{
							c_gun = 800;
						  	calculate(c_gun,q_gun);break;
						}
						
							}
						else
						{continue;}
						
						}
						
						else if(pilih ==2)
						{system("CLS");
							 cout<<"SHOTGUNS : "<<endl<<endl;
	                         cout<< "1. LEONE 12 GAUGE SUPER(RM1700) \n2.LEONE YG1263 AUTO SHOTGUN (RM3000)"<<endl<<endl;
	                    	
							cout<<"Confirm? y/n"<<endl;
	                        cin>>pick;
	                        if(pick=='y')
	                        {
							cout<< "\nChoose What Gun Do You Want : "<<endl;
							cin>> c_gun;
						
							cout<< "How Many Do You Want It ? "<<endl<<endl;
				    		cin>> q_gun;
						
					
					    if (c_gun == 1)
					    {
					    	c_gun = 1700;
					      	calculate(c_gun,q_gun);break;
						}
						
						else if (c_gun == 2)
						{
							c_gun = 3000;
					      	calculate(c_gun,q_gun);break;
						}
					    
					        }
					        else
					        {continue;}
						}
						
						else if(pilih ==3)
						{system("CLS");
							 cout<<"SMG : "<<endl<<endl;
	                         cout<< "1.INGRAM MAC-10 (RM1400) \n2.KM SUB-MACHINE GUN(RM1500) \n3.KM UMP45(RM1700) \n4.ES C90(RM2350) "<<endl;
	                        
							cout<<"Confirm? y/n"<<endl;
	                        cin>>pick;
	                        if(pick=='y')
	                        {							
							 cout<< "\nChoose What Gun Do You Want : "<<endl;
					        cin>> c_gun;
						
				           	cout<< "How Many Do You Want It ? "<<endl<<endl;
				            cin>> q_gun;
						
					
					    if (c_gun == 1)
					    {
					    	c_gun = 1400;
					      	calculate(c_gun,q_gun);break;
						}
						
						else if (c_gun == 2)
						{
							c_gun = 1500;
					      	calculate(c_gun,q_gun);break;
						}
					    
						else if (c_gun == 3)
					    {
					      	c_gun = 1700;
					      	calculate(c_gun,q_gun);break;
						  
						}
						
						else if (c_gun == 4)
						{
							c_gun = 2350;
						    calculate(c_gun,q_gun);break;
						}
							}
							else
							{continue;}
						}
						
						else if(pilih ==4)
						{system("CLS");
							 cout<<"RIFLES : "<<endl<<endl;
                             cout<<"1.IDF DEFENDER(RM2000) \n2.CLARION 5.56(RM2250) \n3.CV-47(RM2500) \n4.M4A1(RM3100) \n4.BULLPUP(RM3500) \n5.KRIEG 552(RM3500)"<<endl<<endl;
                            cout<<"Confirm? y/n"<<endl;
	                        cin>>pick;
	                        if(pick=='y')
	                        {
							cout<< "\nChoose What Gun Do You Want : "<<endl;
				           	cin>> c_gun;
						
				         	cout<< "How Many Do You Want It ? "<<endl<<endl;
				            cin>> q_gun;
						
					
					    if (c_gun == 1)
					    {
					    	c_gun = 2000;
					      	calculate(c_gun,q_gun);break;
						}
						
						else if (c_gun == 2)
						{
							c_gun = 2250;
					      	calculate(c_gun,q_gun);break;
						}
					    
						else if (c_gun == 3)
					    {
					      	c_gun = 2500;
					      	calculate(c_gun,q_gun);break;
						  
						}
						
						else if (c_gun == 4)
						{
							c_gun = 3100;
						    calculate(c_gun,q_gun);break;
						}
						          
		   		   	    else if (c_gun == 5)
						{
							c_gun = 3500;
						  	calculate(c_gun,q_gun);break;
						}
							}
							else
							{continue;}
						}
						else if(pilih ==5)
						{system("CLS");
							cout<<"SNIPER : "<<endl<<endl;
	                        cout<< "1.WDHMIDT SCOUT(RM2750) \n2.KRIEG 550 COMMANDO(RM4200) \n3.MAGNUM SNIPER RIFLE(RM4750) \n4.D3/AU-1(RM5000)"<<endl;
	                        
							cout<<"Confirm? y/n"<<endl;
	                        cin>>pick;
	                        if(pick=='y')
	                        {
							cout<< "\nChoose What Gun Do You Want : "<<endl;
					        cin>> c_gun;
						
					        cout<< "How Many Do You Want It ? "<<endl<<endl;
				            cin>> q_gun;
						
					
					    if (c_gun == 1)
					    {
					    	c_gun = 2750;
					      	calculate(c_gun,q_gun);break;
						}
						
						else if (c_gun == 2)
						{
							c_gun = 4200;
					      	calculate(c_gun,q_gun);break;
						}
					    
						else if (c_gun == 3)
					    {
					      	c_gun = 4750;
					      	calculate(c_gun,q_gun);break;
						  
						}
						
						else if (c_gun == 4)
						{
							c_gun = 5000;
						    calculate(c_gun,q_gun);break;
						}
						          
		   		   	    
							}
							else
							{continue;}
						}
						else if(pilih ==6)
						{system("CLS");
							cout<<"MACHINE GUN : "<<endl<<endl;
	                        cout<<"1.MACHINE GUN - M249(RM5750)"<<endl;
	                        cout<<"Confirm? y/n"<<endl;
	                        cin>>pick;
	                        if(pick=='y')
	                        {
	                        cout<< "\nChoose What Gun Do You Want : "<<endl;
					        cin>> c_gun;
						
				        	cout<< "How Many Do You Want It ? "<<endl<<endl;
				            cin>> q_gun;
						
					    if (c_gun == 1)
					    {
					    	c_gun = 5750;
					      	calculate(c_gun,q_gun);break;
						}
						
							}
							else
							{continue;}
						}
					}
}

void buatapa_3 ()
{
	int c_gun,q_gun;
				   
				    cout<< "Here The List Of EQUIPMENT  That We recommend"<<endl;
			   	    system ("pause");
			   	    system ("CLS");	
			   	    
			   	    cout<<"1.KEVLAR(RM650) \n\n2.KEVLAR + HELMET(RM1000) \n\n3.FLASHBANG(RM200) \n\n4.HE GRENADE(RM300) \n\n5.SMOKE GRENADE(RM300) \n\n6.DEFUSAL KIT(RM200) \n\n7.NIGHTVISION \n\n8.TACTICAL SHIELD(RM2200) "<<endl;
			   	    
			   	    cout<< "\nChoose What Gun Do You Want : "<<endl;
					cin>> c_gun;
						
					cout<< "How Many Do You Want It ? "<<endl<<endl;
				    cin>> q_gun;
						
					
					    if (c_gun == 1)
					    {
					    	c_gun = 650;
					      calculate(c_gun,q_gun);
						}
						
						else if (c_gun == 2)
						{
							c_gun = 1000;
					      calculate(c_gun,q_gun);
						}
					    
						else if (c_gun == 3)
					    {
					      c_gun = 200;
					      calculate(c_gun,q_gun);
						  
						}
						
						else if (c_gun == 4)
						{
							c_gun = 300;
						    calculate(c_gun,q_gun);
						}
						          
		   		   	    else if (c_gun == 5)
						{
							c_gun = 300;
						  	calculate(c_gun,q_gun);
						}
		   		   	    
				   	  	else if (c_gun == 6)
						{
							c_gun = 200;
						  	calculate(c_gun,q_gun);
						}
						
						else if (c_gun == 7)
						{
							c_gun = 1250;
						  	calculate(c_gun,q_gun);	
						}
						
						else if (c_gun == 8)
						{
							c_gun = 2200;
						  	calculate(c_gun,q_gun);	
	                   
                    	}
                        
}

void buatapa_4 ()
{
                  
	buatapa_1();					
	
}

};	
int main ()
{
	wtpe a1,a2,a3,a4,a5,a6;
	int bahasa,lesen,option,helping,TODO,gunweight,pricetag,q_gun,c_gun,price,money_in,balance;
	string name;
	Beep(2020,1100);                                                             // causes the computer to beep
    char l=219; 
	
	cout<<"Enter your name: ";
	getline(cin,name);    
	
	cout<<"Please wait while system is analyzing the data\n";
    for ( int i=0; i<10 ; i++)
    {
        Beep(2000,500);
        cout<<l; 
    } 
	
	system("pause");
	system("cls");
	cout<< "\t\t\tWelcome "<<name<< " To Our Gun Shop."<<endl<<endl;
	cout<<"\t\t\t\tby BeeFiz"<<endl;
	cout<< "\t\t======================================================"<<endl<<endl<<endl;	

		cout<<name<<", Do You Have Gun License ? "<<endl;
		
		cout<< "\t 1. Yes "<<endl ;                               // Tanya Pasai Lesen Ada ke x?
	    cout<< "\t 2. No "<<endl<<endl;
		cin>> lesen;
		
		if (lesen == 1)
		{
			cout<<"Good ! Welcome Once again !"<<endl ;
			
			system ("pause");                                     // Benda yg pause system
			
			system ("CLS");                                      //Benda yg clear screen 
			
			cout<< "\t 1. First Time ? Need Help ? \t\t 2. Buy Guns \t\t 3. EQUIPMENT "<<endl<<endl;                    // Kat perlu Ada while Loop kalau user letak error
			cout<< "\t\t\t\t 4.Need Support ?  \t\t  "<<endl;
			cin>> option;
			
			if (option == 1)
			
			{
				a1.buatapa_1();   
			   
			}
		
			else if (option == 2)
			
	//		{
				a2.buatapa_2();
			}
			
			else if (option == 3)
			
			{
				a3.buatapa_3();
			}
			
			else if (option == 4)
			{
				a4.buatapa_4();
			}
			
		else
		{
			cout<< "Get Lost We Are NOT Selling You to Guys!";
		}
		
    }
}
// Hi Sir...
