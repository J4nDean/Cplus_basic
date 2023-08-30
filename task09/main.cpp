#include <iostream>

class Segment {
    double A, B;
public:
    Segment(double poczatek, double koniec) : A(poczatek), B(koniec) { }

    Segment operator*(double d) const {
        return Segment(A * d, B * d);
    }

    Segment operator/(double d) const {
        return Segment(A / d, B / d);
    }

    Segment operator+(double d) const {
        return Segment(A + d, B + d);
    }

    Segment operator-(double d) const {
        return Segment(A - d, B - d);
    }

    Segment operator+(const Segment& seg) const {
        double minA = (A < seg.A) ? A : seg.A;
        double maxB = (B > seg.B) ? B : seg.B;
        return Segment(minA, maxB);
    }

    bool operator()(double d) const {
        return (d >= A && d <= B);
    }

    friend Segment operator*(double d, const Segment& seg) {
        return seg * d;
    }

    friend Segment operator+(double d, const Segment& seg) {
        return seg + d;
    }

    friend std::ostream& operator<<(std::ostream& os, const Segment& seg) {
        os << "[" << seg.A << "," << seg.B << "]";
        return os;
    }
};

int main() {
    using std::cout; using std::endl;
    Segment seg{2,3};
    Segment s = 1 + 2*((seg-2)/2+seg)/3;
    cout << s << endl << std::boolalpha;
    for (double x = 0.5; x < 4; x += 1)
        cout << "x=" << x << ": " << s(x) << endl;
}
