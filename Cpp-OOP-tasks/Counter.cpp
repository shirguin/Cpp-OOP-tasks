#include "Counter.h"

//Конструкторы
Counter::Counter()
{
	this->_current = 0;
	this->_max = 99999;
	this->_min = 0;
	this->_step = 1;
}

Counter::Counter(int max)
{
	this->_current = 0;
	this->_max = max;
	this->_min = 0;
	this->_step = 1;
}

Counter::Counter(int max, int current)
{
	this->_current = current;
	this->_max = max;
	this->_min = 0;
	this->_step = 1;
}

Counter::Counter(int max, int current, int step)
{
	this->_current = current;
	this->_max = max;
	this->_min = 0;
	this->_step = step;
}

void Counter::increaseByOneStep()
{
	this->_current += this->_step;
	this->checkForMaxValue();
}

int Counter::getCurrentValue()
{
	return this->_current;
}

void Counter::resetCounter()
{
	this->_current = this->_min;
}

void Counter::setStep(int value)
{
	this->_step = value;
}

void Counter::setMin(int value)
{
	this->_min = value;
}

void Counter::setMax(int value)
{
	this->_max = value;
}

void Counter::checkForMaxValue()
{
	if (this->_current > this->_max)
	{
		this->_current = this->_min;
	}
}
