#if __cplusplus
extern "C" {
#endif

//This cunning file remaps DOSBox's SDL_sound header include to our custom framework instead
#if defined(C_SDL1) && C_SDL1
#import <SDL_sound/SDL_sound.h>
#else
#import <SDL2_sound/SDL_sound.h>
#endif

#if __cplusplus
} //Extern C
#endif
