#include "../inc/AMateria.hpp"
#include "../inc/Character.hpp"
#include "../inc/MateriaSource.hpp"
#include "../inc/Cure.hpp"
#include "../inc/Ice.hpp"
#include <iomanip>

static void	log_separator(void) {

	std::cout << std:: endl << std::setw(83) << std::setfill('*') << "*\n" << std::endl;
}

int	main()
{
	log_separator();
	
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	log_separator();

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	log_separator();
	
	ICharacter* bob = new Character("bob");

	log_separator();

	me->use(0, *bob);
	me->use(1, *bob);

	log_separator();

	delete bob;
	log_separator();
	delete me;
	log_separator();
	delete src;

	return 0;
}