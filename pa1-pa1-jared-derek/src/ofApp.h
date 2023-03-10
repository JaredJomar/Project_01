#pragma once

#include "ofMain.h"
#include "AudioVisualizer.h"

class ofApp : public ofBaseApp
{
public:
    void setup();
    void update();
    void draw();

    void drawMode1(vector<float> amplitudes);
    void drawMode2(vector<float> amplitudes);
    void drawMode3(vector<float> amplitudes);
    void drawMode4(vector<float> amplitudes);
    void keyPressed(int key);
    void keyReleased(int key);
    void keyRecording(int key);
    void mouseMoved(int x, int y);
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);

    bool record;
	bool replay;
	vector <int> keyrecording;
	vector <AudioVisualizer> AViz;

	char currentKey;
	unsigned int index;
	int countdown;

	string replaystring;
	string recordstring;

private:
    ofSoundPlayer sound;
    AudioVisualizer visualizer;

    bool playing = false;
    char mode = '1';
};