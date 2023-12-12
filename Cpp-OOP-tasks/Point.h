#pragma once
#include <iostream>

//Реализовать класс Point, описывающий точку в двумерном(или трёхмерном) пространстве.
//Предусмотреть поля, хранящие координаты по X и Y.Сделать конструктор по умолчанию, 
//конструктор с параметрами, геттеры и сеттеры для всех полей, а также методы, 
//позволяющие переместить точку(например - вверх, вниз, влево, вправо) на указанное 
//количество единиц.

class Point
{
public:
	Point();
	Point(int x, int y, int z);

	void setX(int x);
	void setY(int y);
	void setZ(int z);

	int getX();
	int getY();
	int getZ();

	void moveUp(int value);
	void moveDown(int value);
	void moveLeft(int value);
	void moveRight(int value);

	void print();
private:
	int x;
	int y;
	int z;
};

