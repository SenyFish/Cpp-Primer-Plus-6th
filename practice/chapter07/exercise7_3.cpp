//
// Created by Shujia Huang on 2/9/22.
//
#include <iostream>

typedef struct {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
} Box;

void output(Box bx) {
    std::cout << "盒子制造商：" << bx.maker << std::endl;
    std::cout << "盒子高度：" << bx.height << std::endl;
    std::cout << "盒子宽度：" << bx.width << std::endl;
    std::cout << "盒子长度：" << bx.length << std::endl;
    std::cout << "盒子体积：" << bx.volume << std::endl;
}

void calculate_volume(Box *p_bx) {
    p_bx->volume = p_bx->height * p_bx->width * p_bx->length;
}

int main() {
    Box bx = {"Jay", 0.49, 2.94, 0.49, 0.0};

    output(bx);
    calculate_volume(&bx);

    std::cout << "\n--\n";
    output(bx);

    return 0;
}
