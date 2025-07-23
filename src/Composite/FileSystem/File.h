#pragma once

#include <string>
#include "FileSystemComponent.h"

class File : public FileSystemComponent{

public:
    File(std::string name_) : _name(name_){}
    ~File() = default;

    void display(int depth = 0) const override;
    void add(std::shared_ptr<FileSystemComponent> component) override;
    void remove(std::shared_ptr<FileSystemComponent> component) override;

private:
    std::string _name;

}; // class File