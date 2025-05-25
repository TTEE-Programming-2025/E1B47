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
}student[10],*ptr;

void enter_grades(struct data *ptr,int *n);
void display_grades(struct data *ptr,int n);

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
	printf("|*|                     E1B47 宋哲銘 程式設計作業4                     |*|\n");
	printf("==========================================================================\n");
	printf("|*|                        *按任意鍵以清除螢幕*                        |*|\n");
	printf("==========================================================================\n");		
	getch();
	system("cls");
	
	printf("密碼: 2025\n");
	do
	{
		printf("請輸入密碼: ");
		for( i=0 ; i<4 ; i++ )  
		{
			password[i]=getch();
			printf("*");
		}
		if(password[0]!='2' || password[1]!='0' || password[2]!='2' || password[3]!='5')
		{
			printf("\n");
			k--; 
			printf("輸入錯誤!您只剩下%d次機會\n",k);
		}
		if(k==0) 
		{
			printf("已強行結束程式...\n");
			return 0; 
		}
	}	
	while(password[0]!='2' || password[1]!='0' || password[2]!='2' || password[3]!='5');
	system("cls");
	printf("\n");	
	printf("@======================================================@\n");
	printf("|*|                                                  |*|\n");
	printf("|*|                     歡迎回來!                    |*|\n"); 
	printf("|*|                                                  |*|\n");
	printf("|*|==||==||==||==||==||==||==||==||==||==||==||==||==|*|\n");
	printf("|*|                                                  |*|\n");
	printf("|*|               *按任意鍵進入主選單*               |*|\n"); 
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
				
				break;
				
			case('d'): 
				
				break;	

			case('e'): 
				
				break;
					
			default:
				printf("輸入錯誤訊息!\n\n");
				printf("按任意鍵回到主選單...");
				getch();
				system("cls");										
		}	
	}
	while(1);
}

void enter_grades(struct data *ptr,int *n)//a
{
	int i;
	system("cls");
	do
	{
		printf("請輸入 n（5~10）的整數: ");
		fflush(stdin);
		scanf("%d",n);		
		if(*n>4 && *n<11)
			break;
		else
			printf("輸入錯誤!\n");
	}while(1);
	
	for(i=0 ; i<*n ; i++)
	{
		do
		{
			printf("請輸入第%d位學生姓名、學號（6 位整數）、數學、物理、英文的成績（0~100 分）: ",i+1);
			scanf("%s %s %d %d %d",ptr->name,ptr->ID,&ptr->math,&ptr->physics,&ptr->eng);
			
			int invalid=0;
				
			if(strlen(ptr->ID)!=6)	
				invalid=1;
				
			if(ptr->math<0 || ptr->math>100 || ptr->physics<0 || ptr->physics>100  || ptr->eng<0 || ptr->eng>100)	
				invalid=1;
				
			if(invalid==0)
				break;		
			printf("格式有誤!\n");	
		}while(1);
			ptr++;
	}	
	printf("\n按任意鍵回到主選單...");
	getch();
	system("cls");
}

void display_grades(struct data *ptr,int n)//b 
{
	system("cls");
	float avg,sum;
	int i;
	printf("姓名       學號       數學     物理     英文     平均成績\n");
	for(i=0 ; i<n; i++)
	{
		sum=(float)(ptr->math+ptr->physics+ptr->eng);
		avg=sum/3.0;		
		printf("%s     %s     %d       %d       %d       %.1f\n",ptr->name,ptr->ID,ptr->math,ptr->physics,ptr->eng,avg);
		ptr++;
	}
	printf("\n按任意鍵回到主選單...");
	getch();
	system("cls");
}
