//
// Created by Oskar Emilsson on 2017-12-08.
//

#include "Sprite.h"

namespace game {

    Sprite::Sprite(int x, int y, int w, int h) {
        rect.x = x;
        rect.y = y;
        rect.w = w;
        rect.h = h;
    }

    void Sprite::updatePosition(int x, int y, int w, int h) {
        rect.x = x;
        rect.y = y;
        rect.w = w;
        rect.h = h;
    }

}