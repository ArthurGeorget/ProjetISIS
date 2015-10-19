#include "WavDecoder.h"
#include <iostream>

using namespace std;

WavDecoder::WavDecoder():AudioDecoder() // Définition du constructeur de WavDecoder héritant du constructeur AudioDecoder
{

}
WavDecoder::~WavDecoder():~AudioDecoder()
{

}
void WavDecoder::decode(char* data)
{
		cout << data;
}