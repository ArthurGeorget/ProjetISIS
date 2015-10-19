#ifndef AUDIODECODER_H_INCLUDED    // Empeche le compilateur d'inclure plusieurs fois le fichier
#define AUDIODECODER_H_INCLUDED


// Ne pas mettre de namespace std dans un header sinon ça fout le brain

class AudioDecoder
{
	public:
			AudioDecoder(){};
			~AudioDecoder(){};
			char* data;
		//	struct DataFrame
		//	{
		//		char* data;
				//size_t size;
		//	};
	//		virtual void decode(DataFrame& data)=0; // Fonction virtuelle, supplantée par la fonction des objets enfants
			
};

#endif // AUDIODECODER_H_INCLUDED