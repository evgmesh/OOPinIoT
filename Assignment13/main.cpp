#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
//#include <crtdbg.h>

#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <ctime>
#include "Website.h"

void car_sales();
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
#if 0
void car_sales() {
	std::cout << "Car sales started" << std::endl;
	Website *wa = new Website("www.autos.com");
	Website *wb = new Website("www.bilar.com");
	Website *wc = new Website("www.cars.com");
	Dealer *a = new Dealer("Alan Aldis");
	Dealer *b = new Dealer("Bill Munny");
	{
		Dealer *c = new Dealer("Casey Ball");
		Car *ca = new Car;
		Car *cb = new Car;

		a->add_site(wa);
		a->add_site(wb);
		b->add_site(wb);
		b->add_site(wc);
		c->add_site(wa);
		c->add_site(wb);
		c->add_site(wc);

		a->buy();
		a->buy();
		a->buy();
		a->buy();

		b->buy();
		b->buy();
		b->buy();

		c->buy();
		c->buy();
		c->add(ca);
		c->add(cb);

		wa->print();
		wb->print();
		wc->print();

		std::cout << *a << *b << *c << std::endl;

		a->sell();

		std::cout << *a << *b << *c << std::endl;

		wa->print();
		wb->print();
		wc->print();
	}

	wa->print();
	wb->print();
	wc->print();


	std::cout << "Car sales ended" << std::endl;

}


#endif