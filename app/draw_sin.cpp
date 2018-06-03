//
// Created by Gang-Ryung Uh on 6/2/18.
//

#include <iostream>
#include <fstream>
#include <cmath>
#include <SFML/Graphics.hpp>

using namespace std;

int main() {

    // draw Canvas to the window!
    sf::RenderWindow window(sf::VideoMode(800,600), "Sin curve with SFML VertexArray");
    sf::VertexArray m_points;

    unsigned canvas_width = window.getSize().x;
    unsigned canvas_height = window.getSize().y-100;

    const double step = 0.01;
    for (double x = 0.0; x < canvas_width*0.2; x = x + step) {
        double y = sin(x);
        m_points.append(sf::Vertex(sf::Vector2f(x*20,canvas_height/2-y*80), sf::Color::Red));
    }

    while(window.isOpen()){
        sf::Event event;
        while(window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        window.clear();
        window.draw(m_points);
        window.display();
    }
    return 0;
}