#pragma once
#include <iostream>


class Mercenario {

	public:
		virtual void Atacar(){						//virtual faz com que o metodo da class pai seja substituido pelo da filha para
			std::cout << "bati fraco" << std::endl;	//quando uma classe filha for coloca em um ponteiro do tipo pai.
		}

};