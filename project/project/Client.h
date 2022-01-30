#pragma once
#include <string>
class Client
{
private:
	int priority;
	std::string first_name;
	std::string second_name;
public:
	Client();
	Client(int priority, std::string first_name, std::string second_name);
	int getPriority();
	std::string getFirst_Name();
	std::string getSecond_Name();
	void setPriority(int priority);
	void setFirst_Name(std::string first_name);
	void setSecond_Name(std::string second_name);
};

