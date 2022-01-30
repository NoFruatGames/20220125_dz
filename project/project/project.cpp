#include <iostream>
#include "Client.h"
#include "Printer.h"
int main()
{
	Client c1(5, "FirstN", "SecondN");
	Client c2(1, "FirstN2", "SecondN2");
	Printer p;
	p.addTask(c1, "Task1");
	p.addTask(c2, "Task2");
	p.showTasks();
	std::cout << "\n";
	p.addTask(c1, "Task3");
	p.addTask(c2, "Task4");
	p.showTasks();
}