
#include <WavDecoder.hpp>
#include <DataFrame.hpp>

#include <iostream>
#include <fstream>
#include <string>

int main()
{
	WavDecoder wavDecoder;

	AudioDecoder& decoder = wavDecoder;

	DataFrame data;

	decoder.decode( data );

	std::cout << "decode " << data.size << std::endl;

	return 0;
}
