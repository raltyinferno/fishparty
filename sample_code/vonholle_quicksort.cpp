// vonholle_quicksort.cpp
// James Von Holle
// CS 471
// A basic implementation of quicksort

#include "vonholle_quicksort.h"
#include <vector>
#include <cstddef>   // for std::size_t

#include <iostream>  // for cin/cout

#include <algorithm> // std::sort for testing correctness
#include <random> // random number distribution for testing 

template<class RIT>
void sortem(RIT beginIT, RIT endIT) {
    //base case check
    if(endIT - beginIT <= 1)
        return;
    
    // bools swap_was_called, if that side didn't swap, increment or decrement it accordingly
    bool swap_was_called_j = false;
    bool swap_was_called_i = false;
    
    // pivot point variables, all relating to the pivot and whats going on with it
    auto pivot_point = (endIT-((endIT-beginIT)/2));
    auto pivot_value = *pivot_point;
    auto pivot_plus  = pivot_point+1;
    auto pivot_sub   = pivot_point-1;
    
    // i & j are iteraters that count up or down towards the pivot
    auto i = beginIT;
    auto j = (endIT-1);
    bool j_done = false;
    bool i_done = false;
    
    while(true) {
        swap_was_called_j = false;
        swap_was_called_i = false;
        if(*i > pivot_value && !i_done) {
            if(pivot_point == i) {
                std::swap(*i, *pivot_point);
                break;
            } else {  
                std::swap(*i, *pivot_sub);
                std::swap(*pivot_sub, *pivot_point);
                pivot_point--;
                pivot_plus  = pivot_point+1;
                pivot_sub   = pivot_point-1;
                swap_was_called_i = true;
            }
        }
        if(*j < pivot_value && !j_done) {
            if(pivot_point == j) {
                std::swap(*j, *pivot_point);
                break;
            } else {
                std::swap(*j, *pivot_plus);
                std::swap(*pivot_plus, *pivot_point);
                pivot_point++;
                pivot_plus  = pivot_point+1;
                pivot_sub   = pivot_point-1;
                swap_was_called_j = true;
            }
        }
        
        if(j == pivot_point) 
            j_done = true;
        if(i == pivot_point)
            i_done = true;
        
        if(i_done && j_done)
            break;
        
        if(!swap_was_called_i && !i_done)
            i++;
        if(!swap_was_called_j && !j_done)
            j--;
    }
    
    // Recursive calls 
    sortem(beginIT, pivot_point);
    sortem(pivot_point+1, endIT);
}

template<typename T>
bool test_one(std::vector<T> subject, bool print) {
    bool pass = true;
    if(print) {
        std::cout << "BEGING TESTS" << std::endl;
        std::cout << "SIZE > 0 CHECK: ";
    }
    if(subject.size() > 0) {
        if(print)
            std::cout << "PASS" << std::endl;
    } else {
        if(print)
            std::cout << "FAIL" << std::endl;
        return false;
    }
    std::vector<T> copy = std::vector<T>(subject);
    std::sort(copy.begin(), copy.end());
    sortem(subject.begin(), subject.end());
    
    // check that my algo didn't mess up the size
    if(print)
        std::cout << "SIZE CHECK: ";
    if(copy.size() == subject.size()) {
        if(print) { 
            std::cout << "PASS" << std::endl
                      << "SIZE = " << subject.size() << std::endl;
        }
    } else {
        if(print) { 
            std::cout << "FAIL" << std::endl 
                      << "MY  SIZE = " << subject.size() << std::endl
                      << "STL SIZE = " << copy.size() << std::endl;
        }
        return false;
    }
        
    // check for correctness
    if(print)
        std::cout << "ORDER CHECK: ";
    for(size_t i = 0; i < subject.size(); ++i) {
        if(subject[i] != copy[i]) {
            if(print) {
                std::cout << "FAIL AT OBJECT " << i << std::endl 
                          << "MY  OBJECT: " << subject[i] << std::endl
                          << "STL OBJECT: " << copy[i] << std::endl;
            }
            pass = false;
            break;
        }
    }
    
    // print both for debuging if it's not right
    if(print) { 
        if(!pass)
            for(size_t i = 0; i < subject.size(); ++i)
                std::cout << "MY OBJECT " << i << ": "<< subject[i] << " | | STL OBJECT " << i << ": "<< copy[i] << std::endl;
        else
            std::cout << "PASS" << std::endl;
    }
    
    return pass;
}


// helper functions to fill vectors with random input
void make_rand_vec_int(size_t count, std::vector<int> & vec) {
    vec.clear();
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(-1000, 1000);
    
    for(size_t i = 0; i < count; ++i)
        vec.push_back(dis(gen));
}
void make_rand_vec_char(size_t count, std::vector<char> & vec) {
    vec.clear();
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 127);
    
    for(size_t i = 0; i < count; ++i)
        vec.push_back(dis(gen));
}
void make_rand_vec_real(size_t count, std::vector<double> & vec) {
    vec.clear();
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(-1000, 1000);
    
    for(size_t i = 0; i < count; ++i)
        vec.push_back(dis(gen));
}

int main() {
    size_t rds;
    size_t tms;
    size_t vrs;
    size_t coi;
    int msg;
    double score = 0;
    std::cout << "Nubmer of rounds > ";
    std::cin >> rds;
    std::cout << std::endl << "Nubmer of times/ round > ";
    std::cin >> tms;
    std::cout << std::endl << "Number of variables > ";
    std::cin >> vrs;
    std::cout << std::endl << "1 for int, 2 for char, 3 for doubles > ";
    std::cin >> coi;
    std::cout << std::endl << "1 for test messages, 0 for quiet > ";
    std::cin >> msg;
    
    if (coi == 1) {
        std::vector<int> test_vec;
        make_rand_vec_int(vrs, test_vec);
        double test_ret = 0;
        double count = 0;
        for(size_t j = 0; j < rds; ++j) {
            test_ret = 0;
            count = 0;
             for(size_t i = 0; i < tms; ++i) {
                test_ret += test_one(test_vec, msg);
                count++;
            }
            std::cout << "Pass rate round " << j << ":" <<  (test_ret/count)*100.0 << "%" << std::endl;
            score += (test_ret/count)*100.0;
        }
    } else if (coi == 2) {
        std::vector<char> test_vec;
        make_rand_vec_char(vrs, test_vec);
        double test_ret = 0;
        double count = 0;
        for(size_t j = 0; j < rds; ++j) {
            test_ret = 0;
            count = 0;
             for(size_t i = 0; i < tms; ++i) {
                test_ret += test_one(test_vec, msg);
                count++;
            }
            std::cout << "Pass rate round " << j << ":" <<  (test_ret/count)*100.0 << "%" << std::endl;
            score += (test_ret/count)*100.0;
        }
    } else {
        std::vector<double> test_vec;
        make_rand_vec_real(vrs, test_vec);
        double test_ret = 0;
        double count = 0;
        for(size_t j = 0; j < rds; ++j) {
            test_ret = 0;
            count = 0;
             for(size_t i = 0; i < tms; ++i) {
                test_ret += test_one(test_vec, msg);
                count++;
            }
            std::cout << "Pass rate round " << j << ":" <<  (test_ret/count)*100.0 << "%" << std::endl;
            score += (test_ret/count)*100.0;
        }
    }

    
    
    std::cout << "Average Pass rate : " << (score / rds) << "%" << std::endl;
    return 0;
}