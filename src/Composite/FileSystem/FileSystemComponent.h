#pragma once
#include <memory> // std::shared_ptr


class FileSystemComponent{
public:
    virtual ~FileSystemComponent() = default;

    virtual void display(int depth = 0) const = 0;
    virtual void add(std::shared_ptr<FileSystemComponent> component) = 0;
    virtual void remove(std::shared_ptr<FileSystemComponent> component) = 0;

}; // Class FileSystemComponent