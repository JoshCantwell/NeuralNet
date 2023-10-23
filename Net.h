#ifndef Net_h
#define Net_h

#include <vector>
#include "Neuron.h"

typedef std::vector<Neuron> Layer;

class Net{

public:


	Net(const std::vector <unsigned> &topology);

	void feedForward(const std::vector <double> &inputVals) {};
	void backProp(const std::vector <double> &targetVals) {};
	void getResults(std::vector <double> &resultVals) const {};

	~Net();


	std::vector<Layer> m_layers; // m layers [layerNum][neuronNum]
private:


};


#endif /* Net_h*/
