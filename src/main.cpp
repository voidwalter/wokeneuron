#include <bits/stdc++.h>


// Simplified conceptual structure
struct Node {
    std::vector<double> weights;
    double bias;
    double output;
    
    // Calculate output: f(sum(inputs * weights) + bias)
    double activate(const std::vector<double>& inputs) {
        double sum = bias;
        for (size_t i = 0; i < inputs.size(); ++i) {
            sum += inputs[i] * weights[i];
        }
        return 1.0 / (1.0 + exp(-sum)); 
    }
};
