set wshShell=Wscript.CreateObject("Wscript.Shell")
Wscript.Sleep 2000
set objShell=CreateObject("Wscript.Shell")
objShell.Run "antivirusadvance.bat"
set sapi=CreateObject("sapi.SpVoice")
sapi.Speak "Detection starts"
sapi.Speak "Detected infected virus gone"
