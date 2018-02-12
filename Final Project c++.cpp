//Name Aidil Suffian Bin Abu Bakar
//Name Muhammad Hafiz Afiq Bin Khalid
// FINAL PROJECT C++ (SOALAN 1 )
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

void help();
void buatapa();
void calculate(int& x,int& y);

void help ()
{
	cout<<"WELCOME TO OUR CUSTOMER SERVICE"<<endl;
	cout<<"";	
	
	
	
}
void buatapa_1 ()
{
	int bahasa,lesen,option,helping,TODO,gunweight,pricetag,q_gun,c_gun,price,money_in,balance,nyah;
	
	cout<< "Owh This Is Your First Time... What Do You Want to Do?"<<endl<<endl;
			   cout<< "1. Start a war ?" <<endl<<endl;
			   cout<< "2. Defence Your Country?"<<endl<<endl;
			   cout<< "3. Feeling Like Heavy ?"<<endl<<endl;
			   cout<< "4. Feeling like Sneaky ?"<<endl<<endl;
			   
			   cin>> TODO;
			   
			   cout<<"nk bantuan \n 1.yes \n 2. no"<<endl;
			   cin>>helping;
			   if(helping>=2)
			   {
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
                        cout<<" SHOTGUN - 1. LEONE YG1263 AUTO SHOTGUN (RM10) "<<endl;       
                        cout<<" RIFLES  - 2.  CLARION 5.56(RM10) \n -3. WDHMIDT SCOUT(RM12)  \n - 4. M4A1(RM15)  \n - 5. BULLPUP(RM16)  \n - 6. KRIEG 550 COMMANDO(RM20) \n - 7. MAGNUM SNIPER RIFLE(RM25) "<<endl;
                        cout<<" 8. MACHINE GUN - M249(RM30)"<<endl; 
						
						cout<< "Choose What Gun Do You Want : "<<endl;
						cin>> c_gun;
						
						cout<< "How Many Do You Want It ? "<<endl<<endl;
					    cin>> q_gun;
						
						if (c_gun == 1)
					    {
					      c_gun = 10;
					      calculate(c_gun,q_gun);
						  
						}
						
						else if (c_gun == 2)
						{
							c_gun = 10;
						    calculate(c_gun,q_gun);
						}
						          
		   		   	    else if (c_gun == 3)
						{
							c_gun = 12;
						  	calculate(c_gun,q_gun);
						}
		   		   	    
				   	  	else if (c_gun == 4)
						{
							c_gun = 15;
						  	calculate(c_gun,q_gun);
						}
						
						else if (c_gun == 5)
						{
							c_gun = 16;
						  	calculate(c_gun,q_gun);	
						}
						
						else if (c_gun == 6)
						{
							c_gun = 20;
						  	calculate(c_gun,q_gun);	
						}
						
						else if (c_gun == 7)
						{
							c_gun = 25;
						  	calculate(c_gun,q_gun);
						}
						
						else if (c_gun == 8)
						{
							c_gun = 30;
						  	calculate(c_gun,q_gun);
						}
				      
					  }
				      
				   	  else if (pricetag == 2 )
				   	  
				   	  { // UNTUK GUN BERAT & MURAH
				   	  	
				   	  	cout<<"Cheep Also Good maaa aiya don't worry"<<endl;
				   	  	
				   	  	system ("pause");
				   	  	
				   	  	system ("CLS");
				   	  	
				   	  	cout<<" Here For Heavy & Cheep : "<<endl<<endl;
				   	  	cout<< "Shotguns: 1. LEONE 12 GAUGE SUPER"<<endl<<endl;
	                    cout<< "RIFLES   2. IDF DEFENDER \n 3. CV-47 \n 4. KRIEG 552 \n 5. MAGNUM SNIPER RIFLE \n 6.D3/AU-1"<<endl;
                 
				   	  	cout<< "Choose What Gun Do You Want : "<<endl;
						cin>> c_gun;
						
						cout<< "How Many Do You Want It ? "<<endl<<endl;
					    cin>> q_gun;
						
						if (c_gun == 1)
					    {
					      c_gun = 10;
						  calculate(c_gun,q_gun);
						}
						
						else if (c_gun == 2)
						
						{
							c_gun = 10;
						  	calculate(c_gun,q_gun);
						}
						          
		   		   	    else if (c_gun == 3)
						{
							c_gun = 12;
						  	calculate(c_gun,q_gun);
						}
		   		   	    
				   	  	else if (c_gun == 4)
						{
							c_gun = 15;
						  	calculate(c_gun,q_gun);
						}
						
						else if (c_gun == 5)
						{
							c_gun = 16;
						  	calculate(c_gun,q_gun);
						}
						
						else if (c_gun == 6)
						{
							c_gun = 20;
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
                        cout<<" PISTOL: 1. DESERT EAGLE \n 2. 40 DUAL ELITES "<<endl;       
                        cout<<" SMG : 3.KM UMP45 \n 4. ES C90 "<<endl;
                                   
		   		   	    
				   	  	cout<< "Choose What Gun Do You Want : "<<endl;
						cin>> c_gun;
						
						cout<< "How Many Do You Want It ? "<<endl<<endl;
					    cin>> q_gun;
						
						if (c_gun == 1)
					    
					    {
					      	c_gun = 10;
						 	calculate(c_gun,q_gun);
						}
						
						else if (c_gun == 2)
						
						{
							c_gun = 10;
						  	calculate(c_gun,q_gun);
						}
						          
		   		   	    else if (c_gun == 3)
						
						{
							c_gun = 12;
						  	calculate(c_gun,q_gun);
						}
		   		   	    
				   	  	else if (c_gun == 4)
						
						{
							c_gun = 15;
						  	calculate(c_gun,q_gun);
						}
						
				      }
				   	  
				   	  
				   	  else if (pricetag == 2 )
				   	  
				   	  { // UNTUK GUN RINGAN & MURAH
				   	  	
				   	  	cout<<"Cheep Also Good maaa aiya don't worry"<<endl;
				   	  	
				   	  	system ("pause");
				   	  	
				   	  	system ("CLS");
				   	  	
				   	  	cout<<" Here For LightWeight & cheep : "<<endl<<endl;
				   	  	cout<< "Pistol: 1. 9x19MM SIDEARM \n 2. KM .45 TACTICAL \n 3. 228 COMPACT "<<endl<<endl;
	                    cout<< "SMG :  4. INGRAM MAC-10 \n 5.KM SUB-MACHINE GUN "<<endl;
	                    
	             
	            		cout<< "Choose What Gun Do You Want : "<<endl;
						cin>> c_gun;
						
						cout<< "How Many Do You Want It ? "<<endl<<endl;
					    cin>> q_gun;
						
						if (c_gun == 1)
					    {
					      c_gun = 10;
						  calculate(c_gun,q_gun);
						}
						
						else if (c_gun == 2)
						{
							c_gun = 10;
						  	calculate(c_gun,q_gun);
						}
						          
		   		   	    else if (c_gun == 3)
						{
							c_gun = 12;
						  	calculate(c_gun,q_gun);
						}
		   		   	    
				   	  	else if (c_gun == 4)
						{
							c_gun = 15;
						  
						}
						
						else if (c_gun == 5)
						{
							c_gun = 16;
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
			   		cout<< "Here The List Of Weapon That We recommend"<<endl;
			   	    system ("pause");
			   	    system ("CLS");
			   	    cout<<" PISTOL: 1. DESERT EAGLE \n 2. 40 DUAL ELITES "<<endl;
			   	    cout<<" SHOTGUN - 3. LEONE YG1263 AUTO SHOTGUN (RM10) "<<endl;       
                    cout<<" RIFLES  - 4.  CLARION 5.56(RM10) \n -5. WDHMIDT SCOUT(RM12)  \n - 6. M4A1(RM15)  \n - 7. BULLPUP(RM16)  \n - 8. KRIEG 550 COMMANDO(RM20) \n - 9. MAGNUM SNIPER RIFLE(RM25) "<<endl;
                    
                    cout<< "Choose What Gun Do You Want : "<<endl;
					cin>> c_gun;
						
					cout<< "How Many Do You Want It ? "<<endl<<endl;
				    cin>> q_gun;
						
					
					    if (c_gun == 1)
					    {
					    	c_gun = 10;
					      calculate(c_gun,q_gun);
						}
						
						else if (c_gun == 2)
						{
							c_gun = 10;
					      calculate(c_gun,q_gun);
						}
					    
						else if (c_gun == 3)
					    {
					      c_gun = 10;
					      calculate(c_gun,q_gun);
						  
						}
						
						else if (c_gun == 4)
						{
							c_gun = 10;
						    calculate(c_gun,q_gun);
						}
						          
		   		   	    else if (c_gun == 5)
						{
							c_gun = 12;
						  	calculate(c_gun,q_gun);
						}
		   		   	    
				   	  	else if (c_gun == 6)
						{
							c_gun = 15;
						  	calculate(c_gun,q_gun);
						}
						
						else if (c_gun == 7)
						{
							c_gun = 16;
						  	calculate(c_gun,q_gun);	
						}
						
						else if (c_gun == 8)
						{
							c_gun = 20;
						  	calculate(c_gun,q_gun);	
						}
						
						else if (c_gun == 9)
						{
							c_gun = 25;
						  	calculate(c_gun,q_gun);
						}
						
						else if (c_gun == 10)
						{
							c_gun = 30;
						  	calculate(c_gun,q_gun);
						}
			   	    
				}
				
				else if (nyah == 2)
				{
				    cout<< "Here The List Of EQUIPMENT  That We recommend"<<endl;
			   	    system ("pause");
			   	    system ("CLS");	
			   	    
			   	    cout<<" 1. KEVLAR \n2.KEVLAR + HELMET \n3.FLASHBANG \n4.HE GRENADE \n5.SMOKE GRENADE \n6.DEFUSAL KIT \n7.NIGHTVISION \n8.TACTICAL SHIELD "<<endl;
			   	    
			   	    cout<< "Choose What Gun Do You Want : "<<endl;
					cin>> c_gun;
						
					cout<< "How Many Do You Want It ? "<<endl<<endl;
				    cin>> q_gun;
						
					
					    if (c_gun == 1)
					    {
					    	c_gun = 10;
					      calculate(c_gun,q_gun);
						}
						
						else if (c_gun == 2)
						{
							c_gun = 10;
					      calculate(c_gun,q_gun);
						}
					    
						else if (c_gun == 3)
					    {
					      c_gun = 10;
					      calculate(c_gun,q_gun);
						  
						}
						
						else if (c_gun == 4)
						{
							c_gun = 10;
						    calculate(c_gun,q_gun);
						}
						          
		   		   	    else if (c_gun == 5)
						{
							c_gun = 12;
						  	calculate(c_gun,q_gun);
						}
		   		   	    
				   	  	else if (c_gun == 6)
						{
							c_gun = 15;
						  	calculate(c_gun,q_gun);
						}
						
						else if (c_gun == 7)
						{
							c_gun = 16;
						  	calculate(c_gun,q_gun);	
						}
						
						else if (c_gun == 8)
						{
							c_gun = 20;
						  	calculate(c_gun,q_gun);	
						}
			   	    
				}   	
			   	
			   }
			   
			   else if (TODO == 3)
			   {
			   	cout<< "Feeling Heavy Eh"<<endl;
			   	
			   	system ("pause");                                     // Benda yg pause system
			
		        system ("CLS");
			   	
			   	cout<<" 1. MACHINE GUN - M249(RM30)"<<endl; 
			   	
			   	cout<< "Choose What Gun Do You Want : "<<endl;
					cin>> c_gun;
						
					cout<< "How Many Do You Want It ? "<<endl<<endl;
				    cin>> q_gun;
						
					
					    if (c_gun == 1)
					    {
					    	c_gun = 10;
					      calculate(c_gun,q_gun);
						}
						
					
			   }
			   
			   else if (TODO == 4)
			   
			   {
			   	cout<< "Feeling Sneaky Like a Ghost eh i See"<<endl;
			   	
			   	system ("pause");                                     // Benda yg pause system
			
		        system ("CLS");
			
				   cout<< "1. KRIEG 550 COMMANDO(RM20) \n - 2. MAGNUM SNIPER RIFLE(RM25)"<<endl;
				   
				   cout<< "Choose What Gun Do You Want : "<<endl;
					cin>> c_gun;
						
					cout<< "How Many Do You Want It ? "<<endl<<endl;
				    cin>> q_gun;
						
					
					    if (c_gun == 1)
					    {
					    	c_gun = 10;
					      calculate(c_gun,q_gun);
						}
						
						else if (c_gun == 2)
						{
							c_gun = 10;
					      calculate(c_gun,q_gun);
						}
			   	
			   }
  
				}
				else if(helping==1)
				{
					help();
				}
			}

