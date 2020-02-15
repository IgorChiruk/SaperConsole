#include "stdafx.h"
#include "Field.h"

Field::Field(void)
{
	x = 0;
	y = 0;	
	numberOfMinesArround = 0;
	isMine = false;
	open = false;
}

int Field::GetX(void) const
{
	return x;
}

int Field::GetY(void) const
{
	return y;
}

bool Field::IsMine()
{
	return isMine;
}

void Field::SetMine()
{
	isMine = true;
}

bool Field::isOpened() 
{
	return open;
}


int Field::GetNOM() 
{
	return numberOfMinesArround;
}

void Field::setNOM()
{
	numberOfMinesArround++;
}

void Field::openField() 
{
	open = true;
}

void Field::setNumber(int a)
{
	numberOfMinesArround = a;
}

bool Field::isEmpty() 
{
	return ((numberOfMinesArround == 0) && (!isMine));
}

void Field::SetPosition(const int _x, const int _y)
{
	x = _x;
	y = _y;
}


Field::~Field(void)
{
}
