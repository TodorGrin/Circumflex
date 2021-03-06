#ifndef LINE_H
#define LINE_H

#include "Vertex.h"

#include <QJsonObject>
#include <QJsonArray>
#include <stdexcept>

class Edge{
public:
    explicit Edge(const QJsonObject &edge, const std::map<int, std::reference_wrapper<Vertex>> &vertices);
    explicit Edge(int idx, int length, Vertex &v1, Vertex &v2);
    explicit Edge() = default;
//    explicit Edge(Edge *edge) {
//        this->idx_ = edge->idx();
//        this->length_ = edge->length();
//        this->vertex1_ = &edge->vertex1();
//        this->vertex2_ = &edge->vertex2();
//    };

    int idx();
    int length();
    Vertex& vertex1();
    Vertex& vertex2();

private:
    int idx_;
    int length_;
    Vertex *vertex1_;
    Vertex *vertex2_;
};

#endif // LINE_H
