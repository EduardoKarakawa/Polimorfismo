#include "Mercenario.h"
#include "Chefao.h"
#include "FormaGeometrica.h"

#include <iostream>
#include <time.h>

void DesenharTodos(Mercenario* m[]) {
	for (int i = 0; i < 3; i++){
		m[i]->Atacar();
	}
	
}


int main() {
	srand(time(NULL));
	Mercenario* mercenarios[3];

	for (int i = 0; i < 3; i++){
		mercenarios[i] = rand() % 2 == 0 ? new Mercenario() : new Chefao();
	}

	//FormaGeometrica* fg = new FormaGeometrica();  nao funciona pq tem um metodo abstrato

	DesenharTodos(mercenarios);
	system("pause");
	return 0;
}