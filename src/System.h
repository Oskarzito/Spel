//
// Created by Oskar Emilsson on 2017-11-30.
//

#ifndef SPEL_SYSTEM_H
#define SPEL_SYSTEM_H

#include <SDL.h>
#include <SDL_ttf.h>

namespace game {

    class System {

    public:

        System();

        ~System();

        SDL_Renderer *getRenderer() const;

        //Eventuellt en font också
        //TTF_Font* getFont() const;

    private:

        SDL_Window *window;
        SDL_Renderer *renderer;

        //Eventuellt font
        //TTF_Font* font;

    };

    //extern = Alla som inkluderar headerfilen får en
    //deklaration att det finns någonstans ett objekt av typen System
    extern System system;

}
#endif //SPEL_SYSTEM_H
