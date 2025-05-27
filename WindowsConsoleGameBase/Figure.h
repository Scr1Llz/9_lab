#pragma once
#include "PaintDevice.h"
#include <vector>

using namespace std;

struct Point
{
	int x;
	int y;
	Point() : x(0), y(0) {};
	Point(int x_pos, int y_pos) {
		x = x_pos;
		y = y_pos;
	}
};


class Figure {
protected:
	Point m_Position;
	double m_TimeFromLastUpdatec = 0;
	double m_TimeForUpdate = 500;
	vector<Point> m_Body;
public:
	Figure(Point position);
	void update(double dt);
	void render(PaintDevice& paintDevice);
	void move_right();
	void move_left();
	const vector<Point>& get_body() const {
		return m_Body;
	};
	Point get_position() const {
		return m_Position;
	};
	void set_position(Point position) {
		m_Position = position;
	}

};

