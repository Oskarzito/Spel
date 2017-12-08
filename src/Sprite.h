//
// Created by Oskar Emilsson on 2017-12-08.
//

#include "SDL.h"

#ifndef SPEL_SPRITE_H
#define SPEL_SPRITE_H

namespace game {

    class Sprite {

    public:
        virtual ~Sprite(){}

        //Returnera rect. Vi låter den returnera en referens. Inte en kopia
        const SDL_Rect &getRect() const {
            return rect;
        }

        //Ritar ut en sprite. Måste vara överskuggningsbar (virtual)
        //eftersom sprites ritas ut på olika sätt. = 0 gör funktionen
        //abstrakt. Alla subklasser måste implementera den.
        virtual void draw(const SDL_Event &) = 0;

        //Alla skall ha en tick
        virtual void tick() const = 0;

    protected:
        //Konstruktorn måste ta emot koordinater om var komponenterna ska
        //ligga på skärmen. För att förbjuda objektskapande deklarerar vi
        //konstruktorn som protected. Detta tillåter subklasser men ej objekt
        Sprite(int x, int y, int w, int h);

        virtual void updatePosition(int x, int y, int w, int h);//{}

    private:

        SDL_Rect rect;

        //För att förbjuda kopiering och tilldelning
        //Delete förbjuder kopiering
        Sprite(const Sprite&) = delete;

        //Likaså med tilldelning (delete förbjuder)
        const Sprite& operator=(const Sprite&) = delete;

    };

}

#endif //SPEL_SPRITE_H
