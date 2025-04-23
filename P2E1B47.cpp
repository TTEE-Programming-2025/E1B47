#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void)
{
	int k=3,a,c,i,j;
	char letter,letter1;
	printf("這是個人畫面\n");
	do
	{
		printf("請輸入密碼: ");
		scanf("%d",&a);
		if(a!=2025)
		{
			k--;
			printf("輸入錯誤!您只剩下%d 個機會\n",k);
		}
		if(k==0)
		{
			printf("已強行結束程式...\n");
			return 0; 
		}
	}
	while(a!=2025);  
	printf("按任意鍵以清除螢幕...");
	getch();
	system("cls");
	
	while(1)
	{
		printf("選單ABC");
		letter=getch();
		
		if(letter=='A' || letter=='a')
		{
			system("cls");
			printf("這是A的形式\n");
			printf("按任意鍵回到主選單...");
			getch();
			system("cls");
		}
		
		else if(letter=='B' || letter=='b')
		{
			system("cls");
			printf("輸入一個1~9的數字n: ");
			scanf("%d",&c);
			for(i=1;i<=c;i++)
			{
				for(j=1;j<=c;j++)
					printf("%d * %d=%3d   ",i,j,i*j);
				printf("\n");
			}
			printf("按任意鍵回到主選單...");
			getch();
			system("cls");				
		}
		
		else if(letter=='C' || letter=='c')
		{
			do
			{
				system("cls");
				printf("Continue? (y/n)");
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
		
}
