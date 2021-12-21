#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>

#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <ctime>


class Dealer;

class Car {
    friend std::ostream& operator<<(std::ostream& out, const Car& car);
public:
    Car(const char* m = "Ford", const char* l = nullptr, int ml = 0, Dealer* d = nullptr) : dealer(d), model(m),
                                                                                            license(l ? l : (rand() % 2 ? "FOO-" : "BAR-") + std::to_string(rand() % 999 + 1)), mileage(ml ? ml : rand() % 10000) {}
    ~Car() { dealer = nullptr;    std::cout << model << " " << license << " deleted" << std::endl; };
    void Read();
    std::string GetLicense() const { return license; }
    void setDealer(Dealer* d) { dealer = d; }
private:
    std::string model;
    std::string license;
    int mileage;
    // Extra 1:
    Dealer* dealer;
};

void Car::Read()
{
#if 0
    std::cout << "Enter car information. Model: ";  std::cin >> model;
    std::cout << "License: ";                       std::cin >> license;
    std::cout << "Mileage: " ;                      std::cin >> mileage;

#endif
#if 1
    // For test purpose only
    model = "Seat";
    license = (rand() % 2 ? "ZAP-" : "ZIP-") + std::to_string(rand() % 999 + 1);
    mileage = 10000 + rand() % 10000;
#endif
}

#if 0
// Moved to after Dealer class because of error: member access into incomplete type 'Dealer' even with forward declaration.
std::ostream& operator<<(std::ostream& out, const Car& car)
{
    std::cout << "Model: " << car.model << std::endl << "License: " << car.license << std::endl << "Mileage: " << car.mileage << std::endl;
    car.dealer == nullptr ? std::cout << "No dealer" : std::cout << "Dealer: " << car.dealer->get_name();

    return out;
}
#endif
/* ---------------------- */

class Website {
public:
    Website(const char* n = nullptr) : name(n ? n : "www.cars" + std::to_string(rand() % 99 + 1) + ".com") {}
    ~Website() { std::cout << name << " deleted" << std::endl; };
    void advertise(std::shared_ptr<Car> car) { listing.push_back(car); }
    void print(std::ostream& out = std::cout);
private:
    std::vector<std::weak_ptr<Car>> listing;
    std::string name;
};

void Website::print(std::ostream& out) {
    out << name << std::endl;
    for (int i = 0; i < listing.size(); ++i){
        std::shared_ptr<Car> car = listing[i].lock();
        if(car == nullptr) {
            listing.erase(listing.begin() + i);
            --i;
        }
        else
            out << *car;
    }
    out << name << " end of list" << std::endl;
}

class Dealer {
    friend std::ostream& operator<<(std::ostream& out, const Dealer& dealer);
public:
    Dealer(const char* name_ = "John Doe") : name(name_) {};
    ~Dealer() { std::cout << name << " deleted" << std::endl; };
    void buy();
    void sell();
    void add(std::shared_ptr<Car>car);
    void add_site(std::shared_ptr<Website>w) { sites.push_back(w); }
    std::string get_name() const { return name; }
private:
    std::string name;
    std::vector<std::shared_ptr<Car>> cars;
    std::vector<std::shared_ptr<Website>> sites;
};


void Dealer::add(std::shared_ptr<Car>car) {
    car->setDealer(this);
    cars.push_back(car);
    for (auto site : sites)
        site->advertise(car);
}
void Dealer::buy()
{
    std::shared_ptr<Car> car = std::make_shared<Car>();
    car->Read();
    add(car);
}

void Dealer::sell()
{
    std::cout << *this; // print my list of cars
    std::cout << "Enter license of car you want to buy" << std::endl;

    std::string license;
    std::cin >> license;
    auto ci = std::find_if(cars.begin(), cars.end(), [&license](std::shared_ptr<Car> c) {
        return license == c->GetLicense(); });
    if (ci != cars.end())
        cars.erase(ci);
}

std::ostream& operator<<(std::ostream& out, const Dealer& dealer)
{
    std::cout << dealer.name << "'s cars for sale" << std::endl;
    for (auto car : dealer.cars) std::cout << *car;
    std::cout << "End of " << dealer.name << "'s cars listing" << std::endl;

    return out;
}

/* ---------------------- */

// Overloaded operator of Car class placed in here due to error: member access into incomplete type 'Dealer'
std::ostream& operator<<(std::ostream& out, const Car& car)
{
    std::cout << "Model: " << car.model << std::endl << "License: " << car.license << std::endl << "Mileage: " << car.mileage << std::endl ;
    car.dealer == nullptr ? std::cout << "No dealer: " : std::cout << "Dealer: " << car.dealer->get_name()
                                                                   << "\n__________________________________"<< std::endl ;

    return out;
}


void car_sales()
{
    std::cout << "Car sales started" << std::endl;
    std::shared_ptr<Website> wa = std::make_shared<Website>("www.autos.com");
    std::shared_ptr<Website> wb = std::make_shared<Website>("www.bilar.com");
    std::shared_ptr<Website> wc = std::make_shared<Website>("www.cars.com");
    std::shared_ptr <Dealer> a = std::make_shared <Dealer>("Alan Aldis");

    std::shared_ptr <Dealer> b = std::make_shared <Dealer>("Bill Munny");
    {
        std::shared_ptr <Dealer> c = std::make_shared <Dealer>("Casey Ball");
        std::shared_ptr <Car> ca = std::make_shared <Car>();
        std::shared_ptr <Car> cb = std::make_shared <Car>();

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

int main(int argc, char** argv) {


    srand(time(nullptr));

    car_sales();


    return 0;
}


