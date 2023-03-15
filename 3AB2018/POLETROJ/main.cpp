#include <bits/stdc++.h>
using namespace std;
#define fastio(out) ios_base::sync_with_stdio(false);cin.tie(0);if(out){cout.tie(0);}  //? 0/1 == small_out/big_out


template <typename T> 
struct Point{
    T x, y;

    Point() : Point(0, 0) {}

    Point(T _x, T _y) : x(_x), y(_y) {}

    friend ostream &operator<< (ostream &os, const Point<T> &point) {
        os << point.x << " " << point.y;
        return os;
    }

    friend istream &operator>> (istream &is, Point<T> &point) {
        is >> point.x >> point.y;
        return is;
    }

    Point<T> operator+ (const Point<T> &p2) const { 
        return {x + p2.x, y + p2.y}; 
    }

    Point<T> &operator+= (const Point<T> &p2) {
        x += p2.x, y += p2.y;
        return *this;
    }

    Point<T> operator- (const Point<T> &p2) const {
        return {x - p2.x, y - p2.y}; 
    }

    T dot(const Point<T> &p2) const {           //? iloczyn skalarny
        return x * p2.x + y * p2.y;
    }

    T cross(const Point<T> &p2) const {         //? iloczyn wektorowy
        return x * p2.y - y * p2.x;
    }
};

template <typename T>
T triangle_area(const Point<T> &p1, const Point<T> &p2, const Point<T> &p3) {
    return 0.5 * abs((p2 - p1).cross(p3 - p1));
}

int main() {
    fastio(0);

    Point<long double> points[3];
    for(int i = 0; i < 3; i++){
        long double x, y; cin >> x >> y;
        points[i] += {x, y};
    }

    cout << fixed << setprecision(1);

    cout << triangle_area(points[0], points[1], points[2]);
    
    return 0;
}