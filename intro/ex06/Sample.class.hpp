#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
public:

	int	publicfoo;

	Sample(void);
	~Sample(void);

	void	publicbar(void) const;

private:

	int	_privatefoo;

	void	_privatebar(void) const;

};


#endif
