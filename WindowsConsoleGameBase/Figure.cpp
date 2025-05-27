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
	for (const Point& point : m_Body[m_CurrentRotate])
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

void Figure::boost() {
	m_TimeForUpdate = 50;
}

void Figure::backup() {
	m_PositionBackup = m_Position;
	m_CurrentRotateBackup = m_CurrentRotate;
}

void Figure::restore() {
	m_Position = m_PositionBackup;
	m_CurrentRotate = m_CurrentRotateBackup;
}

void Figure::rotate() {
	if (m_CurrentRotate + 1 < 4) {
		m_CurrentRotate++;
	}
	else m_CurrentRotate = 0;
}