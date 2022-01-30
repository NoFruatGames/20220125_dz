#include "Printer.h"
Printer::Printer()
{

}
void Printer::addTask(Client client, std::string task)
{
	this->tasks.push_back(Task(client, task, time(NULL)));
	sortArray();
}
void Printer::sortArray()
{
	bool isSorted = false;
	for (int i = tasks.size() - 1; i >= 0; --i)
	{
		isSorted = true;
		for (int j = 0; j < i; ++j) {
			if (tasks[j].client.getPriority() > tasks[j + 1].client.getPriority())
			{
				std::swap(tasks[j], tasks[j + 1]);
				isSorted = false;
			}
		}
		if (isSorted)
			break;
	}

}
void Printer::showTasks()
{
	for (int i = 0; i < tasks.size(); ++i)
	{
		std::cout << tasks[i].client.getPriority() << " " << tasks[i].client.getFirst_Name() << " " << tasks[i].client.getSecond_Name() << " " << tasks[i].task << " " << tasks[i].time << '\n';
	}
}