#include <iostream>

class Vector 
{
public:
	float x, y;
};

class Point 
{
public:
	Point AddVector(Vector v);

	float x, y;
};

Vector operator-(Point a, Point b) 
{
	Vector v;
	v.x = a.x - b.x;
	v.y = a.y - b.y;
	return v;
}

Point Point::AddVector(Vector v) 
{
	Point p2;
	p2.x = x + v.x;
	p2.y = y + v.y;
	return p2;
}

int main(int argc, char** args) {
	Point p;
	p.x = 0;
	p.y = -1;

	Point i;
	i.x = 1;
	i.y = 1;

	Vector v;

	v = p - i;

	Point p2 = p.AddVector(v);

	std::cout << "Pacman's location: (" << p.x << ", " << p.y << ")\n";
	std::cout << "Inky's location: (" << i.x << ", " << i.y << ")\n";
	std::cout << "Vector for inky to move to pacman: (" << v.x << ", " << v.y << ")\n";

	return 0;
}