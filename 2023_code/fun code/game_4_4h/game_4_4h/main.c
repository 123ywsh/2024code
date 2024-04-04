#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<windows.h>
#include<time.h>
int i, j, k, a, b, c, d = 0, x = 15, y = 4, m = 1;
char ch, n[21][16] = {
			"###############",
			"#             #",
			"#             #",
			"#             #",
			"#             #",
			"#             #",
			"#             #",
			"#             #",
			"#             #",
			"#             #",
			"#             #",
			"#             #",
			"#             #",
			"#             #",
			"#             #",
			"#             #",
			"#             #",
			"#             #",
			"#             #",
			"###############"
};

void line(int z)
{
	for (i = 0; i < z; i++)
		printf("\n");
}
void space(int z)
{
	for (j = 0; j < z; j++)
		printf("\t");
}
void head()
{
	space(1);
	printf("不可能完成的任务--飞行游戏  你需要通过‘a’，‘d’两个键来控制战机不被敌方飞机坠毁\n");
	space(4);
	printf("你已躲过敌军%d战机的进攻\n", d);
	for (i = 0; i < 80; i++)
		printf("_");
	printf("\n");
}
void shape1()
{
	n[x][y] = '*';
	n[x - 1][y] = '*';
	n[x][y - 1] = '*';
	n[x][y + 1] = '*';
	n[x + 1][y] = '*';
	n[x + 2][y - 1] = '*';
	n[x + 2][y + 1] = '*';
}
void shape2()
{
	n[x][y] = ' ';
	n[x - 1][y] = ' ';
	n[x][y - 1] = ' ';
	n[x][y + 1] = ' ';
	n[x + 1][y] = ' ';
	n[x + 2][y - 1] = ' ';
	n[x + 2][y + 1] = ' ';
}
void shape3()
{
	n[a][b] = '*';
	n[a + 1][b] = '*';
	n[a][b - 1] = '*';
	n[a][b + 1] = '*';
	n[a - 1][b] = '*';
	n[a - 2][b - 1] = '*';
	n[a - 2][b + 1] = '*';
}
void shape4()
{
	n[a][b] = ' ';
	n[a + 1][b] = ' ';
	n[a][b - 1] = ' ';
	n[a][b + 1] = ' ';
	n[a - 1][b] = ' ';
	n[a - 2][b - 1] = ' ';
	n[a - 2][b + 1] = ' ';
}
void trawmap()
{
	for (i = 0; i < 21; i++)
	{
		space(4);
		puts(n[i]);
	}
}
void move()
{
	if (kbhit() != 0)
	{
		ch = getch();
		if (ch == 'd' && n[x][y + 4] != '#')
		{
			for (k = 0; k < 6; k++)
			{
				shape2();
				y++;
				shape1();
				system("cls");
				head();
				trawmap();

			}
		}
		if (ch == 'a' && n[x][y - 4] != '#')
		{
			for (k = 0; k < 6; k++)
			{
				shape2();
				y--;
				shape1();
				system("cls");
				head();
				trawmap();
			}
		}
	}
}
void seat(int c, int x)
{
	if (c == 0)a = x, b = 4;
	if (c == 1)a = x, b = 10;
}
int main()
{
	time_t t = time(NULL);
	srand(t);
	line(5);
	space(3);
	printf("请将输入法调成英文状态！！！");
	Sleep(3000);
	system("cls");
	line(5);
	space(3);
	printf("世界末日即将来临，外星人已经做好了攻打地球的准备了\n");
	Sleep(1000);
	space(3);
	printf("地球上最厉害的勇士，准备坐战机攻打敌人老巢\n");
	Sleep(1000);
	space(3);
	printf("然而在太空有许多的敌人，需要绕过他们才能到达敌军基地\n");
	Sleep(1000);
	space(3);
	printf("去吧！勇士，现在是时候来拯救地球啦！！！！！！！！！！\n");
	Sleep(1000);
	system("cls");

	seat(rand() % 2, 3);
	shape1();
	while (d <= 50)
	{
		head();
		trawmap();
		move();
		if (m == 3 && d <= 30)
			seat(rand() % 2, 3);
		if (m == 3 && d > 30 && d <= 40)
			seat(rand() % 2, 7);
		if (m == 3 && d > 50)
			seat(rand() % 2, 8);
		m = 1;
		shape4();
		a++;
		shape3();
		if (a == x - 2 && b == y)
		{
			m = 2;
			break;
		}
		if (n[a + 2][b] == '#')
		{
			shape4();
			m = 3;
			d++;
		}
		if (d <= 10)Sleep(50);
		else if (d < 20)Sleep(25);
		else;
		system("cls");
	}
	if (m == 2)
		printf("你方战斗机已被摧毁！！！\n");
	else
		printf("你已成功躲过敌军五十架战斗机的进攻！\n好样的你拯救了地球\n");
	while (1);
	return 0;
}

