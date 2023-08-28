#include <iostream>
#include <vector>
#include <functional>
#include <cmath>

struct Point {
    double x;
    double y;
};

struct Rect {
    Point left_upper;
    Point right_lower;
};

std::vector<double> process(const Rect* rects, size_t sz, std::function<double(Rect)> f) {
    std::vector<double> result;
    for (size_t i = 0; i < sz; ++i) {
        result.push_back(f(rects[i]));
    }
    return result;
}

double area(Rect r) {
    double width = r.right_lower.x - r.left_upper.x;
    double height = r.left_upper.y - r.right_lower.y;
    return width * height;
}

double diagonal(Rect r) {
    double width = r.right_lower.x - r.left_upper.x;
    double height = r.left_upper.y - r.right_lower.y;
    return std::sqrt(width * width + height * height);
}

int main() {
    Rect rects[] = {{{0, 4}, {4, 1}},
                    {{-6, 3}, {6, -2}},
                    {{-7, 4}, {8, -4}}};

    std::vector<double> areas = process(rects, 3, area);
    std::cout << "Pola: ";
    for (double a : areas) {
        std::cout << a << ' ';
    }
    std::cout << '\n';

    std::vector<double> diagonals = process(rects, 3, diagonal);
    std::cout << "Przekatne: ";
    for (double d : diagonals) {
        std::cout << d << ' ';
    }
}