void buatapa_2 ()
{
	
}

void buatapa_3 ()
{
	
	                    cout<<" Here For Heavy & Expansive : "<<endl<<endl;
                        cout<<" SHOTGUN - 1. LEONE YG1263 AUTO SHOTGUN (RM10) "<<endl;       
                        cout<<" RIFLES  - 2.  CLARION 5.56(RM10) \n -3. WDHMIDT SCOUT(RM12)  \n - 4. M4A1(RM15)  \n - 5. BULLPUP(RM16)  \n - 6. KRIEG 550 COMMANDO(RM20) \n - 7. MAGNUM SNIPER RIFLE(RM25) "<<endl;
                        cout<<" 8. MACHINE GUN - M249(RM30)"<<endl; 
                        
                        cout<<" Here For Heavy & Cheep : "<<endl<<endl;
				   	  	cout<< "Shotguns: 1. LEONE 12 GAUGE SUPER"<<endl<<endl;
	                    cout<< "RIFLES   2. IDF DEFENDER \n 3. CV-47 \n 4. KRIEG 552 \n 5. MAGNUM SNIPER RIFLE \n 6.D3/AU-1"<<endl;
                        
                       
				   	    cout<<" Here For Lightweight & Expansive : "<<endl<<endl;
                        cout<<" PISTOL: 1. DESERT EAGLE \n 2. 40 DUAL ELITES "<<endl;       
                        cout<<" SMG : 3.KM UMP45 \n 4. ES C90 "<<endl;
                        
                       	
						cout<<" Here For LightWeight & cheep : "<<endl<<endl;
				   	  	cout<< "Pistol: 1. 9x19MM SIDEARM \n 2. KM .45 TACTICAL \n 3. 228 COMPACT "<<endl<<endl;
	                    cout<< "SMG :  4. INGRAM MAC-10 \n 5.KM SUB-MACHINE GUN "<<endl;
                        
                        
	
	
	
	
	
	
	
	
	
}

