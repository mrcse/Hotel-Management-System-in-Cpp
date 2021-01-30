//id=lacuisine password 83600


#include <iostream>					//   Input Output Stream
#include <time.h>					//   generate time in output with hours date second and hour and year using pointers
#include <conio.h>					//   This library is used for to clear the system screen for all the functions and to get character through built in function.
#include <stdlib.h>					//   This library is used for exit statement compare or assign values of char type or array to float or integer
#include <string.h>					// 	 This library is used for writting of string and string builtin function like string compare.


using namespace std;

//   GLOBAL VARIABLE

	char c,m;
	int i=0,tot=0,y=0;
	int a1=0,a2=0,a3=0,a4=0,a5=0;
	int b1=0,b2=0,b3=0,b4=0,b5=0,b6=0,b7=0,b8=0,b9=0,b10=0,b11=0;
	int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,c10=0,c11=0;
	int d1=0,d2=0,d3=0,d4=0,d5=0,d6=0,d7=0,d8=0,d9=0,d10=0,d11=0;
	int e1=0,e2=0,e3=0;
	int f1=0,f2=0,f3=0,f4=0,f5=0;
	int g1=0,g2=0,g3=0,g4=0,g5=0,g6=0,g7=0,g8=0,g9=0,g10=0,g11=0,g12=0;
	int h1=0,h2=0,h3=0,h4=0,h5=0,h6=0;
	int i1=0,i2=0,i3=0,i4=0,i5=0,i6=0,i7=0,i8=0,i9=0;
	int j1=0,j2=0,j3=0,j4=0,j5=0,j6=0,j7=0,j8=0;
	int k1=0,k2=0,k3=0,k4=0,k5=0,k6=0,k7=0,k8=0;
	int l1=0,l2=0,l3=0;
	int m1=0,m2=0,m3=0,m4=0;
	int n1=0,n2=0,n3=0;
	int o1=0,o2=0,o3=0,o4=0;
	int p1=0,p2=0,p3=0,p4=0,p5=0,p6=0,p7=0,p8=0,p9=0,p10=0,p11=0;
	char t;



//    Functions



void log();
void menu();
void rice();
void chicken();
void chinesespeciality();
void pakistanispeciality();
void beef();
void desserts();
void hotcoldbvg();
void icecream();
void pizza();
void coldrink();
void soup();
void fish();
void chowmien();
void starters();
void chinesedryfood();
void bbq();
void placeorder();
void totalcustomer();





//     Main Function





int main()
{
	log();

	return 0;
}





//calls this function if the login id and password is correct


//       Main Page







void func()

{
	cout<<"                    **^^**^^**^^**^^**^^**\n";
	cout<<"             **^^**^^**^^**^^**^^**^^**^^**^^**^^\n\n";
	cout<<"************** WELCOME TO LA CUISINE RESTAURENT ****************\n\n";
	cout<<"             **^^**^^**^^**^^**^^**^^**^^**^^**^^\n";
	cout<<"                    **^^**^^**^^**^^**^^**\n\n";


	cout<<"\t\t\t1. MENU  \n\t\t\t2. PLACE ORDER\n\t\t\t3. TOTAL CUSTOMER\n\t\t\t4. LOGOUT\n\t\t\t5. EXIT\n";
	cout<<"\n\t\t\tPLEASE SELECT ONE OF THE OPTION FROM ABOVE\n\n\t\t\tPRESS 4 TO LOGOUT OR PRESS 5 TO EXIT THE PROGRAM\n";


	t=getche();			//	It reads a single character from the keyboard and displays immediately on output screen without waiting for enter key.

		if(t=='1')
		{
			system("cls");					// clear the screen after that
			menu();
		}
		if(t=='2')
		{
			system("cls");
			placeorder();
		}
		if(t=='3')
		{
			system("cls");
			totalcustomer();
		}
		if(t=='4')
		{
			system("cls");
			log();
		}
		if(t=='5')
		{
			system("cls");
			exit(0);
		}
		if(t=='b')
		{
			system ("cls");
			func();
		}


}







//    Login & password Funcition







void log()
{
	cout<<"PLEASE ENTER YOUR ID :: ";


	char ch[9],arr2[5];

	int f,z,v;


		for(int i=0;i<9;i++)
		{
			ch[i]=getche();
			z=ch[i];					// Assign charater array to integer funtion of stdlib.h
			system("cls");
			cout<<" ID :: ";

				for(int j=0;j<=i;j++)
				{
					cout<<"*";
				}


		}

	v=strcmp(ch,"lacuisine");		//    compare the login id to the original login id

		if(v!=0)
		{
			exit(0);
		}
			if(v==0)
			{
				for(int g=0;g<5;g++)
				{
					arr2[g]=getche();
					z=arr2[g];
					system("cls");
					cout<<"PLEASE ENTER YOUR PASSWORD ::";

					for(int h=0;h<=g;h++)
					{
						cout<<"*";
					}
				}

	f=strcmp(arr2,"83600");


		if(f!=0)
		{
			exit(0);
		}
			if(f==0);
			{
				system("cls");
				func();
			}
			}
}






//      Menu Function






void menu()
{
	cout<<"        \n\t\t~!~!~!~!~!~!~!~!~! MAIN MENUE ~!~!~!~!~!~!~!~!~!\n\n";
	cout<<"\t\t\t1. RICE\n\t\t\t2. CHICKEN\n\t\t\t3. CHINESE SPECIALITY\n";
	cout<<"\t\t\t4. PAKISTANI SPECIALITY\n\t\t\t5. BEEF\n\t\t\t6. DESSERTS\n";
	cout<<"\t\t\t7. HOT & COLD BEVERAGES\n\t\t\t8. ICE CREAM\n\t\t\t9. PIZZA\n";
	cout<<"\t\t\tA. COLD DRINKS\n\t\t\tS. SOUP\n\t\t\tD. FISH\n";
	cout<<"\t\t\tF. CHOWMIEN\n\t\t\tG. STARTERS\n\t\t\tH. CHINESE DRY FOOD\n\t\t\tJ. BAR B.Q";
	cout<<"\n\n\t\t\t SELECT OPTION FROM ABOVE\n\n\t\t\t PRESS B TO GO BACK";



	do
	{
		c=getche();

			if(c=='1')
			{
				system("cls");
				rice();
			}
			if(c=='2')
			{
				system("cls");
				chicken();
			}
			if(c=='3')
			{
				system("cls");
				chinesespeciality();
			}
			if(c=='4')
			{
				system("cls");
				pakistanispeciality();
			}
			if(c=='5')
			{
				system("cls");
				beef();
			}
			if(c=='6')
			{
				system("cls");
  				desserts();
  		    }
			if(c=='7')
			{
				system("cls");
  				hotcoldbvg();
  		    }
			if(c=='8')
			{
				system("cls");
  				icecream();
  		    }
			if(c=='9')
			{
				system("cls");
  				pizza();
  		    }
			if(c=='A' || c=='a')
			{
				system("cls");
  				coldrink();
  		    }
			if(c=='S' || c=='s')
			{
				system("cls");
  				soup();
  		    }
			if(c=='D' || c=='d')
			{
				system("cls");
  				fish();
  		    }
			if(c=='F'  || c=='f')
			{
				system("cls");
  				chowmien();
  		    }
			if(c=='G'  || c=='g')
			{
				system("cls");
  				starters();
  		    }
			if(c=='H'  ||c=='h')
			{
				system("cls");
  				chinesedryfood();
  		    }
			if(c=='J'  || c=='j')
			{
				system("cls");
  				bbq();
  		    }
			if(c>='10')
			{
				cout<<"\n invalid input \n";
			}
	}

	while(c!='b');
		if(c=='b')
		{
			system("cls");
			func();
		}
}










