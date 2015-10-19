#ifndef _AUDIO_TRANSFORM_AUDIO_DECODER_HPP_
#define _AUDIO_TRANSFORM_AUDIO_DECODER_HPP_

#include "DataFrame.hpp"

class AudioDecoder
{
public:
	AudioDecoder();
	~AudioDecoder();

	virtual void decode(DataFrame& data)=0;
};

#endif
