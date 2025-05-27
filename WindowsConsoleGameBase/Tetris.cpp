#include "Tetris.h"

void Tetris::update(const int dt) {
	m_Figure->update(dt);
}

void Tetris::render(PaintDevice& paintDevice) {
	m_GameField.render(paintDevice);
	m_Figure->render(paintDevice);
}

Tetris::Tetris() {
	paint_device().resize(Size(m_Width + 6, m_Height));
	m_GameField.resize(m_Width, m_Height);
	m_Figure = new IBlock(Point(5, 1));
}