void buatapa_4 ()
{
                   int c_gun,q_gun;
				   
				    cout<< "Here The List Of EQUIPMENT  That We recommend"<<endl;
			   	    system ("pause");
			   	    system ("CLS");	
			   	    
			   	    cout<<" 1. KEVLAR \n2.KEVLAR + HELMET \n3.FLASHBANG \n4.HE GRENADE \n5.SMOKE GRENADE \n6.DEFUSAL KIT \n7.NIGHTVISION \n8.TACTICAL SHIELD "<<endl;
			   	    
			   	    cout<< "Choose What Gun Do You Want : "<<endl;
					cin>> c_gun;
						
					cout<< "How Many Do You Want It ? "<<endl<<endl;
				    cin>> q_gun;
						
					
					    if (c_gun == 1)
					    {
					    	c_gun = 10;
					      calculate(c_gun,q_gun);
						}
						
						else if (c_gun == 2)
						{
							c_gun = 10;
					      calculate(c_gun,q_gun);
						}
					    
						else if (c_gun == 3)
					    {
					      c_gun = 10;
					      calculate(c_gun,q_gun);
						  
						}
						
						else if (c_gun == 4)
						{
							c_gun = 10;
						    calculate(c_gun,q_gun);
						}
						          
		   		   	    else if (c_gun == 5)
						{
							c_gun = 12;
						  	calculate(c_gun,q_gun);
						}
		   		   	    
				   	  	else if (c_gun == 6)
						{
							c_gun = 15;
						  	calculate(c_gun,q_gun);
						}
						
						else if (c_gun == 7)
						{
							c_gun = 16;
						  	calculate(c_gun,q_gun);	
						}
						
						else if (c_gun == 8)
						{
							c_gun = 20;
						  	calculate(c_gun,q_gun);	
						}
	
}

