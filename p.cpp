#include <iostream>

int main(){
    int n;
    std::cin >> n;
    
    int* list = new int[n];
    
    int len = 0;
    for(int i = 0; i<n; i++){
        std::cin >> list[i];
        if (list[i]%2 == 0){
        	len++;
        }
    }
    
    int* list2 = new int[len];
    int ind = 0;
    for(int i =0; i<n; i++){
    	if(list[i]%2 == 0){
    		list2[ind] = list[i];
    		ind++;
    	}
    }
    
    std::cout << "Event count: "<< len << "\n";
    std::cout <<"Event numbers: ";
    if (len==0){
    	std::cout << "none";
    }
    for(int i = 0; i<len; i++){
    	if(i < len - 1){
    		std::cout<< list2[i ] << "  ";
    	}
    	else{
    		std::cout << list2[i]<< "\n";
    	}
    }
    delete[] list;
    list = nullptr;
    delete[] list2;
    list2 = nullptr;
    return 0;
}
