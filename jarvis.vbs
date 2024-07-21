dim a,b,obj,url,c
a=InputBox("Enter Your Name?")
set obj=CreateObject("wscript.shell")
if a="Rishabh" then
set sapi=CreateObject("sapi.SpVoice")
sapi.speak "Hello" +a
c=InputBox("Enter What You Want To Do? Type-1 for Want To Play Game? Type-2 To Open a Application?")
if c=2 then
set sapi=CreateObject("sapi.SpVoice")
sapi.Rate=-1
sapi.speak "What Application You Want To Open"
call program()
function program()
do
b=InputBox("Enter Your Application name:   chrome,facebook,whatsapp,gmail,youtube,netflix,prime,   notepad,cmd,calculator in Small letters")
select case b
case "chrome"
set sapi=CreateObject("sapi.SpVoice")
sapi.speak "Hello Rishabh Now I am Opening Google"
url="https://google.com"
obj.run(url)
exit do
case "whatsapp"
set sapi=CreateObject("sapi.SpVoice")
sapi.speak "Hello Rishabh Now I am Opening Whatsapp"
url="https://web.whatsapp.com"
obj.run(url)
exit do
case "facebook"
set sapi=CreateObject("sapi.SpVoice")
sapi.speak "Hello Rishabh Now I am Opening Facebook"
url="https://facebook.com"
obj.run(url)
exit do
case "youtube"
set sapi=CreateObject("sapi.SpVoice")
sapi.speak "Hello Rishabh Now I am Opening Youtube"
url="https://youtube.com"
obj.run(url)
exit do
case "gmail"
set sapi=CreateObject("sapi.SpVoice")
sapi.speak "Hello Rishabh Now I am Opening Gmail"
url="https://mail.google.com"
obj.run(url)
exit do
case "netflix"
set sapi=CreateObject("sapi.SpVoice")
sapi.speak "Hello Rishabh Now I am Opening Netflix"
url="https://netflix.com"
obj.run(url)
exit do
case "prime"
set sapi=CreateObject("sapi.SpVoice")
sapi.speak "Hello Rishabh Now I am Opening Amazom Prime"
url="https://primevideo.com"
obj.run(url)
exit do
case "notepad"
set sapi=CreateObject("sapi.SpVoice")
sapi.speak "Hello Rishabh Now I am Opening Notepad"
obj.run("notepad.exe")
exit do
case "cmd"
set sapi=CreateObject("sapi.SpVoice")
sapi.speak "Hello Rishabh Now I am Opening Command Prompt"
obj.run("cmd.exe")
exit do
case "calculator"
set sapi=CreateObject("sapi.SpVoice")
sapi.speak "Hello Rishabh Now I am Opening Calculator"
obj.run("calc.exe")
exit do
default:
  set sapi=CreateObject("sapi.SpVoice")
  sapi.Rate=-2
  sapi.Speak "Sorry Application is not there Try Again"
  call program()
end select
loop
end function
elseif c=1 then
set lisa=CreateObject("sapi.SpVoice")
set lisa.Voice=sapi.GetVoices.Item(1)
lisa.Rate=-2
lisa.Speak "Lets Play Match Game Enter Any Number"
call game()
function game()
Dim max,min,rand,w,y
w=InputBox("Choose A Match??")
max=1
min=7
Randomize
rand = Int((max-min+1)*Rnd+min)
if w=rand then
MsgBox "You Win"
lisa.speak "You Win"
else
MsgBox "You Lose"
lisa.speak "You Lose"
wscript.echo rand
y=InputBox("Want to Play Again")
select case y
case "yes"
   call game()
case "no"
   exit function
default:
call game()
end select
end if
end function  
call thanks()
function thanks()
MsgBox "Thank You For Playing"
sapi.speak "Love You Alexia I Made This Game For You."
end function
end if
end if
