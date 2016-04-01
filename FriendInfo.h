#include <iostream>
#include <string>

struct Friend{
 std::string name;
 Friend *next;
};

Friend* get_frind(){
 Friend *current, *first;
 int response;

 //Allocate firest node 
 current = first = new Friend;
 //store name of firest frined 
 std::cout << "\nNAME" ;
 std::cin >> current->name;
 //prompt user about another friend 
 std::cout << "\n add another friend (1 == yes, 0=no): ";
 std::cin >> response ;

 // add frind to list until user singal halt 
 while ( response == 1 ) {
	//Allocate another friend node
        current = current->next = new Friend;
	//store name of next friend
	std::cout << "\n NAME";
	std::cin >> current->name;
	//prompt user about another friend
	std::cout << "\n add another friend (1 == yes, 0=no): ";
	std::cin >> response ;
  }
// set link field in last node to 0
 current->next=0;
 return first;
}

void print_frind(const Friend *ptr) {
 int count=1;
 std::cout <<"\n\n\n";
 while ( ptr != 0 ) {
	std::cout << "Frind number " << count++ << "is "<< ptr->name << '\n';
	ptr=ptr->next;
 }
}

void freeList(const Friend* ptr) {
 const Friend *temp_ptr;
 while ( ptr != 0 ) {
	temp_ptr = ptr->next;
	delete ptr;
	ptr = temp_ptr;
 }
}
