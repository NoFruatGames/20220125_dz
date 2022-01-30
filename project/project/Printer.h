#pragma once
#include "Client.h"
#include <vector>
#include <string>
#include <time.h>
#include <algorithm>
#include <iostream>
struct Task
{
	Client client;
	std::string task;
	unsigned long long time;
	Task(Client client, std::string task, unsigned long long time)
	{
		this->client = client;
		this->task = task;
		this->time = time;
	}
};
class Printer
{
private:
	std::vector<Task> tasks;
public:
	Printer();
	void addTask(Client client, std::string task);
	void removeTask(std::string task);
	void showTasks();
private:
	void sortArray();
};

