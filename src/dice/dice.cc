#include "dice.h"

#include <iostream>
#include <random>
#include <algorithm>
#include <vector>

namespace dice {

Dice::Dice(int sides) : sides_(sides), seed_(2), rng_(seed_), dist_(1, sides) {}

Dice::Dice(int sides, int seed) : sides_(sides), seed_(seed), rng_(seed_), dist_(1, sides) {}

int Dice::Sides() {
    return sides_;
}

int Dice::Seed() {
    return seed_;
}

int Dice::Roll() {
    int roll = dist_(rng_);
    rolls_.push_back(roll);
    rolls_copy_.push_back(roll);
    return roll;
}

int Dice::RollCount() {
    return rolls_.size();
}

int Dice::GetRoll(const int index) {
    return rolls_[index];
}

double Dice::AverageRoll() {
    return 1.0 * std::accumulate(rolls_.begin(), rolls_.end(), 0) / rolls_.size();
}

double Dice::MedianRoll() {
    std::vector<int>::iterator m_iterator = rolls_copy_.begin() + rolls_copy_.size()/2; 
    int m_index = std::distance(rolls_copy_.begin(), m_iterator); 
    std::nth_element(rolls_copy_.begin(), m_iterator, rolls_copy_.end());
    if(rolls_copy_.size() % 2 == 0){
        std::nth_element(rolls_copy_.begin(), m_iterator + 1, rolls_copy_.end());
        return (double)((rolls_copy_[m_index] + rolls_copy_[m_index + 1]) / 2);
    }    
    return (double)rolls_copy_[m_index];
}

void Dice::Erase() {
    rolls_.clear();
    rolls_copy_.clear();
}

void Dice::Test() {
    return;
}

void Main() {
    std::vector<Dice> ds = {Dice(6, 102), Dice(8, 501), Dice(20)};

    for(Dice& d : ds) {
        for(int i = 0; i < 100; i++) {
            d.Roll();
        }
        std::cout << "d.Sides() = " << d.Sides() << std::endl;
        std::cout << "d.Seed() = " << d.Seed() << std::endl;
        std::cout << "d.RollCount() = " << d.RollCount() << std::endl;
        std::cout << "d.AverageRoll() = " << d.AverageRoll() << std::endl;
        std::cout << "d.MedianRoll() = " << d.MedianRoll() << std::endl;
        std::cout << "***************************************************************************************************" << std::endl;
    }
}

}