#ifndef Neuron_h
#define Neuron_h

#include <vector>

class Neuron{



public:

	Neuron();
	~Neuron();

private:

	double m_outputVal;
	std::vector <double> m_outputWeights;
};


#endif /* Neuron_h*/
