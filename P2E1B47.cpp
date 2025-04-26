#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void)
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
	printf("|*|                     E1B47 宋哲銘 程式設計作業2                     |*|\n");
	printf("==========================================================================\n");
	printf("|*|                        *按任意鍵以清除螢幕*                        |*|\n");
	printf("==========================================================================\n");	
	getch();
	system("cls");
	do
	{
		printf("請輸入密碼: ");
		for(i=0;i<=3;i++)
		{
			password[i]=getch();
			printf("*");
		}
		printf("\n");
		printf("您輸入的是: %c%c%c%c",password[0],password[1],password[2],password[3]);
		if(password[0]!='2' || password[1]!='0' || password[2]!='2' || password[3]!='5')
		{
			printf("\n");
			k--;
			printf("輸入錯誤!您只剩下 %d 次機會\n",k);
		}
		if(k==0)
		{
			printf("已強行結束程式...\n");
			return 0; 
		}
	}
	while(password[0]!='2' || password[1]!='0' || password[2]!='2' || password[3]!='5');  
	system("cls");
	printf("歡迎介面\n");  //設計 
	printf("*按任意鍵以清除螢幕*");
	getch();
	system("cls");
	
	do
	{
		printf("###################################\n");
		printf("||                               ||\n");
		printf("||      a. 畫出直角三角形        ||\n");
		printf("||                               ||\n");	
		printf("||-------------------------------||\n");
		printf("||===============================||\n");
		printf("||-------------------------------||\n");		
		printf("||                               ||\n");		
		printf("||      b.   顯示乘法表          ||\n");
		printf("||                               ||\n");	
		printf("||-------------------------------||\n");
		printf("||===============================||\n");
		printf("||-------------------------------||\n");
		printf("||                               ||\n");
		printf("||      c.      結束             ||\n");
		printf("||                               ||\n");
		printf("###################################\n");
		letter=getch();
		
		if(letter=='A' || letter=='a')
		{
			system("cls");
			do
			{
				printf("請輸入一個a~n的字元: ");	
				letter2=getche();
				fflush(stdin);
				if(letter2>='a'&&letter2<='n')
				{
					printf("\n");
					for(g=letter2;g>='a';g--)
					{
						for(n=g;n>='b';n--)
							printf(" ");
						for(m=g;m<=letter2;m++)
							printf("%c",m);
						printf("\n");
					}					
				}

				else
				{
					printf("\n");
					printf("輸入錯誤!\n");					
				}
			}
			while(letter2<'a'||letter2>'n'); 
			
			printf("按任意鍵回到主選單...");
			getch();
			system("cls");
		}
		
		else if(letter=='B' || letter=='b')
		{
			system("cls");
			do
			{			
				printf("輸入一個1~9的數字n: ");
				scanf("%d",&c);
				if(c>=1 && c<=9)
				{
					printf("\n");
					for(i=1;i<=c;i++)
					{
						for(j=1;j<=c;j++)
							printf("%d * %d=%3d   ",j,i,i*j);
						printf("\n\n");  //兩行間空一行 
					}					
				}
				else
				{
					printf("輸入錯誤!\n");
				}
			}
			while(c<1||c>9);
			printf("按任意鍵回到主選單...");
			getch();
			system("cls");				
		}
		
		else if(letter=='C' || letter=='c')
		{
			do
			{
				system("cls");
				printf("Continue? (y/n)");  //設計 
				letter1=getch();
				if(letter1=='Y' || letter1=='y')
				{
					system("cls");
					break;
				}
				else if(letter1=='N' || letter1=='n')
				{
					system("cls");
					return 0;
				}		
				else
				{
					system("cls");
					printf("輸入錯誤訊息!\n");
					printf("按任意鍵回到上一頁...");
					getch();
					system("cls");
				}	
			}
			while(letter1!='Y' || letter1!='y' );
				
		}		

		else
		{
			system("cls");
			printf("輸入錯誤訊息!\n");
			printf("按任意鍵回到主選單...");
			getch();
			system("cls");			
		}
	}
	while(1);	
}
