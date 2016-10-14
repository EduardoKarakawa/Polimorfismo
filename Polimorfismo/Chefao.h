#pragma once

#include "Mercenario.h"

class Chefao : public Mercenario {
	public:
		void Atacar() {
			std::cout << "bati forte pra caramba" << std::endl;
		}

		void Atacar(int dano) {
			std::cout	<< "Foram aplicados "
						<< dano << " de dano no jogador"
						<< std::endl;
		}
};