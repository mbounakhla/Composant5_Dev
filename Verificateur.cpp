#include "Verificateur.h"
#include "Bloc.h"
#include "Hacheur.h"
#include "Signature.h"


Verificateur::Verificateur(void)
{

}

std::string chars_to_string(unsigned char* source){
	return std::string res(source, source + 64);
}

bool verify_transaction_input (TXI* txi){
	Bloc* b_input = &(findByIndex(std::to_string(txi->nBloc)));
	//Bloc* b_input;

	return (validateSignature(chars_to_string(b_input->tx1.UTXOs[0].hash), chars_to_string(b_input->tx1.UTXOs[0].dest), 
		chars_to_string(txi->signature));
}
bool verify_transaction (TX* tx){
	std::vector<TXI> v = tx->TXIs;
	for(std::size_t i=0; i<v.size(); ++i){
    	if (!verify_transaction_input(&v[i]))
    		return false; 
	}
	return true;
}
bool verify_bloc (Bloc* b, std::string hash_bloc_precedant){
	//return (((b->previous_hash).compare(hash_bloc_precedant) != 0) && verify_transaction(b->tx1))
	//return false;
	return ((chars_to_string(b->previous_hash).compare(hash_bloc_precedant)) && verify_transaction(&(b->tx1)));
}


Verificateur::~Verificateur(void)
{

}
