#ifndef _AUDIO_TRANSFORM_WAV_DECODER_HPP_
#define _AUDIO_TRANSFORM_WAV_DECODER_HPP_

#include "AudioDecoder.hpp"

class WavDecoder : public AudioDecoder
{
public:
	WavDecoder();
	~WavDecoder();

	void decode(DataFrame& data);
};

#endif
