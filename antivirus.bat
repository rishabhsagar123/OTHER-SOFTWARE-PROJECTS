@echo off
color 0b
mode 1000
:start
cls
echo scanning start
IF EXIST virus.bat goto infected
IF NOT EXIST goto clean
:infected
echo If found then delete
echo press any key to delete
del virus.bat
taskkill /f /im wscript.exe
pause>nul
goto start
:clean
echo Press any key to exit
pause>nul
exit
