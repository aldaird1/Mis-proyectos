#include <iostream>
#include <unordered_map>
#include <string>

// Interfaz Flyweight
class Circulo {
public:
    virtual void dibujar(int x, int y) = 0;
    virtual ~Circulo() = default;
};

// ConcreteFlyweight
class CirculoConcreto : public Circulo {
private:
    std::string color;
    int radio;
public:
    CirculoConcreto(const std::string& color, int radio) : color(color), radio(radio) {}

    void dibujar(int x, int y) override {
        std::cout << "Dibujando un círculo de color " << color << " con radio " << radio << " en (" << x << ", " << y << ")" << std::endl;
    }
};

// FlyweightFactory
class CirculoFactory {
private:
    std::unordered_map<std::string, Circulo*> circulos;
public:
    ~CirculoFactory() {
        for (auto& pair : circulos) {
            delete pair.second;
        }
    }

    Circulo* obtenerCirculo(const std::string& color, int radio) {
        std::string clave = color + std::to_string(radio);
        if (circulos.find(clave) == circulos.end()) {
            circulos[clave] = new CirculoConcreto(color, radio);
            std::cout << "Creando un círculo de color " << color << " con radio " << radio << std::endl;
        }
        return circulos[clave];
    }
};

int main() {
    CirculoFactory factory;

    Circulo* circulo1 = factory.obtenerCirculo("Rojo", 5);
    circulo1->dibujar(10, 20);

    Circulo* circulo2 = factory.obtenerCirculo("Rojo", 5);
    circulo2->dibujar(30, 40);

    Circulo* circulo3 = factory.obtenerCirculo("Azul", 10);
    circulo3->dibujar(50, 60);

    return 0;
}
