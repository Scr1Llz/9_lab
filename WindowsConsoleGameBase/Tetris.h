#pragma once
#include "Engine.h"
#include "GameField.h"
#include "Figure.h"
#include "IBlock.h"

class Tetris : public Engine {
private:
	GameField m_GameField;
	const size_t m_Width = 14;
	const size_t m_Height = 26;
	Figure* m_Figure;
	bool m_End = false;
protected:
	bool end() const override {
		return m_End;
	}
	void on_button_press(const int button) override;
	void update(const int dt) override;
	void render(PaintDevice& paintDevice) override;
public:
	Tetris();
};

