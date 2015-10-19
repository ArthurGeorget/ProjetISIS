#ifndef WAVDECODER_H_INCLUDED    // Empeche le compilateur d'inclure plusieurs fois le fichier
#define WAVDECODER_H_INCLUDED

#include "AudioDecoder.h"

class WavDecoder : public AudioDecoder
{
	public:
			WavDecoder(){};
			~WavDecoder(){};
			void decode(char* data){};
};

#endif // WAVDECODER_H_INCLUDED