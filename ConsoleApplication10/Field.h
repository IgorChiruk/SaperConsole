#pragma once
#include "stdafx.h"

class Field
{
private:

	int x;
	int y;
	int numberOfMinesArround;
	bool isMine;
	bool open;
	
public:
	Field(void);
	int GetX(void) const;
	int GetY(void) const;
	bool IsMine();
	void SetMine();
	bool isOpened();
	int GetNOM();
	void setNOM();
	void openField();
	void setNumber(int a);
	bool isEmpty();
	void SetPosition(const int _x, const int _y);
	~Field(void);
};