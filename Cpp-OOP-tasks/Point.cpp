#include "Point.h"

Point::Point()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

Point::Point(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

//Сеттеры
void Point::setX(int x)
{
	this->x = x;
}

void Point::setY(int y)
{
	this->y = y;
}

void Point::setZ(int z)
{
	this->z = z;
}

//Геттеры
int Point::getX()
{
	return this->x;
}

int Point::getY()
{
	return this->y;
}

int Point::getZ()
{
	return this->z;
}

//Методы перемещения точки
void Point::moveUp(int value)
{
	this->y += value;
}

void Point::moveDown(int value)
{
	this->y -= value;
}

void Point::moveLeft(int value)
{
	this->x -= value;
}

void Point::moveRight(int value)
{
	this->x += value;
}

//Вывод на печать
void Point::print()
{
	std::cout << "X = " << this->x << " Y = " << this->y << " Z = " << this->z << std::endl;
}
