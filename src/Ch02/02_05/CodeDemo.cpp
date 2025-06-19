// Debugging in C++ with Visual Studio Code
// Challenge 02_05
// Debug with a knife in the woods, by Eduardo Corpeño

#include <iostream>
#include <vector>

using std::vector;

double average(const vector<double>& numbers){
    double sum = 0;
    for(auto& it: numbers){
        sum += it;
        std::cout<<"Sum: "<< sum<< std::endl;
    }
    return sum / numbers.size();
}

int main(){
    vector<double> numbers = {20, 10, 30, 27, 18};
    double learnerResult = average(numbers);
    
    std::cout << "Your code returned: " << learnerResult << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
