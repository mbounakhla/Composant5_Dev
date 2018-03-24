#pragma once

#include<string>
#include "Bloc.h"
#include "Hacheur.h"
using namespace std;


class Verificateur
{
public:
	Verificateur(void);
	~Verificateur(void);


	bool verify_bloc (std::string bloc, std::string hash_bloc_precedent, int nb_zeros);
	bool verify_bloc (Bloc* b);

	bool verify_transaction (std::string ui);
	bool verify_transaction (TX tx);
};

