#pragma once


class FormaGeometrica {
	protected:
		int m_x, m_y;

	public:
		virtual void Desenhar() = 0; //Esse metodo sera sobreescrito pela classe filha

};