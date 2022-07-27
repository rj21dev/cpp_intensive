#ifndef SAMPLE_HPP
# define SAMPLE_HPP

class Sample {
	
	int	val;
	
public:

	Sample(int val);
	~Sample();

	int	getVal(void) const;
	int	compare(Sample *that) const;
};

#endif
