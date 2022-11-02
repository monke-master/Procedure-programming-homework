#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

#define UP 10.0
#define DOWN (-10.0)
#define POPULATION_SIZE 5000
#define MAX_GENERATION 500

struct Chromosome {
    float x;
    float y;
    float z;

    Chromosome(float x, float y, float z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }

};

struct ascending {
    bool operator() (const Chromosome& chrome1, const Chromosome& chrome2) {
        return chrome1.z < chrome2.z;
    }
};

struct descending {
    bool operator() (const Chromosome& chrome1, const Chromosome& chrome2) {
        return chrome1.z > chrome2.z;
    }
};


float f(float x, float y) {
    return (3*x*x + x*y + 2*y*y - x - 4*y);
}

float getRandomCoordinate() {
    return DOWN + (UP - DOWN)*rand()/(float)RAND_MAX;
}

bool mutation() {
    int x = rand() % 10 + 1;
    return x == 1;
}

// Поиск локальных минимумов
void findMinimum() {
    vector<Chromosome> population;
    for (int i = 0; i < POPULATION_SIZE; i++) {
        float x = getRandomCoordinate();
        float y = getRandomCoordinate();
        float z = f(x, y);
        Chromosome chrome(x, y, z);
        population.push_back(chrome);
    }

    for (int k = 0; k < MAX_GENERATION; k++) {
        sort(population.begin(), population.end(), ascending());
        Chromosome alpha = population[0];
        vector<int> newPopulation;
        // Создание нового поколения
        for (int i = 0; i < POPULATION_SIZE / 2; i++) {
            Chromosome chrome1 = Chromosome(
                    alpha.x,
                    population[i].y,
                    f(alpha.x, population[i].y));
            // Мутация по х
            if (mutation()) {
                chrome1.x = getRandomCoordinate();
                chrome1.z = f(chrome1.x, chrome1.y);
            }
            // Мутация по y
            if (mutation()) {
                chrome1.y = getRandomCoordinate();
                chrome1.z = f(chrome1.x, chrome1.y);
            }

            Chromosome chrome2 = Chromosome(
                    population[i].x,
                    alpha.y,
                    f(population[i].x, alpha.y));
            // Мутация по х
            if (mutation()) {
                chrome2.x = getRandomCoordinate();
                chrome2.z = f(chrome2.x, chrome2.y);
            }
            // Мутация по y
            if (mutation()) {
                chrome2.y = getRandomCoordinate();
                chrome2.z = f(chrome2.x, chrome2.y);
            }
        }
    }

    sort(population.begin(), population.end(), ascending());
    cout << population[0].x << " " << population[0].y << " " << population[0].z << endl;
}

// Поиск локальных максимумов
void findMaximum() {
    vector<Chromosome> population;
    for (int i = 0; i < POPULATION_SIZE; i++) {
        float x = getRandomCoordinate();
        float y = getRandomCoordinate();
        float z = f(x, y);
        Chromosome chrome(x, y, z);
        population.push_back(chrome);
    }

    for (int k = 0; k < MAX_GENERATION; k++) {
        sort(population.begin(), population.end(), descending());
        Chromosome alpha = population[0];
        vector<int> newPopulation;
        // Создание нового поколения
        for (int i = 0; i < POPULATION_SIZE / 2; i++) {
            Chromosome chrome1 = Chromosome(
                    alpha.x,
                    population[i].y,
                    f(alpha.x, population[i].y));
            // Мутация по х
            if (mutation()) {
                chrome1.x = getRandomCoordinate();
                chrome1.z = f(chrome1.x, chrome1.y);
            }
            // Мутация по y
            if (mutation()) {
                chrome1.y = getRandomCoordinate();
                chrome1.z = f(chrome1.x, chrome1.y);
            }

            Chromosome chrome2 = Chromosome(
                    population[i].x,
                    alpha.y,
                    f(population[i].x, alpha.y));
            // Мутация по х
            if (mutation()) {
                chrome2.x = getRandomCoordinate();
                chrome2.z = f(chrome2.x, chrome2.y);
            }
            // Мутация по y
            if (mutation()) {
                chrome2.y = getRandomCoordinate();
                chrome2.z = f(chrome2.x, chrome2.y);
            }
        }
    }

    sort(population.begin(), population.end(), descending());
    cout << population[0].x << " " << population[0].y << " " << population[0].z << endl;
}

int main() {
    srand(time(NULL));
    findMinimum();
    findMaximum();
    return 0;
}
