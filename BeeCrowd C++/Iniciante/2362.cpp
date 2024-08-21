#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

int _get_value_damage(bool hit_attempt, const std::string& feitico) {
    
    if (hit_attempt) {
        if (feitico == "fire") {
            return 200;
        } else if (feitico == "water") {
            return 300;
        } else if (feitico == "earth") {
            return 400;
        } else if (feitico == "air") {
            return 100;
        }
    }
    return 0;
}

float _get_distance_to_rectangle(float cx, float cy, float x0, float y0, float largura, float altura) {
    
    float closest_x = std::max(x0, std::min(cx, x0 + largura));
    float closest_y = std::max(y0, std::min(cy, y0 + altura));

    float dx = cx - closest_x;
    float dy = cy - closest_y;

    return std::sqrt(dx * dx + dy * dy);
}

bool _get_hit_attempt(float min_distance, int ray_distance) {
    return min_distance <= ray_distance;
}

int _get_ray(const std::string& feitico, int nivel_feitico) {
    if (feitico == "fire") {
        switch (nivel_feitico) {
            case 1: return 20;
            case 2: return 30;
            case 3: return 50;
        }
    } else if (feitico == "water") {
        switch (nivel_feitico) {
            case 1: return 10;
            case 2: return 25;
            case 3: return 40;
        }
    } else if (feitico == "earth") {
        switch (nivel_feitico) {
            case 1: return 25;
            case 2: return 55;
            case 3: return 70;
        }
    } else if (feitico == "air") {
        switch (nivel_feitico) {
            case 1: return 18;
            case 2: return 38;
            case 3: return 60;
        }
    }
    return 0;
}

int main() {
    int casos_teste;
    std::cin >> casos_teste;

    for (int i = 0; i < casos_teste; ++i) {
        int largura, altura, x0, y0, nivel_feitico, cx, cy;
        std::string feitico;

        std::cin >> largura >> altura >> x0 >> y0;
        std::cin >> feitico >> nivel_feitico >> cx >> cy;

        int ray_distance = _get_ray(feitico, nivel_feitico);
        float min_distance = _get_distance_to_rectangle(cx, cy, x0, y0, largura, altura);
        bool hit_attempt = _get_hit_attempt(min_distance, ray_distance);
        int final_damage = _get_value_damage(hit_attempt, feitico);

        std::cout << final_damage << "\n";
    }
    return 0;
}
