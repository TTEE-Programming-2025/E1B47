#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct data
{
	char name[10];
	char ID[7];
	int math;
	int physics;
	int eng;
}student[10],*ptr;

void enter_grades(struct data *ptr);

int main()
{
	int i,k=3;
	char password[4],letter1;
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
	printf("|*|                     E1B47 ������ �{���]�p�@�~4                     |*|\n");
	printf("==========================================================================\n");
	printf("|*|                        *�����N��H�M���ù�*                        |*|\n");
	printf("==========================================================================\n");		
	getch();
	system("cls");
	
	printf("�K�X: 2025\n");
	do
	{
		printf("�п�J�K�X: ");
		for( i=0 ; i<=3 ; i++ )  
		{
			password[i]=getch();
			printf("*");
		}
		if(password[0]!='2' || password[1]!='0' || password[2]!='2' || password[3]!='5')
		{
			printf("\n");
			k--; 
			printf("��J���~!�z�u�ѤU%d�����|\n",k);
		}
		if(k==0) 
		{
			printf("�w�j�浲���{��...\n");
			return 0; 
		}
	}	
	while(password[0]!='2' || password[1]!='0' || password[2]!='2' || password[3]!='5');
	system("cls");
	printf("\n");	
	printf("@======================================================@\n");
	printf("|*|                                                  |*|\n");
	printf("|*|                     �w��^��!                    |*|\n"); 
	printf("|*|                                                  |*|\n");
	printf("|*|==||==||==||==||==||==||==||==||==||==||==||==||==|*|\n");
	printf("|*|                                                  |*|\n");
	printf("|*|               *�����N��i�J�D���*               |*|\n"); 
	printf("|*|                                                  |*|\n");
	printf("@======================================================@\n");	
	getch();
	system("cls");
		
	ptr=&student[0];
	do
	{ 
		printf("------------[Grade System]------------\n");
		printf("|   a. Enter student grades          |\n");
		printf("|   b. Display student grades        |\n");
		printf("|   c. Search for student grades     |\n");
		printf("|   d. Grade ranking                 |\n");
		printf("|   e. Exit system                   |\n");
		printf("--------------------------------------\n");

		letter1=getch();
		switch(letter1)
		{
			case('a'): 
				enter_grades(ptr);
				break;
				
			case('b'): 
				
				break;				
				
			case('c'): 
				
				break;
				
			case('d'): 
				
				break;	

			case('e'): 
				
				break;
					
			default:
				printf("��J���~�T��!\n\n");
				printf("�����N��^��D���...");
				getch();
				system("cls");										
		}	
	}
	while(1);
}
void enter_grades(struct data *ptr)//a
{
	int i,n;
	system("cls");
	do
	{
		printf("�п�J n�]5~10�^�����: ");
		fflush(stdin);
		scanf("%d",&n);		
		if(n>4 && n<11)
			break;
		else
			printf("��J���~!\n");
	}while(1);

	for(i=0 ; i<n ; i++)
	{
		printf("��J��%d��ǥͩm�W�B�Ǹ��]6 ���ơ^�B�ƾǡB���z�B�^�媺���Z�]0~100 ���^: ",i+1);
		scanf("%s %s %d %d %d",ptr->name,ptr->ID,&ptr->math,&ptr->physics,&ptr->eng);
		ptr++;
	}	
}

