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
	printf("레벨을 선택해 주세요!");
	printf("\n"); 
	printf("초급,중급,고급중 하나를 입력하세요~^^");
	char levell[100]; 
	int level;
	scanf("%s",levell); 
	if(strcmp(levell,"초급")==0)
	{
		level=400;
	}
	else if(strcmp(levell,"중급")==0)
	{
		level=200;
	}
	else if(strcmp(levell,"고급")==0)
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
				printf("●");
			}
			else if(map[i][j]==0) 
			{
				printf("□");
			}
			
			else if(map[i][j]==1) 
			{
				printf("★");
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
				if(c==72 && f!=3) 		//위쪽 
				{
					f=1;
				}
				else if(c==77 && f!=4)	//오른쪽 
				{
					f=2;
				}
				else if(c==80 && f!=1)	//아래 
				{
					f=3;
				}
				else if(c==75 && f!=2)	//왼쪽 
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
			Beep(329,300); //미 
			Beep(293,300); //레 
			Beep(261,300); //도
			Beep(293,300); //레	
			Beep(329,300); //미
			Beep(329,300); //미
			Beep(329,300); //미
			Beep(293,300); //레
			Beep(293,300); //레
			Beep(293,300); //레
			Beep(329,300); //미
			Beep(391,300); //솔 
			Beep(391,300); //솔 
			Beep(329,300); //미 
			Beep(293,300); //레 
			Beep(261,300); //도
			Beep(293,300); //레	
			Beep(329,300); //미
			Beep(329,300); //미
			Beep(329,300); //미
			Beep(293,300); //레
			Beep(293,300); //레
			Beep(329,300); //미
			Beep(293,300); //레 
			Beep(261,300); //도
			Sleep(3000);
			system("cls");
			printf("☆☆☆☆☆☆☆ ☆☆☆☆☆☆☆ ☆           ☆ ☆☆☆☆☆☆☆");
			printf("\n");
			printf("☆             ☆          ☆ ☆☆       ☆☆ ☆            ");
			printf("\n");
			printf("☆☆☆☆☆☆☆ ☆☆☆☆☆☆☆ ☆ ☆     ☆ ☆ ☆☆☆☆☆☆☆");
			printf("\n");
			printf("☆          ☆ ☆          ☆ ☆  ☆   ☆  ☆ ☆            ");
			printf("\n");
			printf("☆☆☆☆☆☆☆ ☆          ☆ ☆     ☆    ☆ ☆☆☆☆☆☆☆");
			printf("\n");
			
			printf("\n");
			
			printf("☆☆☆☆☆☆☆ ☆          ☆ ☆☆☆☆☆☆☆ ☆☆☆☆☆         ☆☆");
			printf("\n");
			printf("☆          ☆  ☆        ☆  ☆             ☆        ☆   ☆  ☆");
			printf("\n");
			printf("☆          ☆   ☆      ☆   ☆☆☆☆☆☆☆ ☆          ☆     ☆");
			printf("\n");
			printf("☆          ☆    ☆    ☆    ☆             ☆☆☆☆☆☆☆ ☆  ☆");
			printf("\n");
			printf("☆☆☆☆☆☆☆     ☆☆☆     ☆☆☆☆☆☆☆ ☆          ☆     ☆☆");
			printf("\n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
			printf("점수는! [%d]점 입니당! 축하해요!",p);
			FILE *o = fopen("highscore.txt","w");
			if(high<p)
			{
				high = p;
			}
			fprintf(o,"%d",high); 
			fclose(o);
			printf("\n");
			printf("현재 최고점수는! [%d]점 입니당! 축하해요!",high);
			Sleep(3000);			
			return 0;
		}
		pos.X=x*2;
		pos.Y=y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		printf("●");
		
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
			printf("★");			
			p++;
			if(level>5)
			{
				level=level-5;
			}
			if(f==1)		//위쪽 
			{
				pos.X=x*2;
				pos.Y=y+1;
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
				printf("●");
				n[t]=x;
				m[t]=y+1;
				t++;
			}
			else if(f==2)	//오른쪽 
			{
				pos.X=x*2-2;
				pos.Y=y;
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
				printf("●");
				n[t]=x-1;
				m[t]=y;
				t++;
			}
			else if(f==3)	//아래 
			{
				pos.X=x*2;
				pos.Y=y-1;
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
				printf("●");
				n[t]=x;
				m[t]=y-1;
				t++;
			}
			else if(f==4)	//왼쪽 
			{
				pos.X=x*2+2;
				pos.Y=y;
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
				printf("●");
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
			printf("□");
		}
		else if(map[m[t-1]][n[t-1]]==1) 
		{
			pos.X=n[t-1]*2;//
			pos.Y=m[t-1];//
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
			printf("★");
		}for(i=t-2;i>=0;i--)  
		{  
			n[i+1]=n[i];
			m[i+1]=m[i];
		} 
		Sleep(level);
		pos.X=0;
		pos.Y=20;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		printf("점수는! [%d]점 입니당! 별을 우거우걱 먹어서 점수를 올려보아요!",p);
		pos.X=0;
		pos.Y=22;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos); 
		printf("속도는! [%d] 입니당! 별을 우거우걱 먹어서 속도를 올려보아요! 슝슝~",level);  
		if(x>19 || x<0 || y>19 || y<0)
		{
			Beep(329,300); //미 
			Beep(293,300); //레 
			Beep(261,300); //도
			Beep(293,300); //레	
			Beep(329,300); //미
			Beep(329,300); //미
			Beep(329,300); //미
			Beep(293,300); //레
			Beep(293,300); //레
			Beep(293,300); //레
			Beep(329,300); //미
			Beep(391,300); //솔 
			Beep(391,300); //솔 
			Beep(329,300); //미 
			Beep(293,300); //레 
			Beep(261,300); //도
			Beep(293,300); //레	
			Beep(329,300); //미
			Beep(329,300); //미
			Beep(329,300); //미
			Beep(293,300); //레
			Beep(293,300); //레
			Beep(329,300); //미
			Beep(293,300); //레 
			Beep(261,300); //도 
			Sleep(3000);
			system("cls");
			printf("☆☆☆☆☆☆☆ ☆☆☆☆☆☆☆ ☆           ☆ ☆☆☆☆☆☆☆");
			printf("\n");
			printf("☆             ☆          ☆ ☆☆       ☆☆ ☆            ");
			printf("\n");
			printf("☆☆☆☆☆☆☆ ☆☆☆☆☆☆☆ ☆ ☆     ☆ ☆ ☆☆☆☆☆☆☆");
			printf("\n");
			printf("☆          ☆ ☆          ☆ ☆  ☆   ☆  ☆ ☆            ");
			printf("\n");
			printf("☆☆☆☆☆☆☆ ☆          ☆ ☆     ☆    ☆ ☆☆☆☆☆☆☆");
			printf("\n");
			
			printf("\n");
			
			printf("☆☆☆☆☆☆☆ ☆          ☆ ☆☆☆☆☆☆☆ ☆☆☆☆☆         ☆☆");
			printf("\n");
			printf("☆          ☆  ☆        ☆  ☆             ☆        ☆   ☆  ☆");
			printf("\n");
			printf("☆          ☆   ☆      ☆   ☆☆☆☆☆☆☆ ☆          ☆     ☆");
			printf("\n");
			printf("☆          ☆    ☆    ☆    ☆             ☆☆☆☆☆☆☆ ☆  ☆");
			printf("\n");
			printf("☆☆☆☆☆☆☆     ☆☆☆     ☆☆☆☆☆☆☆ ☆          ☆     ☆☆");
			printf("\n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
			printf("점수는! [%d]점 입니당! 축하해요!",p);
			FILE *o = fopen("highscore.txt","w");
			if(high<p)
			{
				high = p;
			}
			fprintf(o,"%d",high); 
			fclose(o);
			printf("\n");
			printf("현재 최고점수는! [%d]점 입니당! 축하해요!",high);
			break;
		}
		
	}
	//rand()%(큰수-작은수+1)+작은수
	return 0;
} 
