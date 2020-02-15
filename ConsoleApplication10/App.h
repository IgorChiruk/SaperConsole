#include "stdafx.h"
#include "Field.h"

class Application
{
private:
	Field fields[10][10];

	int mines = 20;
public:

	Application(void);
	void Init();
	bool open(int x, int y);
	void Draw();
	~Application(void);
};