#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}
TargetGenerator::~TargetGenerator() {
	std::vector<ATarget*>::iterator ite = types.end();
	for (std::vector<ATarget*>::iterator it = types.begin(); it != ite; ++it)
		delete *it;;
	types.clear();
}

void TargetGenerator::learnTargetType(ATarget* target) {
	if (target) {
		std::vector<ATarget*>::iterator ite = types.end();
		for (std::vector<ATarget*>::iterator it = types.begin(); it != ite; ++it)
			if ((*it)->getType() == target->getType())
				return;
		types.push_back(target->clone());
	}	
}

void TargetGenerator::forgetTargetType(std::string const & targetName) {
	std::vector<ATarget*>::iterator ite = types.end();
	for (std::vector<ATarget*>::iterator it = types.begin(); it != ite; ++it)
		if ((*it)->getType() == targetName) {
			delete *it;
			it = types.erase(it);
		}
}

ATarget*	TargetGenerator::createTarget(std::string const & targetName) {
	std::vector<ATarget*>::iterator ite = types.end();
	for (std::vector<ATarget*>::iterator it = types.begin(); it != ite; ++it)
		if ((*it)->getType() == targetName)
			return *it;
	return 0;
}