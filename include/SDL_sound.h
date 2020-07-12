#if __cplusplus
extern "C" {
#endif

//This cunning file remaps DOSBox's SDL_sound header include to our custom framework instead
#ifdef C_SDL_SOUND
#import <SDL_sound/SDL_sound.h>
#else
#error SDL_sound is not available
#endif

#if __cplusplus
} //Extern C
#endif
