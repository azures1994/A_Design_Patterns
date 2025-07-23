#include "File.h"

void File::display(int depth) const {
    printf("%s%s\n", std::string(depth, '-').c_str(), _name.c_str());
}

void File::add(std::shared_ptr<FileSystemComponent> component){
    throw std::runtime_error("Cannot add to leaf!\n");
}

void File::remove(std::shared_ptr<FileSystemComponent> component){
    throw std::runtime_error("Cannot remove from leaf!\n");
}