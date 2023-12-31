//
// Created by sam on 7/17/23.
//

#ifndef CS5520_FINAL_PROJECT_AUDIOENGINE_H
#define CS5520_FINAL_PROJECT_AUDIOENGINE_H
#include <atomic>
#include <stdint.h>
#include <aaudio/AAudio.h>
#include "Oscillator.h"


class AudioEngine {
public:
    bool start();
    void stop();
    void restart();
    void setToneOn(bool isToneOn);
    void setFrequencies(float frequency1, float frequency2);

private:
    Oscillator oscillator_;
    AAudioStream *stream_;
};


#endif //WAVEMAKER_AUDIOENGINE_H
