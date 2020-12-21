# Paddlist-C

A Pong clone with a twist, made with [SFML](https://www.sfml-dev.org/). Programmed by [Matt Wrench](http://mattwrench.com). NOTE: This is a basic C++ port of the original [Paddlist](https://github.com/mattwrench/paddlist). As this project is only a test of the SFML framework, not all functionality from the original version has been ported (e.g. displaying scores, pausing the game).

## Controls

 - *Move up*: Up arrow or W
 - *Move down*: Down arrow or S

## How to Run

1. Clone [GitHub repo](https://github.com/mattwrench/paddlistC)
2. Download [SFML 2.5.1](https://www.sfml-dev.org/download/sfml/2.5.1/)
3. Inside Visual Studio, modify Project Properties:
    1. Add \include\ directory from SFML download to Include Directories
    2. Add \lib\ directory from SFML download to Library Directories
    3. Add the following files to Additional Dependencies:
        * sfml-audio.lib
        * sfml-graphics.lib
        * sfml-main.lib
        * sfml-network.lib
        * sfml-system.lib
        * sfml-window.lib
4. Copy *.dll files from \bin\ directory from SFML download into the Debug or Release directories
5. Build and run project inside Visual Studio

## License
Copyright 2020 Matt Wrench

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.