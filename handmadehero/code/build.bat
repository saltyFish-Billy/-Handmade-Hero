@echo off
mkdir ..\..\build
pushd ..\..\build
cd
cl -Zi  ..\handmadehero\code\win32_handmade.cpp user32.lib Gdi32.lib
popd
