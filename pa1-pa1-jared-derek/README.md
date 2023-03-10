# pa1-pa1-jared-derek

Partner A:
Jared J. Cruz Colón
jared.cruz@upr.edu

Partner B:
Derek M. Texeira Ortiz 
derek.texeira@upr.edu

# PA1: Openframeworks Audiovisualizer
The objective for this first project is to complete this audiovisualizer with the help of OpenFrameworks!

# What it can do out of the box
After compiling and running the project for the first time, you should be able to do a couple of things:

- Using the "a" key, you should be able to play music from "beat.wav" 
- Using different number keys, you can visualize the music in different ways:
    - 1: Rectangle Height Visualizer
    - 2: Circle Radius Visualizer
    - 3: Rectangle Width Visualizer (to be implemented)
    - 4: Custom Visualizer (to be implemented)

# Classes
This project contains two classes that should be of your concern: ofApp and AudioVisualizer.

## ofApp
This is the class that brings most things together. Here, you will find the code that causes the audio to play and pause. It is also to where the visualization happens. Here, you can observe how the code to change between modes works, and how the song is actually played. 

## AudioVisualizer
The AudioVisualizer class provides us with the data needed to do the visualization. Using some of the tools OpenFrameworks provides us and math, we can obtain information such as the amplitude of the sound. 

## Modes 
- 1: Mode 1
- 2: Mode 2
- 3: Mode 3 

## Volume Keys
- =: Volume up
- -: Volume down

##  Songs Keys 
- d: Song 1
- f: Song 2
- g: Song 3
- h: Song 4
##  Record and Replay
- r: Record
- t: Replay
