#include "Canvas.h"

void Canvas::add(std::unique_ptr<Shape> &&shape)
{
    shapes.push_back(std::move(shape));
}

void Canvas::list() const
{
    for (const auto &shape : shapes)
    {
        std::cout << shape->toString() << std::endl;
    }
}

void Canvas::removeById(const std::string &id)
{
    auto it = std::remove_if(shapes.begin(), shapes.end(),
                             [&id](const std::unique_ptr<Shape> &shape)
                             {
                                 return shape->getId() == id;
                             });

    shapes.erase(it, shapes.end());
}

bool Canvas::updateStartById(const std::string &id, const Point &newStart)
{
    auto it = std::find_if(shapes.begin(), shapes.end(),
                           [&id](const std::unique_ptr<Shape> &shape)
                           {
                               return shape->getId() == id;
                           });

    if (it != shapes.end())
    {
        (*it)->move(newStart);
        return true;
    }
    return false;
}
