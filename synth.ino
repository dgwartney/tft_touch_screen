/* FluxamasynthPlayAllVoices
* Plays all voices with a random algorithmic tune
* on the Modern Device Fluxamasynth Shield
* ModernDevice.com
*/

#include <Fluxamasynth.h>
#include <PgmChange.h>


Fluxamasynth synth = Fluxamasynth();

int counter = 0;
int channel = 0;
int voice = 0;
int j = 0;

void setup() {
    Serial.begin(31250);
    synth.setChannelVolume(channel, 24);
    synth.programChange(0, 9, 40);
    synth.programChange(0, 1, 0);
}

void loop() {
    int channel = 1;

    synth.programChange(channel, 0, 49);


    int note = int(random(36, 100));
    int root = 60;
    int third = 64;
    int fith = 67;

    synth.noteOn(channel, root, 127);
    synth.noteOn(channel, third, 127);
    synth.noteOn(channel, fith, 127);


    delay(1000);
    synth.noteOff(channel, root);
    synth.noteOff(channel, third);
    synth.noteOff(channel, fith);
}