//     Rice Function






void rice()
{
	char b;

	cout<<"1. SPECIAL LA CUISINE RICE		\t\t\t=400\n";
	cout<<"2. SPECIAL LA CUISINE RICE (HALF)	\t\t\t=220\n";
	cout<<"3. CHICKEN FRIED RICE			\t\t\t=400\n";
	cout<<"4. CHICKEN FRIED RICE (HALF)		\t\t\t=200\n";
	cout<<"5. CHICKEN MASALA RICE			\t\t\t=400\n";
	cout<<"\n PRESS B TO GO BACK TO MAIN MENU\n";

	do
	{
		b=getche();

		switch (b)
		{
			case '1':
				cout<<"\nselected\n"	;
				a1++;
				break;
			case '2':
				cout<<"selected\n";
				a2++;
				break;
			case '3':
				cout<<"selected\n"	;
				a3++;
				break;
			case '4':
				cout<<"selected\n";
				a4++;
				break;
			case'5':
				cout<<"selected\n";
				a5++;
				break;
			default:
				cout<<"\n invalid input\n";
				break;
		}
	}
	while(b!='b');
		if(b=='b')
		{
			system("cls"),
			menu();
		}
}




//       Chicken Function





void chicken()
	{
		cout<<"1. CHICKEN WHITE FINGER      \t\t\t= 440\n";
		cout<<"2. CHICKEN QORMA             \t\t\t= 260\n";
		cout<<"3. CHICKEN JALFRAIZI     	\t\t\t= 440\n";
		cout<<"4. CHIKEN KARHAI    			\t\t\t= 780\n";
		cout<<"5. CHICKEN STEAM ROAST       \t\t\t= 560\n";
		cout<<"6. CHICKEN BONELESS HANDI    \t\t\t= 900\n";
		cout<<"7. CHICKEN ACHAR KARHAI      \t\t\t= 850\n";
		cout<<"8. ARABIAN CHICKEN     	    \t\t\t= 440\n";
		cout<<"9. CHICKEN VEGETABLE    		\t\t\t= 400\n";
		cout<<"A. MADRASI CHICKEN    		\t\t\t= 850\n";
		cout<<"S. CHICKEN BROAST    		\t\t\t= 160\n\n";
		cout<<"PRESS B TO RETURN ";


	char a;


	do
	{
		a=getche();

		switch (a)
		{
			case  '1':
				cout<<"\nselected\n";
				b1++;
				break;
			case '2':
				cout<<"\nselected\n";
				b2++;
				break;
			case  '3':
				cout<<"\nselected\n";
				b3++;
				break;
			case '4':
				cout<<"\nselected\n";
				b4++;
				break;
			case  '5':
				cout<<"\nselected\n";
				b5++;
				break;
			case '6':
				cout<<"\nselected\n";
				b6++;
				break;
			case  '7':
				cout<<"\nselected\n";
				b7++;
				break;
			case '8':
				cout<<"\nselected\n";
				b8++;
				break;
			case  '9':
				cout<<"\nselected\n";
				b9++;
				break;
			case 'a':
				cout<<"\nselected\n";
				b10++;
				break;
			case 's':
				cout<<"\nselected\n";
				b11++;
				break;
			default:
				cout<<"\n invalid input\n";}
	}
		while(a!='b');
			if(a=='b')
			{
				system ("cls");
				menu();
			}
}





//       CHINESE SPECIALITY





void chinesespeciality()
	{
		cout<<"1. SP. CHICKEN CHERRY WITH PINEAPPLE     = 500\n";
		cout<<"2. CHICKEN MANCHURRIAN (SIZZLING)        = 440\n";
		cout<<"3. CHICKEN SWEET & SOUR     				= 550\n";
		cout<<"4. CHICKEN WITH ROAST ALMONDS    		= 550\n";
		cout<<"5. CHICKEN GARLIC    	  			    = 520\n";
		cout<<"6. CHICKEN BLACK PEPPER  			    = 520\n";
		cout<<"7. CHICKEN CHILLIES   				    = 550\n";
		cout<<"8. CHICKEN BONELESS       		  	    = 520\n";
		cout<<"9. CHICKEN BALL    						= 475\n";
		cout<<"A. CHICKEN CUTLET   					= 475\n";
		cout<<"S. BEEF CHILLIES DRY    				= 440\n\n";
		cout<<"PRESS B TO RETURN ";


	char a;


	do
	{
		a=getche();

		switch (a)
		{
			case  '1':
				cout<<"\nselected\n";
				c1++;
				break;
			case '2':
				cout<<"\nselected\n";
				c2++;
				break;
			case  '3':
				cout<<"\nselected\n";
				c3++;
				break;
			case '4':
				cout<<"\nselected\n";
				c4++;
				break;
			case  '5':
				cout<<"\nselected\n";
				c5++;
				break;
			case '6':
				cout<<"\nselected\n";
				c6++;
				break;
			case  '7':
				cout<<"\nselected\n";
				c7++;
				break;
			case '8':
				cout<<"\nselected\n";
				c8++;
				break;
			case  '9':
				cout<<"\nselected\n";
				c9++;
				break;
			case 'a':
				cout<<"\nselected\n";
				c10++;
				break;
			case 's':
				cout<<"\nselected\n";
				c11++;
				break;
			default:
				cout<<"\n invalid input\n";}
	}
		while(a!='b');
			if(a=='b')
			{
				system ("cls");
				menu();
			}
}






//       PAKISTANI SPECIALITY





void pakistanispeciality()
	{
		cout<<"1. MUTTON QORMA    			 	= 500\n";
		cout<<"2. MUTTON BRAIN MASALLA       	= 440\n";
		cout<<"3. MUTTON KARHAI        		 	= 550\n";
		cout<<"4. MUTTON WHITE HANDI   		 	= 550\n";
		cout<<"5. MUTTON ACHAR KARHAI 	     	= 520\n";
		cout<<"6. MUTTON LEG ROAST  (1KG)    	= 520\n";
		cout<<"7. GREEN CHILLI MUTTON       	= 550\n";
		cout<<"8. VEGETABLE RICE       	    	= 520\n";
		cout<<"9. BEEF CHILLIES FRIED RICE  	= 475\n";
		cout<<"A. ITALIAN SHASHLIK WITH RICE	= 475\n";
		cout<<"S. PLAIN RICE   			 	= 440\n\n";
		cout<<"PRESS B TO RETURN ";


	char a;


	do
	{
		a=getche();

		switch (a)
		{
			case  '1':
				cout<<"\nselected\n";
				d1++;
				break;
			case '2':
				cout<<"\nselected\n";
				d2++;
				break;
			case  '3':
				cout<<"\nselected\n";
				d3++;
				break;
			case '4':
				cout<<"\nselected\n";
				d4++;
				break;
			case  '5':
				cout<<"\nselected\n";
				d5++;
				break;
			case '6':
				cout<<"\nselected\n";
				d6++;
				break;
			case  '7':
				cout<<"\nselected\n";
				d7++;
				break;
			case '8':
				cout<<"\nselected\n";
				d8++;
				break;
			case  '9':
				cout<<"\nselected\n";
				d9++;
				break;
			case 'a':
				cout<<"\nselected\n";
				d10++;
				break;
			case 's':
				cout<<"\nselected\n";
				d11++;
				break;
			default:
				cout<<"\n invalid input\n";}
	}
		while(a!='b');
			if(a=='b')
			{
				system ("cls");
				menu();
			}
}




