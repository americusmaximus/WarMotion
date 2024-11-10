/*
Copyright (c) 2024 Americus Maximus

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#pragma once

#include "App.hxx"
#include "Sound.hxx"
#include "Window.hxx"

typedef struct StateContainer
{
    BOOL                                IsIniActive;    // 0x0040e240

    struct
    {
        HMODULE                         Module;         // 0x0040e244
        RENDERERMODULESTATECONTAINERPTR State;          // 0x0040e248
    } Renderer;

    MODULEPTR                           Module;         // 0x0040e3a0

    struct
    {
        HMODULE                         Handle;         // 0x0040e3cc
    } Text;

    APPPTR                              App;            // 0x0040e3d0

    SOUNDPTR                            Sound;          // 0x0040e3d8

    struct
    {
        ACTIONHANDLERPTR                Activate;      // 0x0040e3e0
        ACTIONHANDLERPTR                Initialize;    // 0x0040e3e4
        ACTIONHANDLERPTR                Action;        // 0x0040e3e8
        ACTIONHANDLERPTR                Release;       // 0x0040e3ec
        ACTIONHANDLERPTR                Message;       // 0x0040e3f0

        ACTIONHANDLERPTR                Active;        // 0x0040e3f4
    } Actions;

    WINDOWPTR                           Window;         // 0x0040e3f8

    struct
    {
        LPSTR                           All;            // 0x0040e3fc
        LPSTR*                          Args;           // 0x0040e400
        U32                             Count;          // 0x0040e404
    } Arguments;

    LOGGERPTR                           Logger;         // 0x0040e408
} STATECONTAINER, * STATECONTAINERPTR;

EXTERN STATECONTAINER State;