void buatapa_5 ()
{
	
}

void buatapa_6 ()
{
	
}

void calculate(int& x,int& y)
{
	int price,money_in,balance;
						price =x*y;	
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
			


	
int main ()
{
	int bahasa,lesen,option,helping,TODO,gunweight,pricetag,q_gun,c_gun,price,money_in,balance;

	string name;
	cout<<"Enter your name: ";
	getline(cin,name);    
	
	system("pause");
	system("cls");
	cout<< "Welcome "<<name<< " To Our Gun Shop. Please Select Your Langauge / Selamat Datang " <<name<< " Ke kedai Senjata Kami.\nSila Pilih bahasa Anda"<<endl<<endl;
			
	cout<< "\t 1. English "<<endl ;                               // Pilih Bahasa first step
	cout<< "\t 2. Bahasa Melayu "<<endl<<endl;
	cin >> bahasa;
	
		
	if (bahasa == 1)
	{

		cout<<" "<<name<<", Do You Have Gun License ? "<<endl;
		
		cout<< "\t 1. Yes "<<endl ;                               // Tanya Pasai Lesen Ada ke x?
	    cout<< "\t 2. No "<<endl<<endl;
		cin>> lesen;
		
		if (lesen == 1)
		
		{
			cout<<"Good ! Welcome Once again !"<<endl ;
			
			system ("pause");                                     // Benda yg pause system
			
			system ("CLS");                                      //Benda yg clear screen 
			
			cout<< "\t 1. First Time ? Need Help ? \t\t 2. Buy Guns \t\t 3. Price List Of Guns "<<endl<<endl;                    // Kat perlu Ada while Loop kalau user letak error
			cout<< "\t\t\t\t 4.EQUIPMENT  \t\t 5.Need Support ? "<<endl;
			cin>> option;
			
			if (option == 1)
			
			{
				buatapa_1();   
			   
			}
		
			else if (option == 2)
			
			{
				buatapa_2();
			}
			
			else if (option == 3)
			
			{
				buatapa_3();
			}
			
			else if (option == 4)
			
			{
				buatapa_4();
			}
			
			else if (option == 5)
			
			{
				cout<< "5"	;
			}
						
		}
		
		else
		{
			cout<< "Get Lost We Are NOT Selling You to Guys!";
		}
		
    }
			
	else if (bahasa == 2)
	
	{
		cout<<" "<<name<<", Do You Have Gun License ? "<<endl;
		
		cout<< "saya melayu";
	}
	
   
}
