#pragma once
#include <iostream>

//����������� ����� Point, ����������� ����� � ���������(��� ���������) ������������.
//������������� ����, �������� ���������� �� X � Y.������� ����������� �� ���������, 
//����������� � �����������, ������� � ������� ��� ���� �����, � ����� ������, 
//����������� ����������� �����(�������� - �����, ����, �����, ������) �� ��������� 
//���������� ������.

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

