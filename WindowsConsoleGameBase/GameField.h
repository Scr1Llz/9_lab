#pragma once
#include "PaintDevice.h"
#include <vector>

class GameField {
	size_t m_Width;
	size_t m_Height;
public:
	void resize(size_t width, size_t height) {
		m_Width = width;
		m_Height = height;
	}
	void render(PaintDevice& paintDevice);
};