//       BEEF





void beef()
	{
		cout<<"1. BEEF HOT PLATE SIZZLING    		 	= 500\n";
		cout<<"2. SPECCIAL GARLIC BEEF       			= 440\n";
		cout<<"3. SPECIAL BEEF CHILLIES (LIQUID) 	 	= 550\n\n";
		cout<<"PRESS B TO RETURN ";


	char a;


	do
	{
		a=getche();

		switch (a)
		{
			case  '1':
				cout<<"\nselected\n";
				e1++;
				break;
			case '2':
				cout<<"\nselected\n";
				e2++;
				break;
			case  '3':
				cout<<"\nselected\n";
				e3++;
			default:
				cout<<"\n invalid input\n";}
	}
		while(a!='b');
			if(a=='b')
			{
				system ("cls");
				menu();
			}
}





//       DESSERTS





void desserts()
	{
		cout<<"1. KHEER MIX    			 		= 500\n";
		cout<<"2. FRUIT TRIFFLE       			= 550\n";
		cout<<"3. SPECIAL GAJRELA         		= 500\n";
		cout<<"4. RUSS MALAI   		 			= 350\n";
		cout<<"5. SHEER KHURMA 	     			= 400\n\n";
		cout<<"PRESS B TO RETURN ";


	char a;


	do
	{
		a=getche();

		switch (a)
		{
			case  '1':
				cout<<"\nselected\n";
				f1++;
				break;
			case '2':
				cout<<"\nselected\n";
				f2++;
				break;
			case  '3':
				cout<<"\nselected\n";
				f3++;
				break;
			case '4':
				cout<<"\nselected\n";
				f4++;
				break;
			case  '5':
				cout<<"\nselected\n";
				f5++;
				break;
			default:
				cout<<"\n invalid input\n";}
	}
		while(a!='b');
			if(a=='b')
			{
				system ("cls");
				menu();
			}
}







//       HOT AND COLD BEVERAGES





void hotcoldbvg()
	{
		cout<<"1. SPECIAL MILK TEA    			 = 60\n";
		cout<<"2. GREEN TEA       			     = 40\n";
		cout<<"3. SEPERATE TEA        		 	 = 80\n";
		cout<<"4. BLACK COFFEE   		 	     = 100\n";
		cout<<"5. CAPPUCCINO 	     			 = 200\n";
		cout<<"6. COLD COFFEE    	 			 = 150\n";
		cout<<"7. MINERAL WATER       			 = 60\n";
		cout<<"8. LA CUISINE SPECIAL DRINK       = 130\n";
		cout<<"9. PINA COLADA  					 = 130\n";
		cout<<"A. SPANISH MARGARITA			 = 130\n";
		cout<<"S. RED DEVIL   			 		 = 150\n";
		cout<<"D. SWEET OR SALTISH LASSI        = 50\n\n";
		cout<<"PRESS B TO RETURN ";


	char a;


	do
	{
		a=getche();

		switch (a)
		{
			case  '1':
				cout<<"\nselected\n";
				g1++;
				break;
			case '2':
				cout<<"\nselected\n";
				g2++;
				break;
			case  '3':
				cout<<"\nselected\n";
				g3++;
				break;
			case '4':
				cout<<"\nselected\n";
				g4++;
				break;
			case  '5':
				cout<<"\nselected\n";
				g5++;
				break;
			case '6':
				cout<<"\nselected\n";
				g6++;
				break;
			case  '7':
				cout<<"\nselected\n";
				g7++;
				break;
			case '8':
				cout<<"\nselected\n";
				g8++;
				break;
			case  '9':
				cout<<"\nselected\n";
				g9++;
				break;
			case 'a':
				cout<<"\nselected\n";
				g10++;
				break;
			case 's':
				cout<<"\nselected\n";
				g11++;
				break;
			case 'd':
				cout<<"\nselected\n";
				g12++;
				break;
			default:
				cout<<"\n invalid input\n";}
	}
		while(a!='b');
			if(a=='b')
			{
				system ("cls");
				menu();
			}
}








//       ICE CREAM







void icecream()
	{
		cout<<"1. TUTTY FRUITY    			 		= 180\n";
		cout<<"2. SPECIAL LA CUISINE ICE CREAM 	    = 200\n";
		cout<<"3. CHOCKLATE CHIP      		 		= 200\n";
		cout<<"4. PLAIN ICE CREAM  		 	     	= 140\n";
		cout<<"5. MANGO ICE CREAM	     			= 100\n";
		cout<<"6. MIX ICE CREAM	 			 		= 130\n\n";
		cout<<"PRESS B TO RETURN ";


	char a;


	do
	{
		a=getche();

		switch (a)
		{
			case  '1':
				cout<<"\nselected\n";
				h1++;
				break;
			case '2':
				cout<<"\nselected\n";
				h2++;
				break;
			case  '3':
				cout<<"\nselected\n";
				h3++;
				break;
			case '4':
				cout<<"\nselected\n";
				h4++;
				break;
			case  '5':
				cout<<"\nselected\n";
				h5++;
				break;
			case '6':
				cout<<"\nselected\n";
				h6++;
				break;
			default:
				cout<<"\n invalid input\n";}
	}
		while(a!='b');
			if(a=='b')
			{
				system ("cls");
				menu();
			}
}







//       PIZZA







void pizza()
	{
		cout<<"1. CHICKEN TIKKA SPECIAL  (LARGE)  			 = (1000)\n";
		cout<<"2. CHICKEN FJITA       	 (LARGE)	         = (900)\n";
		cout<<"3. MARGARITA PIZZA        (LARGE)		 	 = (1100)\n";
		cout<<"4. MILANO PIZZA   		 (LARGE)	         = (850)\n";
		cout<<"			 LA CUISINE SPECIAL PIZZA RATE		 ";
		cout<<"5.  PERSONAL    (7)    		 	         	 = 400\n";
		cout<<"6.  REGULAR     (10)		 	        	     = 690\n";
		cout<<"7.  LARGE       (12)  		 	         	 = 950\n";
		cout<<"8.  FAMILY      (14)	     	                 = 1100\n\n";
		cout<<"PRESS B TO RETURN ";


	char a;


	do
	{
		a=getche();

		switch (a)
		{
			case  '1':
				cout<<"\nselected\n";
				i1++;
				break;
			case '2':
				cout<<"\nselected\n";
				i2++;
				break;
			case  '3':
				cout<<"\nselected\n";
				i3++;
				break;
			case '4':
				cout<<"\nselected\n";
				i4++;
				break;
			case  '5':
				cout<<"\nselected\n";
				i5++;
				break;
			case '6':
				cout<<"\nselected\n";
				i6++;
				break;
			case  '7':
				cout<<"\nselected\n";
				i7++;
				break;
			case '8':
				cout<<"\nselected\n";
				i8++;
				break;
			default:
				cout<<"\n invalid input\n";}
	}
		while(a!='b');
			if(a=='b')
			{
				system ("cls");
				menu();
			}
}







//       COLD DRINK







