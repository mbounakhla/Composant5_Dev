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


	bool verify_bloc (Bloc* b);
	bool verify_transaction (TX tx);
};

