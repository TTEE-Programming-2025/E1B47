#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
struct data
{
	char name[10];
	char ID[7];
	int math;
	int physics;
	int eng;
	float avg;
}student[10],*ptr;

void enter_grades(struct data *ptr,int *n);
void display_grades(struct data *ptr,int n);
void find_grades(struct data *ptr,int n);
void grades_ranking(struct data *ptr,int n);
int main()
{
	int i,k=3,n=0;
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
		for( i=0 ; i<4 ; i++ )  
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
		

	do
	{ 
		ptr=&student[0];
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
				enter_grades(ptr,&n);
				break;
				
			case('b'): 
				display_grades(ptr,n);
				break;				
				
			case('c'): 
				find_grades(ptr,n);
				break;
				
			case('d'): 
				grades_ranking(ptr,n);
				break;	

			case('e'): 
				
				break;
					
			default:
				system("cls");
				printf("��J���~�T��!\n\n");
				printf("�����N��^��D���...");
				getch();
				system("cls");										
		}	
	}
	while(1);
}

void enter_grades(struct data *ptr,int *n)//a
{
	float sum;
	int i;
	system("cls");
	do
	{
		printf("�п�J n�]5~10�^�����: ");
		fflush(stdin);
		scanf("%d",n);		
		if(*n>4 && *n<11)
			break;
		else
			printf("��J���~!\n");
	}while(1);
	
	for(i=0 ; i<*n ; i++)
	{
		do
		{
			printf("�п�J��%d��ǥͩm�W�B�Ǹ��]6 ���ơ^�B�ƾǡB���z�B�^�媺���Z�]0~100 ���^: ",i+1);
			scanf("%s %s %d %d %d",ptr->name,ptr->ID,&ptr->math,&ptr->physics,&ptr->eng);
			
			int invalid=0;
				
			if(strlen(ptr->ID)!=6)	
				invalid=1;
				
			if(ptr->math<0 || ptr->math>100 || ptr->physics<0 || ptr->physics>100  || ptr->eng<0 || ptr->eng>100)	
				invalid=1;
				
			if(invalid==0)
				break;		
			printf("�榡���~!\n");	
		}while(1);
			ptr++;
	}	
	ptr=&student[0]; //���m���� 
	for(i=0 ; i<*n; i++)//���ba�p�⥭�����Z 
	{
		sum=0.0;
		sum=(float)(ptr->math+ptr->physics+ptr->eng);
		ptr->avg=sum/3.0;		
		ptr++;
	}
	printf("\n");
	printf("�����N��^��D���...");
	getch();
	system("cls");
}

void display_grades(struct data *ptr,int n)//b 
{
	system("cls");
	int i;
	printf("�m�W       �Ǹ�       �ƾ�     ���z     �^��     �������Z\n");
	for(i=0 ; i<n; i++)
	{		
		printf("%s     %s     %d       %d       %d       %.1f\n",ptr->name,ptr->ID,ptr->math,ptr->physics,ptr->eng,ptr->avg);
		ptr++;
	}
	printf("\n");
	printf("�����N��^��D���...");
	getch();
	system("cls");
}

void find_grades(struct data *ptr,int n)
{
	int invalid=1;
	char search[10];
	system("cls");
	printf("�п�J�n�j�M���m�W: ");
	scanf("%s",search);
	
	for(int i=0 ; i<n ; i++)
	{
		if(strcmp(search,ptr->name)==0)
		{
			invalid=0;
			break;			
		}		
		else	
			ptr++; 
	}
	if(invalid==0)
	{
		printf("�m�W       �Ǹ�       �ƾ�     ���z     �^��     �������Z\n");
		printf("%s     %s     %d       %d       %d       %.1f\n\n",ptr->name,ptr->ID,ptr->math,ptr->physics,ptr->eng,ptr->avg);
	}
	else
		printf("�������H�����s�b...\n\n");
	printf("�����N��^��D���...");
	getch();
	system("cls");
}

void grades_ranking(struct data *ptr,int n)
{
	struct data temp;
	float avg1,avg2;
	int i,j;
	
	for(i=0 ; i<n-1;i++)
		for(j=0 ; j<n-1-i ; j++)
		{
			avg1=(float)(student[j].math+student[j].physics+student[j].eng)/3.0;
			avg2=(float)(student[j+1].math+student[j+1].physics+student[j+1].eng)/3.0;

			if(avg1<avg2)
            {
                temp=student[j];
                student[j]=student[j+1];
                student[j+1]=temp;
            }					
		}
	printf("�m�W       �Ǹ�       �ƾ�     ���z     �^��     �������Z\n");
	for(i=0 ; i<n ;i++)
		printf("%s     %s     %d       %d       %d       %.1f\n"
		,student[i].name,student[i].ID,student[i].math,student[i].physics,student[i].eng,student[i].avg);
		
	printf("\n�����N��^��D���...");
	getch();
	system("cls");
}
