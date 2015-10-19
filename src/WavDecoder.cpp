#include "WavDecoder.hpp"
#include <iostream>

WavDecoder::WavDecoder()
	: AudioDecoder()
{
}

WavDecoder::~WavDecoder()
{
}

void WavDecoder::decode(DataFrame& data)
{
	data.size = 50;
}
