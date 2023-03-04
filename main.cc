#include <iostream>
#include "skiplist.h"

#define FILE_PATH "./dumpFile"

int main() {
    //键值中的键使用int类型，如果使用其他类型，需要自定义比较函数
    //而且如果修改key的类型，同时需要修改load_file函数
    SkipList<int, std::string> skiplist(6);

    skiplist.insert_element(1, "a");
    skiplist.insert_element(2, "b");
    skiplist.insert_element(3, "c");
    skiplist.insert_element(4, "d");
    skiplist.insert_element(5, "e");
    skiplist.insert_element(6, "f");

    std::cout << "skip list size: " << skiplist.size() << std::endl;

    skiplist.dump_file();
    // skiplist.load_file();

    skiplist.search_element(2);
    skiplist.search_element(5);

    skiplist.display_list();

    skiplist.delete_element(3);
    skiplist.delete_element(6);

    std::cout << "skip list size: " << skiplist.size() << std::endl;

    skiplist.display_list();





}