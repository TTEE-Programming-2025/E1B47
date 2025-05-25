#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
struct data        //宣告結構變數 
{
	char name[10]; //名字 
	char ID[7];    //學號 
	int math;  
	int physics;
	int eng;       //三科成績 
	float avg;     //平均成績 
}student[10],*ptr,temp;

void enter_grades(struct data *ptr,int *n);
void display_grades(struct data *ptr,int n);
void find_grades(struct data *ptr,int n);
void grades_ranking(struct data *ptr,int n);
void exit(void);                            //宣告需要用到的函式
 
int main()
{
	int i,k=3,n=0;
	char password[4],letter1,letter2;
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
	printf("==========================================================================\n");  //個人風格介面 
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
		}   //密碼隱蔽性 
		if(password[0]!='2' || password[1]!='0' || password[2]!='2' || password[3]!='5')
		{
			printf("\n");
			k--; 
			if(k==0) 
			{
				printf("已強行結束程式...\n");
				return 0; 
			}
			printf("輸入錯誤!您只剩下%d次機會\n",k);
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
		printf("--------------------------------------\n");//主選單 

		letter1=getch();
		switch(letter1)//a~d的指令都用函式表示 
		{
			case('a'): 
				enter_grades(ptr,&n);  
				exit();
				break;
				
			case('b'): 
				display_grades(ptr,n);   
				exit();
				break;				
				
			case('c'): 
				find_grades(ptr,n); 
				exit();
				break;
				
			case('d'): 
				grades_ranking(ptr,n);
				exit();
				break;	

			case('e'): 
				do //不跳脫此層迴圈直到輸入字元是'n' 
				{
					system("cls");
					printf("確定離開？ (y/n)");
					letter2=getch();		
					
					switch(letter2)
					{
						case('y'):
							return 0; //結束程式 
							
						case('n'):
							system("cls");
							break;	
							
						default:  //其他字元 
							break;	
					}			
				}while(letter2!='n'); //讀到'n'時會離開迴圈 
				break;
					
			default:
				system("cls");
				printf("輸入錯誤訊息!\n");
				exit();					
		}	
	}
	while(1);
}

void enter_grades(struct data *ptr,int *n)//輸入資料，用指標是為了直接改主程式裡的n值 
{
	float sum;
	int i;
	system("cls");
	do
	{
		printf("請輸入 n（5~10）的整數: ");  //人數要求 
		fflush(stdin);
		scanf("%d",n);		
		if(*n>4 && *n<11) 
			break;
		else
			printf("輸入錯誤!\n");
	}while(1);
	printf("\n範例: 宋哲銘  011147 88 97 98\n\n");
	for(i=0 ; i<*n ; i++)
	{
		do     //一直輸入資料直到是正確的格式 
		{
			printf("請輸入第%d位學生姓名、學號（6 位整數）、數學、物理、英文的成績（0~100 分）: ",i+1);
			scanf("%s %s %d %d %d",ptr->name,ptr->ID,&ptr->math,&ptr->physics,&ptr->eng);
			
			int invalid=0;  
				
			if(strlen(ptr->ID)!=6) //學號只能是6位數	
				invalid=1;
				
			if(ptr->math<0 || ptr->math>100 || ptr->physics<0 || ptr->physics>100  || ptr->eng<0 || ptr->eng>100)	//成績只能介於0~100 
				invalid=1;
				
			if(invalid==0) //若格式正確，則跳脫迴圈並迭代 
				break;		
				
			printf("格式有誤!\n");	
		}while(1);
			ptr++;  //指標位移 
	}	
	ptr=&student[0]; //重置指標 
	for(i=0 ; i<*n; i++)//先在a計算平均成績 
	{
		sum=0.0;
		sum=(float)(ptr->math+ptr->physics+ptr->eng);
		ptr->avg=sum/3.0;		
		ptr++;
	}
}

void display_grades(struct data *ptr,int n)//顯示資料 
{
	system("cls");
	int i;
	printf("姓名       學號       數學     物理     英文     平均成績\n");
	for(i=0 ; i<n; i++)
	{		
		printf("%s     %s     %d       %d       %d       %.1f\n",ptr->name,ptr->ID,ptr->math,ptr->physics,ptr->eng,ptr->avg);
		ptr++;
	}
}

void find_grades(struct data *ptr,int n) //搜尋資料
{
	int invalid=1;
	char search[10];
	system("cls");
	printf("請輸入要搜尋的姓名: ");
	scanf("%s",search);
	
	for(int i=0 ; i<n ; i++)
	{
		if(strcmp(search,ptr->name)==0) //若查到姓名則跳脫迴圈 
		{
			invalid=0;
			break;			
		}		
		else	
			ptr++; 
	}
	if(invalid==0)  
	{
		printf("姓名       學號       數學     物理     英文     平均成績\n");
		printf("%s     %s     %d       %d       %d       %.1f\n\n",ptr->name,ptr->ID,ptr->math,ptr->physics,ptr->eng,ptr->avg);
	}
	else
		printf("此身份信息不存在...\n\n");
}

void grades_ranking(struct data *ptr,int n) //比較成績 
{
	system("cls");
	float avg1,avg2; //前者與後者的成績比較 
	int i,j;	
	for(i=0 ; i<n-1;i++)        //冒泡排序法 
		for(j=0 ; j<n-1-i ; j++)
		{
			avg1=(float)(student[j].math+student[j].physics+student[j].eng)/3.0;
			avg2=(float)(student[j+1].math+student[j+1].physics+student[j+1].eng)/3.0;

			if(avg1<avg2) //資料結構互換 
            {
                temp=student[j];
                student[j]=student[j+1];
                student[j+1]=temp;
            }					
		}
	printf("姓名       學號       數學     物理     英文     平均成績\n");
	for(i=0 ; i<n ;i++)
		printf("%s     %s     %d       %d       %d       %.1f\n"
		,student[i].name,student[i].ID,student[i].math,student[i].physics,student[i].eng,student[i].avg);
}

void exit(void) //返回指令 
{
	printf("\n按任意鍵回到主選單...");
	getch();
	system("cls");	
}
/*做完本次作業，使我對結構、函式與指標的運用更加熟絡。我遇到最大的困難，是要怎麼把副程式中的整數變數
引到其他的副程式，因為在之前的編寫中從未遇到過這種情況。後來我才明白"傳址"是一個很重要的技巧。他能讓
區域變數用在其他函式上。令我感到意外的是，連整數變數也可以傳址。*/ 
