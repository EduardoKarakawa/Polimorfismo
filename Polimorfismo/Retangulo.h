#pragma once
#include "FormaGeometrica.h"

#include <iostream>

class Retangulo : public FormaGeometrica {
	public:
		Retangulo(int x, int y) {
			m_x = x;
			m_y = y;
		}
		void Desenhar() {
			std::cout << "Eae, eu sou um retangulo " << m_x << " - " << m_y << std::endl;
		}

};
