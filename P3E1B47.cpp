#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h> //To use string
#include<time.h>   //To use random-function
#define ROW 9      
#define COL 9      //Size of seats is 9*9
#define LEN 600    //Maximum of choosing seats
void print_seats(char seat[ROW][COL])//Seats being apppeared
{
	system("cls");
	int i,j;
	printf("\\123456789\n");
	for(i=ROW-1 ; i>=0 ; i--)
	{
		printf("%d",i+1);
		for(j=0 ; j<COL ; j++)
			printf("%c",seat[i][j]);
		printf("\n");	 
	}
	printf("\n");
	system("pause");
}

void arrange_for_you(char seat[ROW][COL])//Finding the options cause of different number of people
{
	int i,j,x,y,z,k;
	printf("How many seats do you need? : ");
	scanf("%d",&k);
	
	if(k>=1 && k<=3)
	{
		if(k==1)
		{
			while(1)
			{
				x=rand()%(9-(k-1));
				y=rand()%9;
				if(seat[y][x]=='-')
				{
					seat[y][x]='@';
					break;
				}
			}						
		}
		else if(k==2)
		{
			while(1)
			{
				x=rand()%(9-(k-1));
				y=rand()%9;
				if(seat[y][x]=='-' && seat[y][x+1]=='-')
				{
					seat[y][x]='@';
					seat[y][x+1]='@';
					break;
				}
			}					
		}
		else if(k==3)
		{
			while(1)
			{
				x=rand()%(9-(k-1));
				y=rand()%9;
				if(seat[y][x]=='-' && seat[y][x+1]=='-' && seat[y][x+2]=='-')
				{
					seat[y][x]='@';
					seat[y][x+1]='@';
					seat[y][x+2]='@';
					break;
				}
			}									
		}	
	} 
	else if(k==4)
	{
		while(1)
		{
			z=rand()%2;
			
			if(z==0)
			{
				x=rand()%(9-(k-1));
				y=rand()%9;	
				if(seat[y][x]=='-' && seat[y][x+1]=='-' && seat[y][x+2]=='-' && seat[y][x+3]=='-')
				{
					seat[y][x]='@';
					seat[y][x+1]='@';
					seat[y][x+2]='@';
					seat[y][x+3]='@';
					break;
				}
			}
			else if(z==1)
			{
				if(seat[y][x]=='-' && seat[y][x+1]=='-' && seat[y+1][x]=='-' && seat[y+1][x+1]=='-')
				{
					seat[y][x]='@';
					seat[y][x+1]='@';
					seat[y+1][x]='@';
					seat[y+1][x+1]='@';
					break;
				}
			}				
		}		
	}		
}
void satisfied(char seat[ROW][COL])//Asking for the satisfaction
{
	int i,j;
	char chiose;
	do
	{
		printf("Are you satisfied to your seats? (y/n)");
		chiose=getch();
		if(chiose=='y' || chiose=='Y')
		{
			system("cls");
			for(i=0 ; i<ROW ; i++)
				for(j=0 ; j<COL ; j++)
					if(seat[i][j]=='@')
						seat[i][j]='*';			
			break;
		}	
		else if(chiose=='n' || chiose=='N')
		{
			system("cls");
			for(i=0 ; i<ROW ; i++)
				for(j=0 ; j<COL ; j++)
					if(seat[i][j]=='@')
						seat[i][j]='-'; 
			break;
		}
		else//Entering wrong char
		{
			system("cls");
			printf("@======================================================@\n");
			printf("|*|                                                  |*|\n");
			printf("|*|                 Wrong information!               |*|\n"); 
			printf("|*|                                                  |*|\n");
			printf("|*|==||==||==||==||==||==||==||==||==||==||==||==||==|*|\n");
			printf("|*|                                                  |*|\n");
			printf("|*|      *Press any to go back to the chiose*        |*|\n"); 
			printf("|*|                                                  |*|\n");
			printf("@======================================================@\n");
			getch();
			system("cls");			
		}
	}
	while(1);
}	
int avalible_seat(int k,int m)//Confirming the seats which is chosen whether fit in size of seat or not
{
	return (k>=1 && k<=ROW && m>=1 && m<=COL);
}
void choose_by_yourself(char seat[ROW][COL])//Choosing the seats on one's own
{
	char choose[LEN],*ptr;
	int k,m,i,j,valid,len;
		do
		{
			valid=1;
			printf("Choose the seats that you want(ex: 1-5,5-6,7-8): ");
			fflush(stdin);
			scanf("%s",choose);	
			ptr=strtok(choose,",");
			len = strlen(choose);

			while(ptr!=NULL)
			{
				if(sscanf(ptr,"%d-%d",&k,&m)==2 && avalible_seat(k,m))
				{
					if(seat[k-1][m-1]=='*')
					{
						printf("Seat %d-%d is chosen.\n",k,m);
						valid=0;
						continue;
					}
					else if (seat[k-1][m-1]=='-')
					{
						seat[k-1][m-1]='@';
					}
				}	
				else
				{
					valid=0;
					break;
				}
				ptr=strtok(NULL,",");			
			}		
			if(valid==0)
				printf("Incorrect form of input. Please try again.\n");
		}
		while(valid!=1);
}
int main()//main function
{
	int k=3,i,j,x,y,times=0;
	char letter,letter1,letter2,password[4],seat[ROW][COL];
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
	printf("|*|                           P3E1B47 ������                           |*|\n");
	printf("==========================================================================\n");
	printf("|*|                  *Press any  to clean the screen*                  |*|\n");
	printf("==========================================================================\n");	//My personal interface 
	getch();
	system("cls");
	printf("The password is: 2025\n"); 
	do//password
	{
		printf("Enter the password: ");
		for( i=0 ; i<=3 ; i++ )  //To protect privacy
		{
			password[i]=getch();
			printf("*");    
		}
		printf("\n");
		printf("The password you entered: %c%c%c%c",password[0],password[1],password[2],password[3]); //To test what password is entered
		if(password[0]!='2' || password[1]!='0' || password[2]!='2' || password[3]!='5') 
		{
			printf("\n");
			k--;
			printf("Incorrect password!\n");
		}
		if(k==0)//The end of running
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
	
	for(i=0 ; i<ROW ; i++)
		for(j=0 ; j<COL ; j++)
			seat[i][j]='-';
		
	srand(time(NULL));
	while(times<10)
	{
		x=rand()%9;
		y=rand()%9;
		if(seat[x][y]=='-')
		{
			seat[x][y]='*';
			times++;
		}
	}
	//Choosing random 10 seats
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
			system("cls");
			print_seats(seat);//Calling the subprogram
			system("cls");
		}
		
		else if(letter=='b' || letter=='B')
		{
			system("cls");
			arrange_for_you(seat); //Calling the subprogram 
			print_seats(seat);
			system("cls");	
			satisfied(seat); //Calling the subprogram 
		}
	
		else if(letter=='c' || letter=='C')
		{
			system("cls");
			choose_by_yourself(seat); //Calling the subprogram 
			system("cls");
			print_seats(seat);  
			system("cls");
			satisfied(seat);
		}
		
		else if(letter=='d' || letter=='D')//Recognizing whether end to running or not
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
				}//Continuing running
						
				else if(letter1=='n' || letter1=='N')
				{
					system("cls");
					printf("@======================================================@\n");
					printf("|*|                                                  |*|\n"); 
					printf("|*|            *Thanks for coming today!*            |*|\n"); 
					printf("|*|                                                  |*|\n");
					printf("@======================================================@\n");
					return 0;//The end
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
					printf("|*|        *Press any to go back to chiose  *        |*|\n"); 
					printf("|*|                                                  |*|\n");
					printf("@======================================================@\n");
					getch();
					system("cls");						
				}			
			}while(1);
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
			printf("|*|        *Press any to go back to the menu*        |*|\n"); 
			printf("|*|                                                  |*|\n");
			printf("@======================================================@\n");
			getch();
			system("cls");									
		}
	}while(1);
}
/*�������{���@�~�x���L��A���]�k�S��ڪ��ɶ��w�Ƥ����B��{�����m�߶q�ٻ��������C�ߤ@�y�����O�A�ڵo�{�F�Ƶ{���u�����ɤF�{�����iŪ�ʡA
�ڥH��|���[�Q�ΡC�̫�A�ڸӦn�n�Ϭ٦ۤv�b�{���s�g�o�譱�A�O�_���o��Ӧ������ɡA�٦��p��W���m�ߪ��ɶ��C */ 
