#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void)
{
	int k=3,a,c,i,j;
	char letter,letter1,letter2,g,m,n;
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
	printf("|*|                                                                    |*|\n");
	printf("|*|                     E1B47 ������ �{���]�p�@�~2                     |*|\n");
	printf("|*|                                                                    |*|\n");
	printf("==========================================================================\n");
	printf("|*|                                                                    |*|\n");
	printf("|*|                        *�����N��H�M���ù�*                        |*|\n");
	printf("|*|                                                                    |*|\n");
	printf("==========================================================================\n");
	

	
	getch();
	system("cls");
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
	
	printf("�w�虜��");
	getch();
	system("cls");
	
	do
	{
		printf("###################################\n");
		printf("||                               ||\n");
		printf("||      a. �e�X�����T����        ||\n");
		printf("||                               ||\n");	
		printf("||-------------------------------||\n");
		printf("||===============================||\n");
		printf("||-------------------------------||\n");		
		printf("||                               ||\n");		
		printf("||      b.   ��ܭ��k��          ||\n");
		printf("||                               ||\n");	
		printf("||-------------------------------||\n");
		printf("||===============================||\n");
		printf("||-------------------------------||\n");
		printf("||                               ||\n");
		printf("||      c.      ����             ||\n");
		printf("||                               ||\n");
		printf("###################################\n");
		letter=getch();
		
		if(letter=='A' || letter=='a')
		{
			system("cls");
			do
			{
				printf("�п�J�@��a~n���r��: ");	
				scanf(" %c",&letter2);
				fflush(stdin);
				if(letter2>='a'&&letter2<='n')
					for(g=letter2;g>='a';g--)
					{
						for(n=g;n>='b';n--)
							printf(" ");  
						for(m=g;m<=letter2;m++)
							printf("%c",m);
						printf("\n");
					}
				else
					printf("��J���~!\n");
			}
			while(letter2<'a'||letter2>'n'); 
			
			printf("�����N��^��D���...");
			getch();
			system("cls");
		}
		
		else if(letter=='B' || letter=='b')
		{
			system("cls");
			do
			{			
				printf("��J�@��1~9���Ʀrn: ");
				scanf("%d",&c);
				if(c>=1&&c<=9)
					for(i=1;i<=c;i++)
					{
						for(j=1;j<=c;j++)
							printf("%d * %d=%3d   ",j,i,i*j);
						printf("\n");
					}
				else
				{
					printf("��J���~!\n");
				}
			}
			while(c<1||c>9);
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
	while(1);	
}
