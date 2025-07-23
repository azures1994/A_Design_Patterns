#include <string>
#include <algorithm>
#include "Folder.h"

void Folder::display(int depth) const{
    printf("%s%s\n", std::string(depth, '-').c_str(), _name.c_str());
    for(const auto& child : _children){
        child->display(depth + 2);
    }
}

void Folder::add(std::shared_ptr<FileSystemComponent> component){
    this->_children.push_back(component);
}

void Folder::remove(std::shared_ptr<FileSystemComponent> component){
    auto it = std::remove(this->_children.begin(), this->_children.end(), component);
    this->_children.erase(it, this->_children.end());
}