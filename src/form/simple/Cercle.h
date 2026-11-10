//
// Created by TheNesur on 10/11/2026.
//

#ifndef M1_S7_ALGO_SFML_CERCLE_H
#define M1_S7_ALGO_SFML_CERCLE_H
#include <ostream>
#include <string>


class Cercle {
    int _x;
    int _y;
    int _radius;
    std::string _color; // Changer en class

public:
    Cercle(int x, int y, int radius, const std::string &color)
        : _x(x),
          _y(y),
          _radius(radius),
          _color(color) {
    }

    [[nodiscard]] int get_x() const {
        return _x;
    }

    void set_x(int x) {
        _x = x;
    }

    [[nodiscard]] int get_y() const {
        return _y;
    }

    void set_y(int y) {
        _y = y;
    }

    [[nodiscard]] int get_radius() const {
        return _radius;
    }

    void set_radius(int radius) {
        _radius = radius;
    }

    [[nodiscard]] std::string get_color() const {
        return _color;
    }

    void set_color(const std::string &color) {
        _color = color;
    }

    [[nodiscard]] int x() const {
        return _x;
    }

    void set_x1(int x) {
        _x = x;
    }

    [[nodiscard]] int y() const {
        return _y;
    }

    void set_y1(int y) {
        _y = y;
    }

    [[nodiscard]] int radius() const {
        return _radius;
    }

    void set_radius1(int radius) {
        _radius = radius;
    }

    [[nodiscard]] std::string color() const {
        return _color;
    }

    void set_color1(const std::string &color) {
        _color = color;
    }

    friend std::ostream & operator<<(std::ostream &os, const Cercle &obj) {
        return os
               << "_x: " << obj._x
               << " _y: " << obj._y
               << " _radius: " << obj._radius
               << " _color: " << obj._color;
    }
};


#endif //M1_S7_ALGO_SFML_CERCLE_H
