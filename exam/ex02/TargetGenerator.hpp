#include "ATarget.hpp"
#include <vector>

class TargetGenerator {
private:
	std::vector<ATarget*>	types;
	TargetGenerator(TargetGenerator const & src);
	TargetGenerator& operator=(TargetGenerator const & assignn);
public:
	TargetGenerator();
	~TargetGenerator();
	void		learnTargetType(ATarget* target);
	void		forgetTargetType(std::string const & targetName);
	ATarget*	createTarget(std::string const & targetName);
};