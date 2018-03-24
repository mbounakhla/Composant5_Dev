#include "Verificateur.h"
#include "Bloc.h"
#include "Hacheur.h"


Verificateur::Verificateur(void)
{

}
bool verify_transaction (TX tx){
	return verifier_hachage(, hacher(tx.));
}
bool verify_bloc (Bloc* b, std::string hash_bloc_precedant){
	//return (((b->previous_hash).compare(hash_bloc_precedant) != 0) && verify_transaction(b->tx1))
	//return false;
	return ((std::string(b->previous_hash).compare(hash_bloc_precedant)) && verify_transaction(b->tx1));
}
Verificateur::~Verificateur(void)
{

}
