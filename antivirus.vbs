set wshShell=Wscript.CreateObject("Wscript.Shell")
Wscript.Sleep 2000
set objShell=CreateObject("Wscript.Shell")
objShell.Run "antivirus.bat"
set sapi=CreateObject("sapi.SpVoice")
sapi.Speak "Detection starts"
wscript.sleep 3000
sapi.Speak "We Make Log Files In Your System"
wscript.sleep 3000
sapi.Speak "This Antivirus Is Scan .bat and .vbs Files In Your System"
wscript.sleep 2000
set lisa=CreateObject("sapi.SpVoice")
set lisa.Voice=lisa.GetVoices.Item(1)
lisa.Speak "We Make 2 log files one for .bat that is search.log file and another for .vbs that is searcher.log file"
lisa.Speak 3000
lisa.Speak "Thank You For Using Our Antivirus!!"
