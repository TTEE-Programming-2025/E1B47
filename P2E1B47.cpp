#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void)
{
	int k=3,i,j,c;//�ŧi�K�X��J���|�B�j��B���k���Ʀr�ܼ� 
	char letter,letter1,letter2,password[4],g,m,n;//�ŧi�D���B�K�X�B�����T���Ωһݪ��r���ܼ� 
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
	printf("|*|                     E1B47 ������ �{���]�p�@�~2                     |*|\n");
	printf("==========================================================================\n");
	printf("|*|                        *�����N��H�M���ù�*                        |*|\n");
	printf("==========================================================================\n");	//�ӤH�����]�p 
	getch();
	system("cls");//�M����e�e��
	printf("�K�X: 2025\n");//���F��K���աA����ܱK�X 
	do
	{
		printf("�п�J�K�X: ");
		for( i=0 ; i<=3 ; i++ ) //�W�[�K�X������ 
		{
			password[i]=getch();
			printf("*");
		}
		printf("\n");
		printf("�z��J���O: %c%c%c%c",password[0],password[1],password[2],password[3]); //�T�{��J���K�X 
		if(password[0]!='2' || password[1]!='0' || password[2]!='2' || password[3]!='5')//�K�X���~�B��J�K�X���|�|���� 
		{
			printf("\n");
			k--;//�쥻k=3�A���0�ɡA�|����U��P�_ 
			printf("��J���~!�z�u�ѤU %d �����|\n",k);
		}
		if(k==0)//���|�Χ��ɡA�����{�� 
		{
			printf("�w�j�浲���{��...\n");
			return 0; 
		}
	}
	while(password[0]!='2' || password[1]!='0' || password[2]!='2' || password[3]!='5');  //��J�K�X���T�ɡA���X�j�� 
	system("cls");//�o�@�B�O���J���T�K�X�ɡA���ݭn��ܥ��T�K�X�A�H�W�[������ 
	printf("@======================================================@\n");
	printf("|*|                                                  |*|\n");
	printf("|*|                     �w��^��!                    |*|\n"); 
	printf("|*|                                                  |*|\n");
	printf("|*|==||==||==||==||==||==||==||==||==||==||==||==||==|*|\n");
	printf("|*|                                                  |*|\n");
	printf("|*|               *�����N��i�J�D���*               |*|\n"); 
	printf("|*|                                                  |*|\n");
	printf("@======================================================@\n");//�����]�p 
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
		printf("###################################\n");//�D��椶���]�p 
		letter=getch();
		
		if( letter=='A' || letter=='a' )//�P�_�ﶵ 
		{
			system("cls");
			do
			{
				printf("�п�J�@��a~n���r��: ");	
				letter2=getche();//��ܿ�J���r�� 
				fflush(stdin);
				if(letter2>='a' && letter2<='n')
				{
					printf("\n");//���F�n�ݴ��F�� 
					for(g=letter2 ; g>='a' ; g--) //�T���λݭn����� 
					{
						for(n=g ; n>='b' ; n--)
							printf(" ");//�L�X�Ů� 
						for(m=g ; m<=letter2 ; m++)
							printf("%c",m);//�C���U�@��A�r���|�q�e�@�Ӷ��Ǫ��}�l�L 
						printf("\n");//����A�~��L 
					}					
				}

				else//���ŦX�p�g�r�����r�� 
				{
					printf("\n");
					printf("��J���~!\n");					
				}
			}
			while(letter2<'a' || letter2>'n'); //��J���r���ŦX����ɡA���X�j��ܥD��� 
			printf("\n\n");//���F�n�ݪŤ@�� 
			printf("@======================================================@\n");
			printf("|*|                                                  |*|\n");
			printf("|*|               *�����N��^��D���*               |*|\n"); 
			printf("|*|                                                  |*|\n");
			printf("@======================================================@\n");//�����]�p 
			getch();
			system("cls");
		}
		
		else if(letter=='B' || letter=='b')//�P�_�ﶵ 
		{
			system("cls");
			do
			{			
				printf("��J�@��1~9���Ʀrn: ");
				scanf("%d",&c);//��J�Ʀr(�ݭn��enter��) 
				fflush(stdin); /*�`�N�A���ɿ�J�D�Ʀr���r���A�i��|�J��L���j�骺���G�A
�άO�����L�X�H�Ʀr9���D�����k��A�B�A���^����b�ɡA�Y�ϥ���J�Ʀr�]�|�X�{���k��A�G�ݭn���M���w�İϪ����O�A
�h�P�_��J���r���O�_���Ʀr�ð���U�誺����ԭz */
				if(c>=1 && c<=9)
				{
					printf("\n");
					for(i=1;i<=c;i++)//�L�X�C 
					{
						for(j=1;j<=c;j++)//�L�X�� 
							printf("%d * %d=%3d   ",j,i,i*j);
						printf("\n\n");  //��涡�Ť@��A�����k��n�ݤ@�I 
					}					
				}
				else//�J��D�Ʀr�Τ��ŦX�d�򪺼Ʀr�� 
				{
					printf("��J���~!\n");
				}
			}
			while(c<1 || c>9);//���J���Ʀr��1~9�䤤���@�ɡA���X�j�� 
			printf("@======================================================@\n");
			printf("|*|                                                  |*|\n");
			printf("|*|               *�����N��^��D���*               |*|\n"); 
			printf("|*|                                                  |*|\n");
			printf("@======================================================@\n");
			getch();
			system("cls");				
		}
		
		else if(letter=='C' || letter=='c')//�P�_�ﶵ 
		{
			do
			{
				system("cls");
				printf("@======================================================@\n");
				printf("|*|                                                  |*|\n");
				printf("|*|                 Continue?  (y/n)                 |*|\n"); 
				printf("|*|                                                  |*|\n");
				printf("@======================================================@\n");
				letter1=getch();//��J�r���H�P�_ 
				fflush(stdin);
				if(letter1=='Y' || letter1=='y')
				{
					system("cls");
					break;//�|�^��̥~��do-while�j��A�]�N�O�D��� 
				}
				else if(letter1=='N' || letter1=='n')
				{
					system("cls");
					printf("@======================================================@\n");
					printf("|*|                                                  |*|\n"); 
					printf("|*|                  *���ݱz�����!*                 |*|\n"); 
					printf("|*|                                                  |*|\n");
					printf("@======================================================@\n");
					return 0;//�ϵ{���������a�� 
				}		
				else//��JY�By�BN�Bn�H�~���r����,���ĵ�i�T�� 
				{
					system("cls");
					printf("@======================================================@\n");
					printf("|*|                                                  |*|\n");
					printf("|*|                   ��J���~�T��!                  |*|\n"); 
					printf("|*|                                                  |*|\n");
					printf("|*|==||==||==||==||==||==||==||==||==||==||==||==||==|*|\n");
					printf("|*|                                                  |*|\n");
					printf("|*|                *�����N��^��ﶵc*               |*|\n"); 
					printf("|*|                                                  |*|\n");
					printf("@======================================================@\n");
					getch();
					system("cls");
				}	
			}
			while(letter1!='Y' || letter1!='y' ); 
				
		}		

		else//��Ja�Bb�Bc�BA�BB�BC�H�~���r���ɡA���ĵ�i�T�� 
		{
			system("cls");
			printf("@======================================================@\n");
			printf("|*|                                                  |*|\n");
			printf("|*|                   ��J���~�T��!                  |*|\n"); 
			printf("|*|                                                  |*|\n");
			printf("|*|==||==||==||==||==||==||==||==||==||==||==||==||==|*|\n");
			printf("|*|                                                  |*|\n");
			printf("|*|               *�����N��^��D���*               |*|\n"); 
			printf("|*|                                                  |*|\n");
			printf("@======================================================@\n");
			getch();
			system("cls");			
		}
	}
	while(1);	//�L�a�j�� 
}
/*�b�s�g�����@�~�ɡA�ڹJ��̤j���x���O�p��b�j�����U�L�X�a�k�������T���ΡA�Ө��ӧڤ~�o�{�A�j�骺�W��p�i�H�����@��"�p�ƾ�"�A
�o��M�w�b�C�@�����N������U�A�گ�L�X�h�֭ӪŮ�C���~�A�ھi���F�@�ӲߺD�A�O�b�C�@��scanf�Bgetch()�Agetche()��getchar()���O���᭱�A
�@�ߥ[fflush(stdin)���O�A���n�n�M���w�İϪ��F��|���{���o�ͥ�����������~�C�b�����@�~�A��ı�o�వ�o��n���a��A�O����W���C�@�ӿﶵ�A
���ΰƵ{���s�g�A�o�]�N�O�U���@�~�����n���D �C*/ 
