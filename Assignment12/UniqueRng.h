/* Evgenii Meshcheriakov. Assignment 12 */

#ifndef ASSIGNMENT12_UNIQUERNG_H
#define ASSIGNMENT12_UNIQUERNG_H


class UniqueRng {
public:
    UniqueRng(unsigned int min, unsigned int max);
    int operator()();
private:
};


#endif //ASSIGNMENT12_UNIQUERNG_H
