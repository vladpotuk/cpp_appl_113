#include "LinkedList.h"

int main() {
    
    LinkedList<int> intList;

    intList.AddToHead(1);
    intList.AddToTail(2);
    intList.AddToTail(3);

    std::cout << "Original List: ";
    intList.Show();

    intList.DeleteFromHead();
    intList.DeleteFromTail();

    std::cout << "List after deletions: ";
    intList.Show();

    return 0;
}
