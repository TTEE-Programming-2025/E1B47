#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void)
{
	int k=3,a,c,i,j;
	char letter,letter1;
	printf("�o�O�ӤH�e��\n");
	do
	{
		printf("�п�J�K�X: ");
		scanf("%d",&a);
		if(a!=2025)
		{
			k--;
			printf("��J���~!�z�u�ѤU%d �Ӿ��|\n",k);
		}
		if(k==0)
		{
			printf("�w�j�浲���{��...\n");
			return 0; 
		}
	}
	while(a!=2025);  
	printf("�����N��H�M���ù�...");
	getch();
	system("cls");
	
	while(1)
	{
		printf("���ABC");
		letter=getch();
		
		if(letter=='A' || letter=='a')
		{
			system("cls");
			printf("�o�OA���Φ�\n");
			printf("�����N��^��D���...");
			getch();
			system("cls");
		}
		
		else if(letter=='B' || letter=='b')
		{
			system("cls");
			printf("��J�@��1~9���Ʀrn: ");
			scanf("%d",&c);
			for(i=1;i<=c;i++)
			{
				for(j=1;j<=c;j++)
					printf("%d * %d=%3d   ",i,j,i*j);
				printf("\n");
			}
			printf("�����N��^��D���...");
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
					printf("��J���~�T��!\n");
					printf("�����N��^��W�@��...");
					getch();
					system("cls");
				}	
			}
			while(letter1!='Y' || letter1!='y' );
				
		}		
		
		else
		{
			system("cls");
			printf("��J���~�T��!\n");
			printf("�����N��^��D���...");
			getch();
			system("cls");			
		}
	}
		
}
