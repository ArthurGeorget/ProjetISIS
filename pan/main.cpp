using namespace std;

#include <iostream>
#include <fstream>
#include "WavDecoder.h"
#include <string>
//#include "DcPDecoder.h"
//#include "HeAacEncoder.h"


int main()
{
	WavDecoder wavD1; 	// Construction du décodeur wav dans le main wavD1

	string const urlFichier = "temp/test1.txt";  //String contenant l'adresse du fichier à lire
	ifstream monFlux(urlFichier.c_str()); //Ouverture du flux monFlux, Via l'url du fichier.
										 //c_str() pointe vers la valeur de urlFichier.
										//Le fichier est ouvert et son flux est stocké dans monFlux
	char data[1000]= {};
	monFlux.readsome(data, 400);
	//cout << data;
	wavD1.decode(data);
	return 0;
}