void coldrink()
	{
		cout<<"1. PEPSI/7-UP/DEW  		  (REGULAR)		   = 30\n";
		cout<<"2. COCA-COLA/SPRITE	  	  (REGULAR)        = 30\n";
		cout<<"3. NESTLE JUICE			  (ILITRE)	 	   = 150\n";
		cout<<"9. BIG APPLE	  			  (1LITRE)         = 60\n";
		cout<<"7. STING		     		  (REGULAR)	       = 30\n";
		cout<<"4. FRESH LIME WITH 7-UP	  (REGULAR)	       = 60\n";
		cout<<"6. RED BULL    		 	  (CANE)       	   = 100\n";
		cout<<"8. RANI  		 	      (REGULAR)  	   = 60\n\n";
		cout<<"PRESS B TO RETURN ";


	char a;


	do
	{
		a=getche();

		switch (a)
		{
			case  '1':
				cout<<"\nselected\n";
				j1++;
				break;
			case '2':
				cout<<"\nselected\n";
				j2++;
				break;
			case  '3':
				cout<<"\nselected\n";
				j3++;
				break;
			case '4':
				cout<<"\nselected\n";
				j4++;
				break;
			case  '5':
				cout<<"\nselected\n";
				j5++;
				break;
			case '6':
				cout<<"\nselected\n";
				j6++;
				break;
			case  '7':
				cout<<"\nselected\n";
				j7++;
				break;
			case '8':
				cout<<"\nselected\n";
				j8++;
				break;
			default:
				cout<<"\n invalid input\n";}
	}
		while(a!='b');
			if(a=='b')
			{
				system ("cls");
				menu();
			}
}







//       SOUP







void soup()
	{
		cout<<"1. LA CUISINE SPECIAL SOUP				  = 490\n";
		cout<<"2. CHICKEN CORN SOUP    					  = 410\n";
		cout<<"3. CHICKEN THAI SOUP	 	 				  = 400\n";
		cout<<"4. CHICKEN VEGETABLE SOUP        		  = 400\n";
		cout<<"5. CHICKEN HOT SZECHUAN SOUP	        	  = 430\n";
		cout<<"6. CHICKEN CREAM ALMONDS SOUP	   	      = 480\n";
		cout<<"7. CHICKEN MUSHROOM TOMATO SOUP			  = 450\n";
		cout<<"8. SPECIAL HOT & SOUR SOUP   	 		  = 450\n\n";
		cout<<"	  PRESS B TO RETURN ";


	char a;


	do
	{
		a=getche();

		switch (a)
		{
			case  '1':
				cout<<"\nselected\n";
				k1++;
				break;
			case '2':
				cout<<"\nselected\n";
				k2++;
				break;
			case  '3':
				cout<<"\nselected\n";
				k3++;
				break;
			case '4':
				cout<<"\nselected\n";
				k4++;
				break;
			case  '5':
				cout<<"\nselected\n";
				k5++;
				break;
			case '6':
				cout<<"\nselected\n";
				k6++;
				break;
			case  '7':
				cout<<"\nselected\n";
				k7++;
				break;
			case '8':
				cout<<"\nselected\n";
				k8++;
				break;
			default:
				cout<<"\n invalid input\n";}
	}
		while(a!='b');
			if(a=='b')
			{
				system ("cls");
				menu();
			}
}







//       FISH







void fish()
	{
		cout<<"1. FISH FINGER				  		  = 500\n";
		cout<<"2. DHAKA FISH    					  = 520\n";
		cout<<"3. FISH BALL SPECIAL   	 		 	  = 620\n\n";
		cout<<"PRESS B TO RETURN ";


	char a;


	do
	{
		a=getche();

		switch (a)
		{
			case  '1':
				cout<<"\nselected\n";
				l1++;
				break;
			case '2':
				cout<<"\nselected\n";
				l2++;
				break;
			case  '3':
				cout<<"\nselected\n";
				l3++;
				break;
			default:
				cout<<"\n invalid input\n";}
	}
		while(a!='b');
			if(a=='b')
			{
				system ("cls");
				menu();
			}
}









//       CHOWMIEN







void chowmien()
	{
		cout<<"1. LA CUISINE SPECIAL CHOWMIEN			  = 480\n";
		cout<<"2. CHICKEN CHOWMIEN    					  = 440\n";
		cout<<"3. VEGETABLE CHOWMIEN	 	 		      = 350\n";
		cout<<"4. SPECIAL BEEF CHOWMIEN        		      = 360\n\n";
		cout<<"PRESS B TO RETURN ";


	char a;


	do
	{
		a=getche();

		switch (a)
		{
			case  '1':
				cout<<"\nselected\n";
				m1++;
				break;
			case '2':
				cout<<"\nselected\n";
				m2++;
				break;
			case  '3':
				cout<<"\nselected\n";
				m3++;
				break;
			case '4':
				cout<<"\nselected\n";
				m4++;
				break;
			default:
				cout<<"\n invalid input\n";}
	}
		while(a!='b');
			if(a=='b')
			{
				system ("cls");
				menu();
			}
}








//       STARTERS







void starters()
	{
		cout<<"1. FRIED CHICKEN WINGS				  = 320\n";
		cout<<"2. CHICKEN SPRING ROLLS  			  = 300\n";
		cout<<"3. FISH CRACKER	 				  	  = 300\n\n";
		cout<<"PRESS B TO RETURN ";


	char a;


	do
	{
		a=getche();

		switch (a)
		{
			case  '1':
				cout<<"\nselected\n";
				n1++;
				break;
			case '2':
				cout<<"\nselected\n";
				n2++;
				break;
			case  '3':
				cout<<"\nselected\n";
				n3++;
				break;
			default:
				cout<<"\n invalid input\n";}
	}
		while(a!='b');
			if(a=='b')
			{
				system ("cls");
				menu();
			}
}








//       CHINESE DRY FOOD







void chinesedryfood()
	{
		cout<<"1. SPECIAL CHICKEN LA CUISISNE 				= 550\n";
		cout<<"2. CHICKEN DHAKA    						    = 520\n";
		cout<<"3. CHICKEN DRUM STICK	 	 				= 600\n";
		cout<<"4. CHICKEN SPRING WITH SAUCE       		  	= 600\n\n";
		cout<<"PRESS B TO RETURN ";


	char a;


	do
	{
		a=getche();

		switch (a)
		{
			case  '1':
				cout<<"\nselected\n";
				o1++;
				break;
			case '2':
				cout<<"\nselected\n";
				o2++;
				break;
			case  '3':
				cout<<"\nselected\n";
				o3++;
				break;
			case '4':
				cout<<"\nselected\n";
				o4++;
				break;
			default:
				cout<<"\n invalid input\n";}
	}
		while(a!='b');
			if(a=='b')
			{
				system ("cls");
				menu();
			}
}








//       BAR B.Q







