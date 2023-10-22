#include "Net.h"
#include <iostream>

class Neuron {};

typedef std::vector<Neuron> Layer;

Net::Net(const std::vector<unsigned> &topology){

	unsigned numLayers = topology.size();
	for(unsigned layerNum = 0; layerNum < numLayers; ++layerNum) {


		m_layers.push_back(Layer());

		// We have made a new Layer, now fill it ith neorons, and
		// add a bias neuron to the layerNum
		for(unsigned neuronNum = 0; neuronNum <= topology[layerNum]; ++neuronNum) {

			m_layers.back().push_back(Neuron());
			std::cout << "Made a Neuron!" << std::endl;
		}

	}

}

Net::~Net(){


}
