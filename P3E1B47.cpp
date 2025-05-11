#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<time.h>
#define ROW 9
#define COL 9




int main()
{
	int k=3,i,j,c;
	char letter,letter1,letter2,password[4],g,m,n;
	printf("==========================================================================\n");
	printf("|*|                                                                    |*|\n");
	printf("|*|            iiiiiiiiiiiiii            mm              mm            |*|\n");
	printf("|*|                  ii                  mm mm        mm mm            |*|\n");
	printf("|*|                  ii                  mm  mm      mm  mm            |*|\n");
	printf("|*|                  ii                  mm    mm  mm    mm            |*|\n");
	printf("|*|                  ii                  mm      mm      mm            |*|\n");
	printf("|*|                  ii                  mm              mm            |*|\n");
	printf("|*|                  ii                  mm              mm            |*|\n");
	printf("|*|                  ii                  mm              mm            |*|\n");
	printf("|*|                  ii                  mm              mm            |*|\n");
	printf("|*|            iiiiiiiiiiiiii            mm              mm            |*|\n");
	printf("|*|                                                                    |*|\n");	
	printf("|*|            jjjjjjjjjjjjjj                 sssssss                  |*|\n");
	printf("|*|                  jj                     ss       ss                |*|\n");
	printf("|*|                  jj                    ss         ss               |*|\n");
	printf("|*|                  jj                      ss                        |*|\n");
	printf("|*|                  jj                         ss                     |*|\n");
	printf("|*|                  jj                           ss                   |*|\n");
	printf("|*|                  jj                              ss                |*|\n");
	printf("|*|           jj     jj         @@@        ss         ss     ###       |*|\n");
	printf("|*|            jj    jj         @@@         ss       ss      ###       |*|\n");	
	printf("|*|             jjjjj                         sssssss                  |*|\n");
	printf("|*|                                                                    |*|\n");
	printf("==========================================================================\n");
	printf("|*|                           P3E1B47 §º­õ»Ê                           |*|\n");
	printf("==========================================================================\n");
	printf("|*|                  *Press any  to clean the screen*                  |*|\n");
	printf("==========================================================================\n");	
	getch();
	system("cls");
	printf("The password is: 2025\n"); 
	do
	{
		printf("Enter the password: ");
		for( i=0 ; i<=3 ; i++ )  
		{
			password[i]=getch();
			printf("*");
		}
		printf("\n");
		printf("The password you entered: %c%c%c%c",password[0],password[1],password[2],password[3]); 
		if(password[0]!='2' || password[1]!='0' || password[2]!='2' || password[3]!='5') 
		{
			printf("\n");
			k--;
			printf("Incorrect password!\n");
		}
		if(k==0)
		{
			printf("No chance to enter the password!\n");
			return 0;
		}
	}
	while(password[0]!='2' || password[1]!='0' || password[2]!='2' || password[3]!='5');  
	system("cls"); 
	printf("@======================================================@\n");
	printf("|*|                                                  |*|\n");
	printf("|*|                     Welcome!                     |*|\n"); 
	printf("|*|                                                  |*|\n");
	printf("|*|==||==||==||==||==||==||==||==||==||==||==||==||==|*|\n");
	printf("|*|                                                  |*|\n");
	printf("|*|         *Press any to access the system*         |*|\n"); 
	printf("|*|                                                  |*|\n");
	printf("@======================================================@\n");
	getch();
	system("cls");
	
	do
	{
		printf("----------[Booking System]------------\n");
		printf("|     a. Available seats             |\n"); 
		printf("|     b. Arrange for you             |\n");
		printf("|     c. Choose by yourself          |\n");
		printf("|     d. Exit                        |\n");	
		printf("--------------------------------------\n");
		letter=getch();		
		
		if(letter=='a' || letter=='A')
		{
			
		}
		
		if(letter=='b' || letter=='B')
		{
			
		}
	
		if(letter=='c' || letter=='C')
		{
			
		}
		
		if(letter=='d' || letter=='D')
		{
			system("cls");
		    do
			{
				printf("------------------------------\n");
				printf("|                            |\n");
				printf("|      Continue?  (y/n)      |\n");
				printf("|                            |\n");
				printf("------------------------------\n");
				letter1=getch();
						
				if(letter1=='y' || letter1=='Y')
				{
					system("cls");
					break;
				}
						
				else if(letter1=='n' || letter1=='N')
				{
					system("cls");
					printf("@======================================================@\n");
					printf("|*|                                                  |*|\n"); 
					printf("|*|            *Thanks for coming today!*            |*|\n"); 
					printf("|*|                                                  |*|\n");
					printf("@======================================================@\n");
					return 0;
				}	
				else
				{
					system("cls");
					printf("@======================================================@\n");
					printf("|*|                                                  |*|\n");
					printf("|*|                 Wrong information!               |*|\n"); 
					printf("|*|                                                  |*|\n");
					printf("|*|==||==||==||==||==||==||==||==||==||==||==||==||==|*|\n");
					printf("|*|                                                  |*|\n");
					printf("|*|        *Press any to go back to chiose d*        |*|\n"); 
					printf("|*|                                                  |*|\n");
					printf("@======================================================@\n");
					getch();
					system("cls");						
				}
						
			}while(1);
		}		
		
	}while(1);
}
