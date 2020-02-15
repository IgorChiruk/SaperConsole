// ConsoleApplication10.cpp: главный файл проекта.

#include "stdafx.h"
#include "App.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	Application app;
	app.Init();
	app.DrawClozed();
	getchar();
    return 0;
}
