#include <iostream>

#include "File.h"
#include "Folder.h"

int main(int argc, char* argv[]){

    printf("=== Composite ===\n");

    auto folder1 = std::make_shared<Folder>("folder1");
    auto folder2 = std::make_shared<Folder>("folder2");
    auto folder3 = std::make_shared<Folder>("folder3");


    auto file1 = std::make_shared<File>("file1.txt");
    auto file2 = std::make_shared<File>("file2.txt");
    auto file3 = std::make_shared<File>("file3.txt");
    auto file4 = std::make_shared<File>("file4.txt");
    auto file5 = std::make_shared<File>("file5.txt");

    folder1->add(file1);
    folder1->add(file2);
    folder2->add(file3);
    folder3->add(file4);
    folder3->add(file5);

    auto mainFolder = std::make_shared<Folder>("mainFolder");
    mainFolder->add(folder1);
    mainFolder->add(folder2);
    mainFolder->add(folder3);

    mainFolder->display();
    printf("\n\n");

    folder2->remove(file3);
    mainFolder->display();

    return 0;
}