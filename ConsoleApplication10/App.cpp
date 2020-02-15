#include "stdafx.h"
#include "App.h"

Application::Application(void)
{

}

void Application::Init()
{
	srand(time(NULL));
	int x, y;

	x = (int)0 + rand() % 9;
	y = (int)0 + rand() % 9;

	for (int i = 0; i < mines; i++)
	{
		while (fields[x][y].IsMine())
		{
			x = (int)0 + rand() % 9;
			y = (int)0 + rand() % 9;
		}
		fields[x][y].SetMine();
	}

	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
		{
			if (fields[i][j].IsMine())
			{
				if (((i - 1) >= 0) && ((j - 1) >= 0))
					fields[i - 1][j - 1].setNOM();
				if ((i - 1) >= 0)
					fields[i - 1][j].setNOM();
				if (((i + 1) <= 9) && ((j - 1) >= 0))
					fields[i + 1][j - 1].setNOM();
				if ((j - 1) >= 0)
					fields[i][j - 1].setNOM();
				if ((i + 1) <= 9)
					fields[i + 1][j].setNOM();
				if (((i - 1) >= 0) && ((j + 1) <= 9))
					fields[i - 1][j + 1].setNOM();
				if ((j + 1) <= 9)
					fields[i][j + 1].setNOM();
				if (((i + 1) <= 9) && ((j + 1) <= 9))
					fields[i + 1][j + 1].setNOM();

			}

		}

	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
		{
			if (fields[i][j].IsMine())
				fields[i][j].setNumber(0);
		}

	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
		{
			fields[i][j].SetPosition(i * 25, j * 25);
		}
}

bool Application::open(int x, int y) 
{
	if (fields[x][y].IsMine())
		return false;
	else if (fields[x][y].isEmpty) 
	{

	}
	else { fields[x][y].openField(); }
	Draw();
}

void Application::Draw()
{
	printf("  0 1 2 3 4 5 6 7 8 9\n");
	for (int i = 0; i < 10; i++) 
	{
		printf("%d ", i);
		for (int j = 0; j < 10; j++)
		{
			if(!fields[i][j].isOpened())
			printf("Z ");
			else if(fields[i][j].isOpened())
				printf("%d ",fields[i][j].GetNOM());
		}
		printf("\n");
	}
}

Application::~Application(void)
{
}