void bbq()
	{
		cout<<"1. SEEKH KABAB (BEEF)				  	= 330\n";
		cout<<"2. SEEKH KABAB (MUTTON)    			    = 400\n";
		cout<<"3. CHICKEN KABAB	 				  		= 400\n";
		cout<<"4. CHICKEN RESHMI KABAB        		    = 460\n";
		cout<<"5. CHICKEN BOTI	        	  			= 400\n";
		cout<<"6. CHICKEN TIKKA PER PIECE    	        = 150\n";
		cout<<"7. CHICKEN ACHAR BOTI				    = 550\n";
		cout<<"8. CHICKEN MALAI TIKKA BOTI	            = 550\n";
		cout<<"9. MUTTON TIKKA BOTI    	   		 	    = 650\n";
		cout<<"A. CHICKEN QALMI TIKKA 				    = 600\n";
		cout<<"S. MUTTON CHOMP   	 				    = 600\n\n";
		cout<<"PRESS B TO RETURN ";


	char a;


	do
	{
		a=getche();

		switch (a)
		{
			case  '1':
				cout<<"\nselected\n";
				p1++;
				break;
			case '2':
				cout<<"\nselected\n";
				p2++;
				break;
			case  '3':
				cout<<"\nselected\n";
				p3++;
				break;
			case '4':
				cout<<"\nselected\n";
				p4++;
				break;
			case  '5':
				cout<<"\nselected\n";
				p5++;
				break;
			case '6':
				cout<<"\nselected\n";
				p6++;
				break;
			case  '7':
				cout<<"\nselected\n";
				p7++;
				break;
			case '8':
				cout<<"\nselected\n";
				p8++;
				break;
			case '9':
				cout<<"\nselected\n";
				p9++;
				break;
			case 'a':
				cout<<"\nselected\n";
				p10++;
				break;
			case 's':
				cout<<"\nselected\n";
				p11++;
				break;
			default:
				cout<<"\n invalid input\n";}
	}
		while(a!='b');
			if(a=='b')
			{
				system ("cls");
				menu();
			}
}











//       Place order Function









