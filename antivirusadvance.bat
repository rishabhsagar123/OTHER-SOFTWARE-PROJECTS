@echo off
title The Shield
mode 1000
color 0a
goto start
:start
if exist .bat goto a

:a
color 0c

echo Some files are Running In Your Pc, Wait We Solved it!!
pause
color 06
echo We Make A search.log File For Currently Running Process..
pause
echo Total Running Processes
tasklist /v /fi "STATUS eq running"
pause
tasklist /FI "IMAGENAME eq cmd.exe" /FO CSV > search.log
pause
color 0b
echo Batch Files Running On System
color 01
cd/d C:\Windows\System32
for %%f in (*.bat) do (
    if "%%~xf"==".bat" echo %%f
)
pause
color 0a
echo Your System is Now Safe!!
pause

if exist .vbs goto b
:b
color 0b

echo Something .vbs file is Running In Your Pc, Wait We Solved it!!
pause
color 06
echo We Update searcher.log File For Currently Running Process..
pause
tasklist /FI "IMAGENAME eq wscript.exe" /FO CSV>searcher.log
pause
color 0b
echo "VBS Files Running On System"
color 01
cd/d C:\Windows\System32
for %%f in (*.vbs) do (
    if "%%~xf"==".vbs" echo %%f
)
pause
color 0a
echo Your System is Now Safe!!
pause
taskkill /f /im wscript.exe
pause
goto exit
:exit
echo Solved!!
taskkill /f /im cmd.exe
pause

