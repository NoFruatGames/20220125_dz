#include "Client.h"
Client::Client()
{
	priority = 0;
	first_name = "";
	second_name = "";
}
Client::Client(int priority, std::string first_name, std::string second_name)
{
	this->priority = priority;
	this->first_name = first_name;
	this->second_name = second_name;
}
int Client::getPriority()
{
	return priority;
}
std::string Client::getFirst_Name()
{
	return first_name;
}
std::string Client::getSecond_Name()
{
	return second_name;
}
void Client::setPriority(int priority)
{
	this->priority = priority;
}
void Client::setFirst_Name(std::string first_name)
{
	this->first_name = first_name;
}
void Client::setSecond_Name(std::string second_name)
{
	this->second_name = second_name;
}