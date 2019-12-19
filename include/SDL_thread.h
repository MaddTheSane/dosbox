#if __cplusplus
extern "C" {
#endif

//This cunning file remaps DOSBox's SDL header include to our custom framework instead
#import <SDL2/SDL_thread.h>

#if __cplusplus
} //Extern C
#endif
