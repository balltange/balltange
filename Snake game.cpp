#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
int map[20][20] = {};
int main()
{
	CONSOLE_CURSOR_INFO cinfo;
	cinfo.dwSize=10;
	cinfo.bVisible=0;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cinfo);
	COORD pos;
	srand(time(NULL));
	printf("������ ������ �ּ���!");
	printf("\n"); 
	printf("�ʱ�,�߱�,����� �ϳ��� �Է��ϼ���~^^");
	char levell[100]; 
	int level;
	scanf("%s",levell); 
	if(strcmp(levell,"�ʱ�")==0)
	{
		level=400;
	}
	else if(strcmp(levell,"�߱�")==0)
	{
		level=200;
	}
	else if(strcmp(levell,"���")==0)
	{
		level=100;
	} 
	system("cls");
	int x=10,y=10,a,b;
	int tx=10,ty=10;
	char c;
	int f=0;
	int p=0;
	int n[100],m[100],t=1;
	int i,j;
	a=rand()%20;
	b=rand()%20; 
	map[a][b]=1;
	FILE *o = fopen("highscore.txt","r");
	int high;
	fscanf(o,"%d",&high);
	fclose(o);
	for(i=0;i<20;i++)
	{
		for(j=0;j<20;j++)
		{
			//printf("%d",map[i][j]);
			if(j==x&&i==y)
			{
				printf("��");
			}
			else if(map[i][j]==0) 
			{
				printf("��");
			}
			
			else if(map[i][j]==1) 
			{
				printf("��");
			}
		}
		printf("\n");
	}
	
	while(1)
	{	
		if(kbhit())
		{
			c=getch();
			if(c==-32)
			{
				c=getch();
				if(c==72 && f!=3) 		//���� 
				{
					f=1;
				}
				else if(c==77 && f!=4)	//������ 
				{
					f=2;
				}
				else if(c==80 && f!=1)	//�Ʒ� 
				{
					f=3;
				}
				else if(c==75 && f!=2)	//���� 
				{
					f=4;
				}
				
			}
		}
		tx=x;
		ty=y;
		if(f==1)
		{
			y--;
		}
		else if(f==2)
		{
			x++;
		}
		else if(f==3)
		{
			y++;
		}
		else if(f==4)
		{
			x--;
		}
		n[0] = tx;
		m[0] = ty; 
		int h;
		for(h=1;h<t;h++)
		if(n[0]==n[h] &&  m[0]==m[h])
		{
			Beep(329,300); //�� 
			Beep(293,300); //�� 
			Beep(261,300); //��
			Beep(293,300); //��	
			Beep(329,300); //��
			Beep(329,300); //��
			Beep(329,300); //��
			Beep(293,300); //��
			Beep(293,300); //��
			Beep(293,300); //��
			Beep(329,300); //��
			Beep(391,300); //�� 
			Beep(391,300); //�� 
			Beep(329,300); //�� 
			Beep(293,300); //�� 
			Beep(261,300); //��
			Beep(293,300); //��	
			Beep(329,300); //��
			Beep(329,300); //��
			Beep(329,300); //��
			Beep(293,300); //��
			Beep(293,300); //��
			Beep(329,300); //��
			Beep(293,300); //�� 
			Beep(261,300); //��
			Sleep(3000);
			system("cls");
			printf("�١١١١١١� �١١١١١١� ��           �� �١١١١١١�");
			printf("\n");
			printf("��             ��          �� �١�       �١� ��            ");
			printf("\n");
			printf("�١١١١١١� �١١١١١١� �� ��     �� �� �١١١١١١�");
			printf("\n");
			printf("��          �� ��          �� ��  ��   ��  �� ��            ");
			printf("\n");
			printf("�١١١١١١� ��          �� ��     ��    �� �١١١١١١�");
			printf("\n");
			
			printf("\n");
			
			printf("�١١١١١١� ��          �� �١١١١١١� �١١١١�         �١�");
			printf("\n");
			printf("��          ��  ��        ��  ��             ��        ��   ��  ��");
			printf("\n");
			printf("��          ��   ��      ��   �١١١١١١� ��          ��     ��");
			printf("\n");
			printf("��          ��    ��    ��    ��             �١١١١١١� ��  ��");
			printf("\n");
			printf("�١١١١١١�     �١١�     �١١١١١١� ��          ��     �١�");
			printf("\n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
			printf("������! [%d]�� �Դϴ�! �����ؿ�!",p);
			FILE *o = fopen("highscore.txt","w");
			if(high<p)
			{
				high = p;
			}
			fprintf(o,"%d",high); 
			fclose(o);
			printf("\n");
			printf("���� �ְ�������! [%d]�� �Դϴ�! �����ؿ�!",high);
			Sleep(3000);			
			return 0;
		}
		pos.X=x*2;
		pos.Y=y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		printf("��");
		
			pos.X=0;
			pos.Y=21;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
			for(j = 0;j<t;j++){
				printf("%d,%d ",n[j],m[j]);
			} 
			
		if(map[y][x]==1)
		{
			map[y][x]=0;
			a=rand()%20;
			b=rand()%20;
			map[b][a]=1;
			pos.X=a*2;
			pos.Y=b;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
			printf("��");			
			p++;
			if(level>5)
			{
				level=level-5;
			}
			if(f==1)		//���� 
			{
				pos.X=x*2;
				pos.Y=y+1;
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
				printf("��");
				n[t]=x;
				m[t]=y+1;
				t++;
			}
			else if(f==2)	//������ 
			{
				pos.X=x*2-2;
				pos.Y=y;
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
				printf("��");
				n[t]=x-1;
				m[t]=y;
				t++;
			}
			else if(f==3)	//�Ʒ� 
			{
				pos.X=x*2;
				pos.Y=y-1;
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
				printf("��");
				n[t]=x;
				m[t]=y-1;
				t++;
			}
			else if(f==4)	//���� 
			{
				pos.X=x*2+2;
				pos.Y=y;
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
				printf("��");
				n[t]=x+1;
				m[t]=y;
				t++;
			}
		}
		
		else if(map[m[t-1]][n[t-1]]==0 )
		{
			pos.X=n[t-1]*2;//
			pos.Y=m[t-1];//
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
			printf("��");
		}
		else if(map[m[t-1]][n[t-1]]==1) 
		{
			pos.X=n[t-1]*2;//
			pos.Y=m[t-1];//
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
			printf("��");
		}for(i=t-2;i>=0;i--)  
		{  
			n[i+1]=n[i];
			m[i+1]=m[i];
		} 
		Sleep(level);
		pos.X=0;
		pos.Y=20;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		printf("������! [%d]�� �Դϴ�! ���� ��ſ�� �Ծ ������ �÷����ƿ�!",p);
		pos.X=0;
		pos.Y=22;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos); 
		printf("�ӵ���! [%d] �Դϴ�! ���� ��ſ�� �Ծ �ӵ��� �÷����ƿ�! ����~",level);  
		if(x>19 || x<0 || y>19 || y<0)
		{
			Beep(329,300); //�� 
			Beep(293,300); //�� 
			Beep(261,300); //��
			Beep(293,300); //��	
			Beep(329,300); //��
			Beep(329,300); //��
			Beep(329,300); //��
			Beep(293,300); //��
			Beep(293,300); //��
			Beep(293,300); //��
			Beep(329,300); //��
			Beep(391,300); //�� 
			Beep(391,300); //�� 
			Beep(329,300); //�� 
			Beep(293,300); //�� 
			Beep(261,300); //��
			Beep(293,300); //��	
			Beep(329,300); //��
			Beep(329,300); //��
			Beep(329,300); //��
			Beep(293,300); //��
			Beep(293,300); //��
			Beep(329,300); //��
			Beep(293,300); //�� 
			Beep(261,300); //�� 
			Sleep(3000);
			system("cls");
			printf("�١١١١١١� �١١١١١١� ��           �� �١١١١١١�");
			printf("\n");
			printf("��             ��          �� �١�       �١� ��            ");
			printf("\n");
			printf("�١١١١١١� �١١١١١١� �� ��     �� �� �١١١١١١�");
			printf("\n");
			printf("��          �� ��          �� ��  ��   ��  �� ��            ");
			printf("\n");
			printf("�١١١١١١� ��          �� ��     ��    �� �١١١١١١�");
			printf("\n");
			
			printf("\n");
			
			printf("�١١١١١١� ��          �� �١١١١١١� �١١١١�         �١�");
			printf("\n");
			printf("��          ��  ��        ��  ��             ��        ��   ��  ��");
			printf("\n");
			printf("��          ��   ��      ��   �١١١١١١� ��          ��     ��");
			printf("\n");
			printf("��          ��    ��    ��    ��             �١١١١١١� ��  ��");
			printf("\n");
			printf("�١١١١١١�     �١١�     �١١١١١١� ��          ��     �١�");
			printf("\n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
			printf("������! [%d]�� �Դϴ�! �����ؿ�!",p);
			FILE *o = fopen("highscore.txt","w");
			if(high<p)
			{
				high = p;
			}
			fprintf(o,"%d",high); 
			fclose(o);
			printf("\n");
			printf("���� �ְ�������! [%d]�� �Դϴ�! �����ؿ�!",high);
			break;
		}
		
	}
	//rand()%(ū��-������+1)+������
	return 0;
} 
