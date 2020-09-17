/* Insertion sort in nondecreasing order*/

/* In this code we don't require to specify the number of elements.
   User can give any amout of inputs */
   
   
#include<iostream>
#include<vector>
#include<sstream>

//Insertion Sort Function
void insertion_sort(std::vector<int>&numbers){
	int key;
	for(int i = 1; i < numbers.size(); i++){
		int j = i-1;
		key = numbers[i];
		while(j >= 0 && numbers[j] > key){
			numbers[j+1] = numbers[j];			
			j = j-1;			
		}
		numbers[j+1] = key;				
	}	
}


// Main Function

int main(){

//Assigning Variables
	std::string line;							
    int number;
    std::vector<int> numbers;
    
//User Input
    std::cout << "Enter numbers seperated by spaces: ";
    std::getline(std::cin, line);
    std::istringstream std::cin(line);
    while (std::cin >> number)
    	numbers.push_back(number);		
	
	insertion_sort(numbers);		//calling function	

//Printing Output
	std::cout<< "Sorted Numbers: "<< "\n";
	for(int k = 0; k < numbers.size(); k++){
		std::cout<< numbers[k]<< " ";	
	}
}
