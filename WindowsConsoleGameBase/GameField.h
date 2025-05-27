#pragma once
#include "PaintDevice.h"
#include "Figure.h"
#include <vector>

using namespace std;

class GameField {
private:
	vector<vector<wchar_t>> m_Field;
	size_t m_Width;
	size_t m_Height;
public:
	void resize(size_t width, size_t height);
	void render(PaintDevice& paintDevice);
	bool has_collision(const Figure& figure);
};

