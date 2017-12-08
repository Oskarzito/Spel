//
// Created by Oskar Emilsson on 2017-11-30.
//

#include "System.h"
#include <string>

namespace game {

    System::System() {

        SDL_Init(SDL_INIT_EVERYTHING);

        std::string title = "ENTER TITLE HERE!";
        window = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_CENTERED,
                                  SDL_WINDOWPOS_CENTERED, 800, 600, 0);

        //-1 ger renderare som passar
        renderer = SDL_CreateRenderer(window, -1, 0);

        //Init på TTF om vi använder en font
        TTF_Init();

        //Ta bort denna! Endast här för att testa att fönstret syns
        SDL_Delay(5000);

    }

    System::~System() {

        //Stäng fonten
        //TTF_CloseFont(font);

        //Avsluta TTF
        TTF_Quit();

        SDL_DestroyWindow(window);
        SDL_DestroyRenderer(renderer);

        SDL_Quit();
    }

    SDL_Renderer* System::getRenderer() const {
        return renderer;
    }

    //Get för fonten
    //En global font som vi kan få fram genom att anropa sys.get_font();
    //TTF_Font* System::get_font() const { return font;}

    //Ligger utanför funktioner så objektet blir statiskt
    System system;

}