void placeorder()
{
	char z,b;
	int total=0;


	time_t now=time(0);						//		declare and initialize time=0
	char* dt = ctime (&now);				//      applying pointer on current time of system
	cout<<dt<<endl;							//      display the time
	cout<<"\nDISHES\t\t\t\t\t\tPRICE (PKR)\n\n"<<endl;



//       RICE ORDER



	if(a1>0)
	{
		cout<<"SPECIAL LA CUISINE RICE 			  = "<<400*a1<<"      "<<"QUANTITY = "<<a1<<"\n";
		total+=(400*a1);
		y++;
	}
	if(a2>0)
	{
		cout<<"SPECIAL LA CUISINE RICE (HALF)	     = "<<220*a2<<"      "<<"QUANTITY = "<<a2<<"\n";
		total+=(80*a2);
		y++;
	}
	if(a3>0)
	{
		cout<<"CHICKEN FRIED RICE       = "<<400*a3<<"      "<<"QUANTITY = "<<a3<<"\n";
		total+=(80*a3);
		y++;
	}
	if(a4>0)
	{
		cout<<"CHICKEN FRIED RICE (HALF)      = "<<200*a4<<"      "<<"QUANTITY = "<<a4<<"\n";
		total+=(80*a4);
		y++;
	}
	if(a5>0)
	{
		cout<<"CHICKEN MASALA RICE           	  = "<<400*a5<<"      "<<"QUANTITY = "<<a5<<"\n";
		total+=(30*a5);
		y++;
	}







//    CHICKEN ORDER






	if(b1>0)
	{
		cout<<"CHICKEN WHITE FINGER			 			 = "<<440*b1<<"      "<<"QUANTITY = "<<b1<<"\n";
		total+=(440*b1);
		y++;
	}
	if(b2>0)
	{
		cout<<"CHICKEN QORMA     						 = "<<260*b2<<"      "<<"QUANTITY = "<<b2<<"\n";
		total+=(260*b2);
		y++;
	}
	if(b3>0)
	{
		cout<<"CHICKEN JALFRAIZI      					 = "<<440*b3<<"      "<<"QUANTITY = "<<b3<<"\n";
		total+=(440*b3);
		y++;
	}
	if(b4>0)
	{
		cout<<"CHIKEN KARHAI       						 = "<<780*b4<<"      "<<"QUANTITY = "<<b4<<"\n";
		total+=(780*b4);
		y++;
	}
	if(b5>0)
	{
		cout<<"CHICKEN STEAM ROAST           	  		 = "<<560*b5<<"      "<<"QUANTITY = "<<b5<<"\n";
		total+=(560*b5);
		y++;
	}
	if(b6>0)
	{
		cout<<"CHICKEN BONELESS HANDI 			  		 = "<<900*b6<<"      "<<"QUANTITY = "<<b6<<"\n";
		total+=(900*b6);
		y++;
	}
	if(b7>0)
	{
		cout<<"CHICKEN ACHAR KARHAI     				 = "<<850*b7<<"      "<<"QUANTITY = "<<b7<<"\n";
		total+=(850*b7);
		y++;
	}
	if(b8>0)
	{
		cout<<"ARABIAN CHICKEN      			  		 = "<<440*b8<<"      "<<"QUANTITY = "<<b8<<"\n";
		total+=(440*b8);
		y++;
	}
	if(b9>0)
	{
		cout<<"CHICKEN VEGETABLE       	  				 = "<<400*b9<<"      "<<"QUANTITY = "<<b9<<"\n";
		total+=(400*b9);
		y++;
	}
	if(b10>0)
	{
		cout<<"MADRASI CHICKEN           	  			 = "<<850*b10<<"      "<<"QUANTITY = "<<b10<<"\n";
		total+=(850*b10);
		y++;
	}
	if(b11>0)
	{
		cout<<"CHICKEN BROAST       	  				 = "<<160*b11<<"      "<<"QUANTITY = "<<b11<<"\n";
		total+=(160*b11);
		y++;
	}






//    chinese speciality






	if(c1>0)
	{
		cout<<"SP. CHICKEN CHERRY WITH PINEAPPLE 			  	= "<<500*c1<<"      "<<"QUANTITY = "<<c1<<"\n";
		total+=(500*c1);
		y++;
	}
	if(c2>0)
	{
		cout<<"CHICKEN MANCHURRIAN (SIZZLING)   			    = "<<400*c2<<"      "<<"QUANTITY = "<<c2<<"\n";
		total+=(440*c2);
		y++;
	}
	if(c3>0)
	{
		cout<<"CHICKEN SWEET & SOUR      					    = "<<550*c3<<"      "<<"QUANTITY = "<<c3<<"\n";
		total+=(550*c3);
		y++;
	}
	if(c4>0)
	{
		cout<<"CHICKEN WITH ROAST ALMONDS        			    = "<<550*c4<<"      "<<"QUANTITY = "<<c4<<"\n";
		total+=(550*c4);
		y++;
	}
	if(c5>0)
	{
		cout<<"CHICKEN GARLIC				                 	= "<<520*c5<<"      "<<"QUANTITY = "<<c5<<"\n";
		total+=(520*c5);
		y++;
	}
	if(c6>0)
	{
		cout<<"CHICKEN BLACK PEPPER			  					= "<<520*c6<<"      "<<"QUANTITY = "<<c6<<"\n";
		total+=(520*c6);
		y++;
	}
	if(c7>0)
	{
		cout<<"CHICKEN CHILLIES      							= "<<550*c7<<"      "<<"QUANTITY = "<<c7<<"\n";
		total+=(550*c7);
		y++;
	}
	if(c8>0)
	{
		cout<<"CHICKEN BONELESS      			  				= "<<520*c8<<"      "<<"QUANTITY = "<<c8<<"\n";
		total+=(520*c8);
		y++;
	}
	if(c9>0)
	{
		cout<<"CHICKEN BALL       	  							= "<<475*c9<<"      "<<"QUANTITY = "<<c9<<"\n";
		total+=(475*c9);
		y++;
	}
	if(c10>0)
	{
		cout<<"CHICKEN CUTLET           	  				 	= "<<475*c10<<"      "<<"QUANTITY = "<<c10<<"\n";
		total+=(475*c10);
		y++;
	}
	if(c11>0)
	{
		cout<<"BEEF CHILLIES DRY       	  						= "<<520*c11<<"      "<<"QUANTITY = "<<c11<<"\n";
		total+=(520*c11);
		y++;
	}






//    pakistani speciality






	if(d1>0)
	{
		cout<<"MUTTON QORMA 			 			 = "<<500*d1<<"      "<<"QUANTITY = "<<d1<<"\n";
		total+=(500*d1);
		y++;
	}
	if(d2>0)
	{
		cout<<"MUTTON BRAIN MASALLA     			 = "<<440*d2<<"      "<<"QUANTITY = "<<d2<<"\n";
		total+=(440*d2);
		y++;
	}
	if(d3>0)
	{
		cout<<"MUTTON KARHAI      			 		 = "<<550*d3<<"      "<<"QUANTITY = "<<d3<<"\n";
		total+=(550*d3);
		y++;
	}
	if(d4>0)
	{
		cout<<"MUTTON WHITE HANDI       	  		 = "<<550*d4<<"      "<<"QUANTITY = "<<d4<<"\n";
		total+=(550*d4);
		y++;
	}
	if(d5>0)
	{
		cout<<"MUTTON ACHAR KARHAI           	  	 = "<<520*d5<<"      "<<"QUANTITY = "<<d5<<"\n";
		total+=(520*d5);
		y++;
	}
	if(d6>0)
	{
		cout<<"MUTTON LEG ROAST  (1KG) 			  	 = "<<520*d6<<"      "<<"QUANTITY = "<<d6<<"\n";
		total+=(520*d6);
		y++;
	}
	if(d7>0)
	{
		cout<<"GREEN CHILLI MUTTON     				 = "<<550*d7<<"      "<<"QUANTITY = "<<d7<<"\n";
		total+=(550*d7);
		y++;
	}
	if(d8>0)
	{
		cout<<"VEGETABLE RICE      			  		 = "<<520*d8<<"      "<<"QUANTITY = "<<d8<<"\n";
		total+=(520*d8);
		y++;
	}
	if(d9>0)
	{
		cout<<"BEEF CHILLIES FRIED RICE       	  	 = "<<475*d9<<"      "<<"QUANTITY = "<<d9<<"\n";
		total+=(475*d9);
		y++;
	}
	if(d10>0)
	{
		cout<<"ITALIAN SHASHLIK WITH RICE            = "<<475*d10<<"      "<<"QUANTITY = "<<d10<<"\n";
		total+=(475*d10);
		y++;
	}
	if(d11>0)
	{
		cout<<"PLAIN RICE       	  				 = "<<440*d11<<"      "<<"QUANTITY = "<<d11<<"\n";
		total+=(440*d11);
		y++;
	}





//   beef function






	if(e1>0)
	{
		cout<<"BEEF HOT PLATE SIZZLING 			  		= "<<500*e1<<"      "<<"QUANTITY = "<<e1<<"\n";
		total+=(500*e1);
		y++;
	}
	if(e2>0)
	{
		cout<<"SPECCIAL GARLIC BEEF     				= "<<440*e2<<"      "<<"QUANTITY = "<<e2<<"\n";
		total+=(440*e2);
		y++;
	}
	if(e3>0)
	{
		cout<<"SPECIAL BEEF CHILLIES (LIQUID)      		= "<<550*e3<<"      "<<"QUANTITY = "<<e3<<"\n";
		total+=(550*e3);
		y++;
	}







//   deserts function







	if(f1>0)
	{
		cout<<"KHEER MIX 						  = "<<500*f1<<"      "<<"QUANTITY = "<<f1<<"\n";
		total+=(500*f1);
		y++;
	}
	if(f2>0)
	{
		cout<<"FRUIT TRIFFLE     				  = "<<550*f2<<"      "<<"QUANTITY = "<<f2<<"\n";
		total+=(550*f2);
		y++;
	}
	if(f3>0)
	{
		cout<<"SPECIAL GAJRELA      			  = "<<500*f3<<"      "<<"QUANTITY = "<<f3<<"\n";
		total+=(500*f3);
		y++;
	}
	if(f4>0)
	{
		cout<<"RUSS MALAI       				  = "<<350*f4<<"      "<<"QUANTITY = "<<f4<<"\n";
		total+=(350*f4);
		y++;
	}
	if(f5>0)
	{
		cout<<"SHEER KHURMA           			  = "<<400*f5<<"      "<<"QUANTITY = "<<f5<<"\n";
		total+=(400*f5);
		y++;
	}







//    hot & cold beverages







	if(g1>0)
	{
		cout<<"SPECIAL MILK TEA 					  = "<<60*g1<<"      "<<"QUANTITY = "<<g1<<"\n";
		total+=(60*g1);
		y++;
	}
	if(g2>0)
	{
		cout<<"GREEN TEA     						  = "<<40*g2<<"      "<<"QUANTITY = "<<g2<<"\n";
		total+=(40*g2);
		y++;
	}
	if(g3>0)
	{
		cout<<"SEPERATE TEA      			  		  = "<<80*g3<<"      "<<"QUANTITY = "<<g3<<"\n";
		total+=(80*g3);
		y++;
	}
	if(g4>0)
	{
		cout<<"BLACK COFFEE      				 	  = "<<100*g4<<"      "<<"QUANTITY = "<<g4<<"\n";
		total+=(100*g4);
		y++;
	}
	if(g5>0)
	{
		cout<<"CAPPUCCINO    				       	  = "<<200*g5<<"      "<<"QUANTITY = "<<g5<<"\n";
		total+=(200*g5);
		y++;
	}
	if(g6>0)
	{
		cout<<"COLD COFFEE 							  = "<<150*g6<<"      "<<"QUANTITY = "<<g6<<"\n";
		total+=(150*g6);
		y++;
	}
	if(g7>0)
	{
		cout<<"MINERAL WATER  						  = "<<60*g7<<"      "<<"QUANTITY = "<<g7<<"\n";
		total+=(60*g7);
		y++;
	}
	if(g8>0)
	{
		cout<<"LA CUISINE SPECIAL DRINK      		  = "<<130*g8<<"      "<<"QUANTITY = "<<g8<<"\n";
		total+=(130*g8);
		y++;
	}
	if(g9>0)
	{
		cout<<"PINA COLADA       	  				  = "<<130*g9<<"      "<<"QUANTITY = "<<g9<<"\n";
		total+=(130*g9);
		y++;
	}
	if(g10>0)
	{
		cout<<"SPANISH MARGARITA    		       	  = "<<130*g10<<"      "<<"QUANTITY = "<<g10<<"\n";
		total+=(130*g10);
		y++;
	}
	if(g11>0)
	{
		cout<<"RED DEVIL    					   	  = "<<150*g11<<"      "<<"QUANTITY = "<<g11<<"\n";
		total+=(150*g11);
		y++;
	}
	if(g12>0)
	{
		cout<<"SWEET OR SALTISH LASSI       		  = "<<50*g12<<"      "<<"QUANTITY = "<<g12<<"\n";
		total+=(50*g12);
		y++;
	}







//    ice cream







	if(h1>0)
	{
		cout<<" TUTTY FRUITY 						  = "<<180*h1<<"      "<<"QUANTITY = "<<h1<<"\n";
		total+=(180*h1);
		y++;
	}
	if(h2>0)
	{
		cout<<"SPECIAL LA CUISINE ICE CREAM     	  = "<<200*h2<<"      "<<"QUANTITY = "<<h2<<"\n";
		total+=(200*h2);
		y++;
	}
	if(h3>0)
	{
		cout<<"CHOCKLATE CHIP      			  		  = "<<200*h3<<"      "<<"QUANTITY = "<<h3<<"\n";
		total+=(200*h3);
		y++;
	}
	if(h4>0)
	{
		cout<<"PLAIN ICE CREAM       	  			  = "<<140*h4<<"      "<<"QUANTITY = "<<h4<<"\n";
		total+=(140*h4);
		y++;
	}
	if(h5>0)
	{
		cout<<"MANGO ICE CREAM      		     	  = "<<100*h5<<"      "<<"QUANTITY = "<<h5<<"\n";
		total+=(100*h5);
		y++;
	}
	if(h6>0)
	{
		cout<<"MIX ICE CREAM 			  			  = "<<130*h6<<"      "<<"QUANTITY = "<<h6<<"\n";
		total+=(130*h6);
		y++;
	}






//    pizza








	if(i1>0)
	{
		cout<<"CHICKEN TIKKA SPECIAL  (LARGE)				  = "<<1000*i1<<"      "<<"QUANTITY = "<<i1<<"\n";
		total+=(1000*i1);
		y++;
	}
	if(i2>0)
	{
		cout<<"CHICKEN FJITA       	  (LARGE)    			  = "<<900*i2<<"      "<<"QUANTITY = "<<i2<<"\n";
		total+=(900*i2);
		y++;
	}
	if(i3>0)
	{
		cout<<" MARGARITA PIZZA       (LARGE)      		  	  = "<<1100*i3<<"      "<<"QUANTITY = "<<i3<<"\n";
		total+=(1100*i3);
		y++;
	}
	if(i4>0)
	{
		cout<<"MILANO PIZZA   		  (LARGE)       		  = "<<850*i4<<"      "<<"QUANTITY = "<<i4<<"\n";
		total+=(850*i4);
		y++;
	}
	if(i5>0)
	{
		cout<<"PERSONAL    (7)          	 				  = "<<400*i5<<"      "<<"QUANTITY = "<<i5<<"\n";
		total+=(400*i5);
		y++;
	}
	if(i6>0)
	{
		cout<<"REGULAR     (10)								  = "<<690*i6<<"      "<<"QUANTITY = "<<i6<<"\n";
		total+=(690*i6);
		y++;
	}
	if(i7>0)
	{
		cout<<"LARGE       (12)    							  = "<<950*i7<<"      "<<"QUANTITY = "<<i7<<"\n";
		total+=(950*i7);
		y++;
	}
	if(i8>0)
	{
		cout<<"FAMILY      (14)      						  = "<<1100*i8<<"      "<<"QUANTITY = "<<i8<<"\n";
		total+=(1100*i8);
		y++;
	}






//     cold drink








	if(j1>0)
	{
		cout<<"PEPSI/7-UP/DEW  		  	(REGULAR) 			  	= "<<30*j1<<"      "<<"QUANTITY = "<<j1<<"\n";
		total+=(30*j1);
		y++;
	}
	if(j2>0)
	{
		cout<<"COCA-COLA/SPRITE	  	  	(REGULAR)     			= "<<30*j2<<"      "<<"QUANTITY = "<<j2<<"\n";
		total+=(30*j2);
		y++;
	}
	if(j3>0)
	{
		cout<<"NESTLE JUICE			  	(1LITRE)      		    = "<<150*j3<<"      "<<"QUANTITY = "<<j3<<"\n";
		total+=(150*j3);
		y++;
	}
	if(j4>0)
	{
		cout<<"BIG APPLE	  			(1LITRE)      	  		= "<<30*j4<<"      "<<"QUANTITY = "<<j4<<"\n";
		total+=(30*j4);
		y++;
	}
	if(j5>0)
	{
		cout<<"STING		     		(REGULAR)          	  	= "<<30*j5<<"      "<<"QUANTITY = "<<j5<<"\n";
		total+=(30*j5);
		y++;
	}
	if(j6>0)
	{
		cout<<"FRESH LIME WITH 7-UP 	(REGULAR)		  		= "<<60*j6<<"      "<<"QUANTITY = "<<j6<<"\n";
		total+=(60*j6);
		y++;
	}
	if(j7>0)
	{
		cout<<"RED BULL   				(TIN CANE)  			= "<<100*j7<<"      "<<"QUANTITY = "<<j7<<"\n";
		total+=(100*j7);
		y++;
	}
	if(j8>0)
	{
		cout<<"RANI						(REGULAR)      			= "<<60*j8<<"      "<<"QUANTITY = "<<j8<<"\n";
		total+=(60*j8);
		y++;
	}







//     soup







	if(k1>0)
	{
		cout<<" LA CUISINE SPECIAL SOUP 			 	 = "<<490*k1<<"      "<<"QUANTITY = "<<k1<<"\n";
		total+=(490*k1);
		y++;
	}
	if(k2>0)
	{
		cout<<"CHICKEN CORN SOUP     					 = "<<410*k2<<"      "<<"QUANTITY = "<<k2<<"\n";
		total+=(410*k2);
		y++;
	}
	if(k3>0)
	{
		cout<<"CHICKEN THAI SOUP      			 		 = "<<400*k3<<"      "<<"QUANTITY = "<<k3<<"\n";
		total+=(400*k3);
		y++;
	}
	if(k4>0)
	{
		cout<<"CHICKEN VEGETABLE SOUP      	  			 = "<<400*k4<<"      "<<"QUANTITY = "<<k4<<"\n";
		total+=(400*k4);
		y++;
	}
	if(k5>0)
	{
		cout<<"CHICKEN HOT SZECHUAN SOUP           	  	 = "<<430*k5<<"      "<<"QUANTITY = "<<k5<<"\n";
		total+=(430*k5);
		y++;
	}
	if(k6>0)
	{
		cout<<"CHICKEN CREAM ALMONDS SOUP 			  	 = "<<480*k6<<"      "<<"QUANTITY = "<<k6<<"\n";
		total+=(480*k6);
		y++;
	}
	if(k7>0)
	{
		cout<<"CHICKEN MUSHROOM TOMATO SOUP     		 = "<<450*k7<<"      "<<"QUANTITY = "<<k7<<"\n";
		total+=(450*k7);
		y++;
	}
	if(k8>0)
	{
		cout<<"SPECIAL HOT & SOUR SOUP     			  	 = "<<450*k8<<"      "<<"QUANTITY = "<<k8<<"\n";
		total+=(450*k8);
		y++;
	}








//     fish







	if(l1>0)
	{
		cout<<"FISH FINGER 			  				= "<<500*l1<<"      "<<"QUANTITY = "<<l1<<"\n";
		total+=(500*l1);
		y++;
	}
	if(l2>0)
	{
		cout<<"DHAKA FISH     						= "<<520*l2<<"      "<<"QUANTITY = "<<l2<<"\n";
		total+=(520*l2);
		y++;
	}
	if(l3>0)
	{
		cout<<"FISH BALL SPECIAL      			  	= "<<620*l3<<"      "<<"QUANTITY = "<<l3<<"\n";
		total+=(620*l3);
		y++;
	}








//   chowmien







	if(m1>0)
	{
		cout<<"LA CUISINE SPECIAL CHOWMIEN			  	= "<<480*m1<<"      "<<"QUANTITY = "<<m1<<"\n";
		total+=(480*m1);
		y++;
	}
	if(m2>0)
	{
		cout<<"CHICKEN CHOWMIEN     					= "<<440*m2<<"      "<<"QUANTITY = "<<m2<<"\n";
		total+=(440*m2);
		y++;
	}
	if(m3>0)
	{
		cout<<" VEGETABLE CHOWMIEN    			  		= "<<350*m3<<"      "<<"QUANTITY = "<<m3<<"\n";
		total+=(350*m3);
		y++;
	}
	if(m4>0)
	{
		cout<<"SPECIAL BEEF CHOWMIEN       	  			= "<<360*m4<<"      "<<"QUANTITY = "<<m4<<"\n";
		total+=(360*m4);
		y++;
	}







//     starters







	if(n1>0)
	{
		cout<<" FRIED CHICKEN WINGS					  = "<<320*n1<<"      "<<"QUANTITY = "<<n1<<"\n";
		total+=(320*n1);
		y++;
	}
	if(n2>0)
	{
		cout<<"CHICKEN SPRING ROLLS     			  = "<<300*n2<<"      "<<"QUANTITY = "<<n2<<"\n";
		total+=(300*n2);
		y++;
	}
	if(n3>0)
	{
		cout<<"FISH CRACKER      			  		  = "<<300*n3<<"      "<<"QUANTITY = "<<n3<<"\n";
		total+=(300*n3);
		y++;
	}







//      chinese food







	if(o1>0)
	{
		cout<<"SPECIAL CHICKEN LA CUISISNE			  	= "<<550*o1<<"      "<<"QUANTITY = "<<o1<<"\n";
		total+=(550*o1);
		y++;
	}
	if(o2>0)
	{
		cout<<" CHICKEN DHAKA)     						= "<<520*o2<<"      "<<"QUANTITY = "<<o2<<"\n";
		total+=(520*o2);
		y++;
	}
	if(o3>0)
	{
		cout<<"CHICKEN DRUM STICK      			  		= "<<600*o3<<"      "<<"QUANTITY = "<<o3<<"\n";
		total+=(600*o3);
		y++;
	}
	if(o4>0)
	{
		cout<<"CHICKEN SPRING WITH SAUCE       	  		= "<<600*o4<<"      "<<"QUANTITY = "<<o4<<"\n";
		total+=(600*o4);
		y++;
	}






//        bar b.q







	if(p1>0)
	{
		cout<<"SEEKH KABAB (BEEF) 			 	 = "<<330*p1<<"      "<<"QUANTITY = "<<p1<<"\n";
		total+=(330*p1);
		y++;
	}
	if(p2>0)
	{
		cout<<"SEEKH KABAB (MUTTON)    			 = "<<400*p2<<"      "<<"QUANTITY = "<<p2<<"\n";
		total+=(400*p2);
		y++;
	}
	if(p3>0)
	{
		cout<<"CHICKEN KABAB      				 = "<<400*p3<<"      "<<"QUANTITY = "<<p3<<"\n";
		total+=(400*p3);
		y++;
	}
	if(p4>0)
	{
		cout<<"CHICKEN RESHMI KABAB       	     = "<<460*p4<<"      "<<"QUANTITY = "<<p4<<"\n";
		total+=(460*p4);
		y++;
	}
	if(p5>0)
	{
		cout<<"CHICKEN BOTI          	     	 = "<<400*p5<<"      "<<"QUANTITY = "<<p5<<"\n";
		total+=(400*p5);
		y++;
	}
	if(p6>0)
	{
		cout<<"CHICKEN TIKKA PER PIECE 			 = "<<150*p6<<"      "<<"QUANTITY = "<<p6<<"\n";
		total+=(150*p6);
		y++;
	}
	if(p7>0)
	{
		cout<<"CHICKEN ACHAR BOTI     			 = "<<550*p7<<"      "<<"QUANTITY = "<<p7<<"\n";
		total+=(550*p7);
		y++;
	}
	if(p8>0)
	{
		cout<<"CHICKEN MALAI TIKKA BOTI      	 = "<<550*p8<<"      "<<"QUANTITY = "<<p8<<"\n";
		total+=(550*p8);
		y++;
	}
	if(p9>0)
	{
		cout<<"MUTTON TIKKA BOTI       	 	 	 = "<<650*p9<<"      "<<"QUANTITY = "<<p9<<"\n";
		total+=(650*p9);
		y++;
	}
	if(p10>0)
	{
		cout<<"CHICKEN QALMI TIKKA           	 = "<<600*p10<<"      "<<"QUANTITY = "<<p10<<"\n";
		total+=(600*p10);
		y++;
	}
	if(p11>0)
	{
		cout<<"MUTTON CHOMP       	  			 = "<<600*p11<<"      "<<"QUANTITY = "<<p11<<"\n";
		total+=(600*p11);
		y++;
	}







//       total  bill






	cout<<"\n\nTOTAL BILL      			= "<<total<<endl<<"\nTOTAL DISHES    			= "<<y<<endl;
	tot+=total;

	cout<<"\nPRESS B TO GO BACK";

	z=getche();


	if(z=='b')
	{
		a1=0,a2=0,a3=0,a4=0,a5=0,b1=0,b2=0,b3=0,b4=0,b5=0,b6=0,b7=0,b8=0,b9=0,b10=0,b11=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,c10=0,c11=0,d1=0,d2=0,d3=0,d4=0,d5=0,d6=0,d7=0,d8=0,d9=0,d10=0,d11=0,e1=0,e2=0,e3=0,f1=0,f2=0,f3=0,f4=0,f5=0,g1=0,g2=0,g3=0,g4=0,g5=0,g6=0,g7=0,g8=0,g9=0,g10=0,g11=0,g12=0,h1=0,h2=0,h3=0,h4=0,h5=0,h6=0,i1=0,i2=0,i3=0,i4=0,i5=0,i6=0,i7=0,i8=0,i9=0,j1=0,j2=0,j3=0,j4=0,j5=0,j6=0,j7=0,j8=0,k1=0,k2=0,k3=0,k4=0,k5=0,k6=0,k7=0,k8=0,l1=0,l2=0,l3=0,m1=0,m2=0,m3=0,m4=0,n1=0,n2=0,n3=0,o1=0,o2=0,o3=0,o4=0,p1=0,p2=0,p3=0,p4=0,p5=0,p6=0,p7=0,p8=0,p9=0,p10=0,p11=0;

		b++;

	system("cls");

	func();

	}
}








//      Customer Counter Function








void totalcustomer()
	{
		char b;

		time_t now=time(0);						//		declare and initialize time=0
		char* dt = ctime (&now);				//      applying pointer on current time of system
		cout<<dt<<endl;

		cout<<"\n\nTOTAL CUSTOMER = "<<b<<endl<<"\nTOTAL REVENUE = "<<tot<<endl<<"\nTOTAL ORDERS = "<<y<<endl;
		cout<<"\n\nPRESS B TO GO BACK";


		char e;

		e=getche();

		if(e=='b')
		{
			system("cls");
			func();
		}
}



//                                         THE END
