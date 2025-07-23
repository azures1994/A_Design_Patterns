#pragma once

#include <vector>
#include <memory>
#include "FileSystemComponent.h"

class Folder : public FileSystemComponent {

public:
    Folder(std::string name_) : _name(name_){}
    ~Folder() = default;

    void display(int depth = 0) const override;
    void add(std::shared_ptr<FileSystemComponent> component) override;
    void remove(std::shared_ptr<FileSystemComponent> component) override;

private:
    std::string _name;
    std::vector<std::shared_ptr<FileSystemComponent>> _children;
}; // class Folder