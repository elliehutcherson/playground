#include <vector>
#include <random>

namespace dice {

class Dice {
    public:
        Dice(int sides);
        
        Dice(int sides, int seed);

        int Sides();

        int Seed();

        int Roll();

        int RollCount();
        
        int GetRoll(const int index);

        double AverageRoll();
        
        double MedianRoll();

        void Erase();

        void Test();

    private:
        int sides_;
        int seed_;
        std::vector<int> rolls_;
        std::vector<int> rolls_copy_;
        std::default_random_engine rng_;
        std::uniform_int_distribution<int> dist_;
};

void Main();
    
}