dim a,b,obj,url,c

a=InputBox("Enter Your Name")
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
b=InputBox("Enter Your Application name:-chrome,facebook in Small letters")

select case b
case "chrome"
url="https://google.com"
obj.run(url)
exit do



case "whatsapp"
url="https://web.whatsapp.com"
obj.run(url)
exit do

case "facebook"
url="https://facebook.com"
obj.run(url)
exit do



case "thegamevolution"
url="https://gamevolution.in"
obj.run(url)
exit do


case "gmail"
url="https://mail.google.com"
obj.run(url)
exit do

case "youtube"
url="https://youtube.com"
obj.run(url)
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
set sapi=CreateObject("sapi.SpVoice")
sapi.Rate=-2
sapi.Speak "Lets Play Dice Game"
call game()
function game()
Dim max,min,rand,w,y
w=InputBox("Enter A Number its a Dice Game")
max=1
min=7
Randomize
rand = Int((max-min+1)*Rnd+min)
if w=rand then
MsgBox "You Win"
else
MsgBox "You Lose"
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
end function

end if
end if
