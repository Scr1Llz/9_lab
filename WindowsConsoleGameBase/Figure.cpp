#include "Figure.h"

Figure::Figure(Point position) {
	m_Position = position;
}

void Figure::update(double dt) {
	m_TimeFromLastUpdatec += dt;
	if (m_TimeFromLastUpdatec > m_TimeForUpdate) {
		m_TimeFromLastUpdatec = 0;
		++m_Position.y;
	}
}

void Figure::render(PaintDevice& paintDevice) {
	for (const Point& point : m_Body)
	{
		Vector2 v(point.x + m_Position.x,
			point.y + m_Position.y);
		paintDevice.set_char(v, 0x25D8);
	}
}

void Figure::move_right() {
	m_Position.x++;
}

void Figure::move_left() {
	m_Position.x--;
}
